package ;

import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;

class PlayerTile extends Tile
{

	public var isHead:Bool = false;
	public var arrVert:Int = 16;
	public var arrLeft:Int = 16;
	public var arrRight:Int = 16;
	public var posChange = new FlxPoint(0,0);


	public function playerAdjacents():Void
	{
		if(isHead==true)
		{
			if(this.tilePosy!=0)
			{
				arrVert = this.arrPos - 4;
			}
			else{arrVert = -1;}

			if(this.tilePosx!=3)
			{
				arrRight = this.arrPos + 1;
			}
			else{arrRight = -1;}

			if(this.tilePosx!=0)
			{
				arrLeft = this.arrPos - 1;
			}
			else{arrLeft = -1;}

		}

		if(isHead==false)
		{
			if(this.tilePosy!=3)
			{
				arrVert = this.arrPos + 4;
			}
			else{arrVert = -1;}

			if(this.tilePosx!=3)
			{
				arrRight = this.arrPos + 1;
			}
			else{arrRight = -1;}

			if(this.tilePosx!=0)
			{
				arrLeft = this.arrPos - 1;
			}
			else{arrLeft = -1;}

		}
		
	}


    public function new(X:Int=0, Y:Int=0, Z:Int=0) 
    {
        
    	var tileX:Int = cast(X*60, Int);
    	var tileY:Int = cast(Y*60 + 80, Int);
        super(tileX, tileY);
        
        tilePosx = X;
    	tilePosy = Y;
    	arrPos = Y*4 + X;
    	
        if(Z==0)
        {
        	makeGraphic(60, 60, FlxColor.WHEAT, true);
        	isHead = true;
        	tileColor = 0;
        }
        else
        {
        	makeGraphic(60, 60, FlxColor.TEAL, true);
        	isHead = false;
        	tileColor = 1;	
        }

    
    }
}