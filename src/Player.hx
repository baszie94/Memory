package;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.events.MouseEvent;
import openfl.ui.Mouse;
import openfl.Lib;

/**
 * ...
 * @author Bas Benjamins
 */
class Player
{
	var score:Int = 0;
	public var name:String;
	public var scoreTextField: TextField = new TextField();	
	
	public function new(newName:String, x:Int, y:Int) 
	{
		name = newName;	
		
		//Setup score text field
		updateScoreTextField();
		scoreTextField.x = x;
		scoreTextField.y = y;
		scoreTextField.scaleX = 3;
		scoreTextField.scaleY = 3;
	}
	
	public function addScore(addedscore:Int)
	{
		score += addedscore;
		updateScoreTextField();
	}
	
	function updateScoreTextField()
	{
		scoreTextField.text = name +": " + score;
	}

	
}