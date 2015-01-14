package;

import flixel.FlxG;
import flixel.FlxBasic;
import flixel.plugin.FlxPlugin;
import flixel.system.debug.FlxDebugger;
import flixel.system.FlxAssets;
import flixel.system.frontEnds.PluginFrontEnd;

@:allow(flixel.input.FlxSwipe)
@:allow(flixel.input.keyboard.FlxKey)

class GameController extends FlxBasic
{
	public var _up:Bool = false;
	public var _down:Bool = false;
	public var _left:Bool = false;
	public var _right:Bool = false;

	public function checkInput():Void
	{
		#if mobile
		for (swipe in FlxG.swipes)
			{
				if(swipe.distance > 10)
				{
				if(swipe.angle<135 && swipe.angle>45)
				this._right = true;
				else if(swipe.angle>135 || swipe.angle<-135)
				this._down = true;
				else if(swipe.angle<-45 && swipe.angle>-135)
				this._left = true;
				else if(swipe.angle>-45 && swipe.angle<45)
				this._up=true;
				}
			}	
		#end

		#if web
			if(FlxG.keys.justPressed.D)
			this._right = true;
			else if(FlxG.keys.justPressed.S)
			this._down = true;
			else if(FlxG.keys.justPressed.A)
			this._left = true;
			else if(FlxG.keys.justPressed.W)
			this._up=true;
		#end
	}
}