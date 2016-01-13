
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
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.text.TextFieldAutoSize;





class Main extends Sprite 
{	
	var board:Sprite = new Sprite();						// Contains cards
	var memoryCards:Array<Card> = new Array();				// Array of the memory cards
	var clickedCards:Array<Card> = new Array();				// Array of the clicked cards
	var player1: Player = new Player("Player1", 1500, 10);	// Create Player 1
	var player2: Player = new Player("Player2", 1500, 70);	// Create Player 2
	var currentPlayer:Player;								// Current Player
	var currentPlayerTextField: TextField = new TextField();// Textfield that shows current player	
	var scoreTextFormat:TextFormat = new TextFormat(Assets.getFont("fonts/MORPHEUS.TTF").fontName,35, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER); //Textformat to change the font,colour,etc.
	
	
	
	public function new () 
	{
		super ();
		
		var backGround : Bitmap = new Bitmap (Assets.getBitmapData("img/BackGround.jpg")); // gives startButton an image
		addChild(backGround); 
		
		var startButton : Bitmap = new Bitmap (Assets.getBitmapData("img/StartButton.jpg")); // gives startButton an image
		board.addChild(startButton); // adds startbutton to the board
		addChild(board); 
		
		startButton.x = (stage.stageWidth - startButton.width) / 2;		// puts the startbutton in the middle of the game (width)
		startButton.y = 750; 
		

		board.addEventListener(MouseEvent.CLICK, startGame); // adds an event to the startbutton	
	}
  
	function startGame(event:MouseEvent)
	{
		board.removeEventListener (MouseEvent.CLICK, startGame); // removes the event on the startbutton  
		
		//Setup the game		
		setupPlayers();
		createDeck();
		shuffleDeck();
		createField();
		
	}  
	  
	function setupPlayers() 	
	{
		
		currentPlayer = player1; // starting player = player 1		
		
		//Setup current player text field
		showCurrentPlayer();	
		
		currentPlayerTextField.x = 500;
		currentPlayerTextField.y = 10;
		currentPlayerTextField.scaleX = 1;
		currentPlayerTextField.scaleY = 1;	
		currentPlayerTextField.selectable = false; 	
		currentPlayerTextField.autoSize = TextFieldAutoSize.LEFT;
		currentPlayerTextField.defaultTextFormat = scoreTextFormat;
		
		
		
		//Add textfields
		addChild(currentPlayerTextField);
		addChild(player1.scoreTextField);
		addChild(player2.scoreTextField);
		
		
	}
  
	//create an array with the cards of a deck of standard memory cards
	function createDeck()
	{	
		for (i in 0...20)
		{
			var newCard:Card = new Card(i);		
			memoryCards.push(newCard);			
		}	
	}

	//Shuffle cards
	function shuffleDeck()
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
		trace(memoryCards.length);

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
				haxe.Timer.delay(compareCards.bind(clickedCards[0], clickedCards[1]), 500);		// have to change to 1500!!!			
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
			memoryCards.remove(first);
			memoryCards.remove(second);
			trace(memoryCards.length);
			
			currentPlayer.addScore(5);
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
	
	function switchPlayer() // checking which player's turn it is
	{
		if (currentPlayer == player1) 
		{
			currentPlayer = player2;
		} 
		else
		{
			currentPlayer = player1;
		}
		showCurrentPlayer();
	}
	
	function showCurrentPlayer()
	{
		currentPlayerTextField.text = currentPlayer.name + "'s turn";
		
	} 
	function EndGame()
	{
		//TODO:when all cards are gone, look for which player has won and congratulate the player and show a restart + exit button
		var endGameTextField: TextField = new TextField();
		
		if(memoryCards.length == 20)
		
		{			
			endGameTextField.text = "Congratulations" + currentPlayer;
			endGameTextField.x = 100;		
			endGameTextField.y = 100;
			endGameTextField.scaleX = 2;
			endGameTextField.scaleY = 2;
			endGameTextField.autoSize = TextFieldAutoSize.LEFT;
			endGameTextField.defaultTextFormat = scoreTextFormat;
			
			addChild(endGameTextField);
			trace(endGameTextField.text);
		}		
			
			
	}

	
	
}