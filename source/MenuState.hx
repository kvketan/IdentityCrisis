package;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxMath;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxDestroyUtil;
import flixel.util.FlxColor;

/**
 * A FlxState which can be used for the game's menu.
 */
class MenuState extends FlxState
{
	private var _btnPlay:FlxButton;
	public var stagHeight:Int = FlxG.stage.stageHeight;
	var stagWidth:Int = FlxG.stage.stageWidth; 

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		var canvas = new FlxSprite();
		canvas.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);

		//var lineStyle = { color: FlxColor.RED, thickness: 1 };
		//var fillStyle = { color: FlxColor.RED, alpha: 1 };
		canvas.drawRect(0, 0, FlxG.width, FlxG.height, FlxColor.WHITE);
		canvas.drawRect(120, 10, 10, 10, FlxColor.WHEAT);
		canvas.drawRect(120, 20, 10, 10, FlxColor.TEAL);



		add(canvas);

		var introText1:FlxText = new FlxText(10, 10, 220, "You are this person ");
		var introText2:FlxText = new FlxText(10, 50, 220, "Move around so that you are distinct from other tiles");
		//introText1.setFormat("assets/font.ttf", 10, FlxColor.WHITE);
		//introText2.setFormat("assets/font.ttf", 10, FlxColor.WHITE);
		
		_btnPlay = new FlxButton( 0, 0, "Play", clickPlay);
		_btnPlay.screenCenter();
		add(_btnPlay);
		add(introText1);
		add(introText2);
		super.create();
	}
	
	private function clickPlay():Void
	{
		FlxG.switchState(new PlayState());
	}
	/**
	 * Function that is called when this state is destroyed - you might want to 
	 * consider setting all objects this state uses to null to help garbage collection.
	 */
	override public function destroy():Void
	{
		
		super.destroy();
		_btnPlay = FlxDestroyUtil.destroy(_btnPlay);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}	
}