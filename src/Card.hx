package;

/**
 * ...
 * @author Bas Benjamins
 */

import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.ui.Mouse;

class Card extends Sprite
{
	
	
	public var cardNumber:Int;
	public var image:Bitmap;
	
	
	public function new(number:Int)
	{
		super(); 
		cardNumber = number;
		
		//Setup frontImage
		image = new Bitmap(Assets.getBitmapData("img/CardBack.jpg"));
				
		addChild(image);
		image.width = 100;
		image.height = 170;		
	}
	
	public function changeToBack() 
	{
		image.bitmapData = Assets.getBitmapData("img/CardBack.jpg");
	}
	
	public function changeToFront() 
	{
		image.bitmapData = Assets.getBitmapData("img/Card_" + (cardNumber % 10 + 1) + ".jpg");
	}
}