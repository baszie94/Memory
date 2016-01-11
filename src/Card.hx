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
	public var frontImage:Bitmap;
	
	
	public function new(number:Int,image:String)
	{
		super(); 
		cardNumber = number;
		frontImage = new Bitmap(Assets.getBitmapData(image));
		addChild(frontImage);
		frontImage.width = 100;
		frontImage.height = 170;		
		
	}
	
	public function changeToBack() 
	{
		frontImage.bitmapData = Assets.getBitmapData("img/CardBack.jpg");
	}
	
	public function changeToFront() 
	{
		frontImage.bitmapData = Assets.getBitmapData("img/Card_" + (cardNumber % 10 + 1) + ".jpg");
	}
}