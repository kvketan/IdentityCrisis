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
class GameOverState extends FlxState
{
	private var btnPlay:FlxButton;

	/**
	 * Function that is called up when to state is created to set it up. 
	 */
	override public function create():Void
	{
		var canvas = new FlxSprite();
		canvas.makeGraphic(FlxG.width, FlxG.height, FlxColor.TRANSPARENT, true);

		canvas.drawRect(120, 10, 10, 10, FlxColor.WHEAT);
		canvas.drawRect(120, 20, 10, 10, FlxColor.TEAL);

		add(canvas);

		var currentScore:String;
		var currentScore = "Your score is  " + Std.string(Main.globalScore);

		var introText1:FlxText = new FlxText(10, 10, 220, "You are this person ");
		var introText2:FlxText = new FlxText(10, 50, 220, "Move around so that you are distinct from other tiles");

		var scoreText:FlxText = new FlxText(10, 10, 220, currentScore);
		scoreText.setFormat("assets/font.ttf", 15, FlxColor.WHITE, "center");

		btnPlay = new FlxButton( 0, 0, "Replay", clickReplay);
		btnPlay.screenCenter();
		scoreText.screenCenter();
		btnPlay.y = btnPlay.y + 40;

		add(btnPlay);
		add(introText1);
		add(introText2);
		add(scoreText);
		super.create();
	}
	
	private function clickReplay():Void
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
		btnPlay = FlxDestroyUtil.destroy(btnPlay);
	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{
		super.update();
	}	
}