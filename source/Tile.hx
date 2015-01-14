package ;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;
import flixel.tweens.FlxTween;
import flixel.tweens.FlxEase;


class Tile extends FlxSprite
{
	private var colorArray:Array<Int> = [FlxColor.WHEAT, FlxColor.TEAL, FlxColor.CHARTREUSE, FlxColor.CRIMSON, FlxColor.FOREST_GREEN, FlxColor.FUCHSIA, FlxColor.INDIGO, FlxColor.LAVENDER, FlxColor.KHAKI, FlxColor.GOLDENROD, FlxColor.WHEAT,];
	
	public var tilePosx:Int;
	public var tilePosy:Int;
	public var arrPos:Int = 0;
	public var tileColor:Int = 0;

	public function setTilePosition(X:Int=0, Y:Int=0):Void
	{
		tilePosx = X;
		tilePosy = Y;
		//arrPos = Y*4 + X;



	}

	public function updateColor(X:Int=0):Void
	{
		tileColor = X;
		var colour:Int = colorArray[X];
		makeGraphic(60, 60, colour, true);

	} 

	public function updatePosition():Void
	{
		this.x = tilePosx*60;
		this.y = tilePosy*60 + 80;
		arrPos = this.tilePosy*4 + this.tilePosx;

	}

	public function tweenPosition():Void
	{
		FlxTween.tween(this, { x:tilePosx*60, y:tilePosy*60 + 80}, 0.2, {ease: FlxEase.expoOut});
		arrPos = this.tilePosy*4 + this.tilePosx;
	}


    public function new(X:Int=0, Y:Int=0, Z:Int=0) 
    {

    	var tileX:Int = cast(X*60, Int);
    	var tileY:Int = cast(Y*60 + 80, Int);
        super(tileX, tileY);
        
        tilePosx = X;
    	tilePosy = Y;
    	arrPos = Y*4 + X;

    	tileColor = Z;
        
      
        var colour:Int = colorArray[Z];
        makeGraphic(60, 60, colour, true);

    	

    }
}