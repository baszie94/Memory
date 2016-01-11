
package;

/**
 * ...
 * @author Bas Benjamins
 */

import haxe.Timer;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.text.TextField;
import openfl.ui.Mouse;
import openfl.Lib;



class Main extends Sprite 
{	
	var board:Sprite = new Sprite();					//contains cards
	var memoryCards:Array<Card> = new Array();			// Array of the memory cards
	var clickedCards:Array<Card> = new Array();			// Array of the clicked cards
	var player1: Player = new Player("Player1");		// Player 1
	var player2: Player = new Player("Player2");		// Player 2
	var currentPlayer:Player;							// Current Player
	var scorePlayer1 : TextField = new TextField();		// Score textfield
	var scorePlayer2 : TextField = new TextField();		// Score textfield
	
	
	
	public function new () 
  {
    super ();
	
	currentPlayer = player1; // starting player = player 1	
	var startButton : Bitmap = new Bitmap (Assets.getBitmapData("img/StartButton.jpg")); // gives startButton an image
	board.addChild(startButton); // adds startbutton to the board
	addChild(board); 
	startButton.x = (stage.stageWidth - startButton.width) / 2;		// puts the startbutton in the middle of the game (width)
    startButton.y = (stage.stageHeight - startButton.height) / 2;   // puts the startbutton in the middle of the game (height)
	
	board.addEventListener(MouseEvent.CLICK, startGame); // adds an event to the startbutton	
  }
  
  function startGame(event:MouseEvent)
  {
	board.removeEventListener (MouseEvent.CLICK, startGame); // removes the event on the startbutton  
	
	
	scorePlayer1.text = "Player 1 " + currentPlayer.score;
	scorePlayer1.x = 1740;
	scorePlayer1.y = 10;
	scorePlayer1.scaleX = 3;
	scorePlayer1.scaleY = 3;
	addChild(scorePlayer1);
	
	scorePlayer2.text = "Player 2 " + currentPlayer.score;
	scorePlayer2.x = 1740;
	scorePlayer2.y = 70;
	scorePlayer2.scaleX = 3;
	scorePlayer2.scaleY = 3;
	addChild(scorePlayer2);
	
	createDeck();
	shuffleDeck();
    createField();	
	
	
  }  
  
  //create an array with the cards of a deck of standard memory cards
  function createDeck()
  {	
	for (i in 0...20)
	{
		var imagePath:String = "img/CardBack.jpg";
		var newCard:Card = new Card(i, imagePath);		
		memoryCards.push(newCard);
	}	
  }

	
    function shuffleDeck()// Shuffling the cards
  {
	var n:Int = memoryCards.length;
	for (i in 0...n)
	{
		var change:Int = i + Math.floor( Math.random() * (n - i) );     
		var tempCard = memoryCards[i];     
		memoryCards[i] = memoryCards[change];     
		memoryCards[change] = tempCard; 
	}
  }
  
  function createField() // place all the cards in the middle of the field 
	{
		board.removeChildren();
		var xPos:Float = 0;
		var n:Int = memoryCards.length;
		
		for (i in 0...n)
		{
			var card = memoryCards[i];
			if (i <= 9) 
			{
			
			card.x = 110 * i;	
			xPos += card.width;
			}
			else 
			{
				card.x = 110 * (i - 10);
				card.y = 200;				
			}
			board.addChild(card);
			
			board.x = (stage.stageWidth - board.width) / 2;
			board.y = (stage.stageHeight - board.height) / 2;
		}
		board.addEventListener(MouseEvent.CLICK, clickedonCard);
	}
	
	function clickedonCard(event: MouseEvent)
	{

		var card = event.target;

		clickedCards.push(card);
		card.changeToFront();

		
		if (clickedCards.length == 2) //checks if it isn't the same card clickecd twice
		{
			
			
			if (clickedCards[0].cardNumber == clickedCards[1].cardNumber)
			{
				clickedCards.remove(clickedCards[1]);
			} 
			else 
			{
				board.removeEventListener (MouseEvent.CLICK, clickedonCard); 
				haxe.Timer.delay(compareCards.bind(clickedCards[0], clickedCards[1]), 500);		//1500??		
				
			}
		}		
	}
	
	function compareCards(first:Card,second:Card)//checking if you got a memory. If yes remove cards and add point to the current player. If not turn them around
	{		
		var x = first.cardNumber % 10;
		var y = second.cardNumber % 10;
		if (x == y)
		{			
			board.removeChild(first);
			board.removeChild(second);
			currentPlayer.addScore(5);
			
			if (currentPlayer == player1)
			{
				scorePlayer1.text = "Player 1 " + currentPlayer.score;
				scorePlayer1.x = 1740;
				scorePlayer1.y = 10;
				scorePlayer1.scaleX = 3;
				scorePlayer1.scaleY = 3;
				addChild(scorePlayer1);
			}
			else
			{
				
				scorePlayer2.text = "Player 2 " + currentPlayer.score;
				scorePlayer2.x = 1740;
				scorePlayer2.y = 70;
				scorePlayer2.scaleX = 3;
				scorePlayer2.scaleY = 3;
				addChild(scorePlayer2);
			}
			
			
			
			trace(scorePlayer1.text);
		}
		else
		{
			first.changeToBack();
			second.changeToBack();
			switchPlayer();
		}
		
		clickedCards.splice(0, clickedCards.length);
		board.addEventListener(MouseEvent.CLICK, clickedonCard);
		
		
	}
	
	function switchPlayer() // checking which player is
	{
		if (currentPlayer == player1) 
		{
			currentPlayer = player2;
		} 
		else
		{
			currentPlayer = player1;
		}
	}
	
	function showText()
	{
		
	}
  

  
}