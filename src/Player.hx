package;
import openfl.Assets;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.text.TextField;
import openfl.events.MouseEvent;
import openfl.ui.Mouse;
import openfl.Lib;
import openfl.text.TextFormat;
import openfl.text.TextFormatAlign;
import openfl.text.TextFieldAutoSize;

/**
 * ...
 * @author Bas Benjamins
 */
class Player
{
	var score:Int = 0;
	public var name:String;
	public var scoreTextField: TextField = new TextField();	
	public var scoreTextFormat:TextFormat = new TextFormat(Assets.getFont("fonts/MORPHEUS.TTF").fontName,30, 0xffffff, null, null, null, null, null, TextFormatAlign.CENTER);
	
	
	public function new(newName:String, x:Int, y:Int) 
	{
		name = newName;			
		
		//Setup score text field
		updateScoreTextField();		
		
		scoreTextField.x = x;
		scoreTextField.y = y;
		scoreTextField.scaleX = 1;
		scoreTextField.scaleY = 1;	
		scoreTextField.selectable = false;	
		scoreTextField.autoSize = TextFieldAutoSize.LEFT;
		scoreTextField.defaultTextFormat = scoreTextFormat;
			
	}
	
	public function addScore(addedscore:Int)
	{
		score += addedscore;
		updateScoreTextField();
	}
	
	function updateScoreTextField()
	{
		
		scoreTextField.text = name + ": " + score;
		
	}
	
	
	
}