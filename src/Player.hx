package;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.events.MouseEvent;
import openfl.ui.Mouse;
import openfl.Lib;

/**
 * ...
 * @author Bas Benjamins
 */
class Player
{
	public var score:Int = 0;
	public var name:String;
	
	public function new(newName:String) 
	{
		name = newName;		
	}
	
	public function addScore(addedscore:Int)
	{
		score += addedscore;
	}

	
}