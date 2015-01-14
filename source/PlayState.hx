package;

import flixel.FlxG;
import flixel.FlxBasic;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.text.FlxText;
import flixel.ui.FlxButton;
import flixel.util.FlxColor;
import flixel.util.FlxPoint;
import flixel.input.touch.FlxTouchManager;
import flixel.util.FlxDestroyUtil;
import flixel.input.FlxSwipe;
import flixel.util.FlxRandom;
using flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;


class PlayState extends FlxState
{
	private var _tileHead:PlayerTile;
	private var _tileBody:PlayerTile;
	
	private var _tile1:Tile;
	private var _tile2:Tile;
	public var _tile3:Tile;
	private var _tile4:Tile;
	private var _tile5:Tile;
	private var _tile6:Tile;
	private var _tile7:Tile;
	private var _tile8:Tile;
	private var _tile9:Tile;
	private var _tile10:Tile;
	private var _tile11:Tile;
	private var _tile12:Tile;
	private var _tile13:Tile;
	private var _tile14:Tile;

	var scoreText:FlxText;
	var myScore:Int;


	var _up:Bool = false;
	var _down:Bool = false;
	var _left:Bool = false;
	var _right:Bool = false;

	var myTimer:FlxTimer;
	var isGameOver:Bool = false;

	public var myController:GameController = new GameController();



	public var tileMap:Array<Tile>;

	public function checkTrue():Void
	{

		/*-----Final Check-----*/
		_tileHead.tweenPosition();
		_tileBody.tweenPosition();

		_tileHead.playerAdjacents();
		_tileBody.playerAdjacents();

		tileMap[_tileHead.arrPos] = _tileBody;
		tileMap[_tileBody.arrPos] = _tileBody;

		/*-----------Head------------*/
		if(_tileHead.arrVert != -1)
		{
			if(tileMap[_tileHead.arrVert].tileColor == _tileHead.tileColor)
			{
				isGameOver = true;
			}
		}
		if(_tileHead.arrRight != -1)
		{
			if(tileMap[_tileHead.arrRight].tileColor == _tileHead.tileColor)
			{
				isGameOver = true;
			}
		}
		if(_tileHead.arrLeft != -1)
		{
			if(tileMap[_tileHead.arrLeft].tileColor == _tileHead.tileColor)
			{
				isGameOver = true;
			}
		}

		/*-----------Body------------*/
		if(_tileBody.arrVert != -1)
		{
			if(tileMap[_tileBody.arrVert].tileColor == _tileBody.tileColor)
			{
				isGameOver = true;
			}
		}
		if(_tileBody.arrRight != -1)
		{
			if(tileMap[_tileBody.arrRight].tileColor == _tileBody.tileColor)
			{
				isGameOver = true;
			}
			
		}
		if(_tileBody.arrLeft != -1)
		{
			if(tileMap[_tileBody.arrLeft].tileColor == _tileBody.tileColor)
			{
				isGameOver = true;
			}
			
		}

		if(isGameOver == false)
		{
			myScore++;
			myController._up=false;
			myController._down=false;
			myController._left=false;
			myController._right=false;
		}
		
		if(isGameOver == true)
		{
			myTimer = new FlxTimer(2.0, gameOver, 1);
			//myTimer.start();
		}

	}

	public function gameOver(Timer:FlxTimer):Void
	{
		Main.globalScore= myScore;
		myScore = 0;
		FlxG.switchState(new GameOverState());
	}
	

	public function moveUp():Void
	{

		/*-----Head-----*/

		if(_tileHead.arrVert != -1)
		{
			tileMap[_tileHead.arrVert].setTilePosition(_tileBody.tilePosx, _tileBody.tilePosy);
			tileMap[_tileHead.arrVert].tweenPosition();
			
		}
		
		/*-----Body-----*/
		if(_tileBody.arrVert != -1)
		{
			tileMap[_tileBody.arrVert].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileBody.arrRight != -1)
		{
			tileMap[_tileBody.arrRight].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileBody.arrLeft != -1)
		{
			tileMap[_tileBody.arrLeft].updateColor(FlxRandom.intRanged(0, 9));
		}

		/*-----Array-----*/

			tileMap[_tileBody.arrPos] = tileMap[_tileHead.arrVert];
			


		/*-----Movement-----*/
		_tileHead.setTilePosition(_tileHead.tilePosx, _tileHead.tilePosy - 1);
		_tileBody.setTilePosition(_tileBody.tilePosx, _tileBody.tilePosy - 1);

		checkTrue();
	}

	public function moveDown():Void
	{


		/*-----Head-----*/

		if(_tileHead.arrVert != -1)
		{
			tileMap[_tileHead.arrVert].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileHead.arrRight != -1)
		{
			tileMap[_tileHead.arrRight].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileHead.arrLeft != -1)
		{
			tileMap[_tileHead.arrLeft].updateColor(FlxRandom.intRanged(0, 9));
		}

		
		
		/*-----Body-----*/
		if(_tileBody.arrVert != -1)
		{
			tileMap[_tileBody.arrVert].setTilePosition(_tileHead.tilePosx, _tileHead.tilePosy);
			tileMap[_tileBody.arrVert].tweenPosition();
			
		}

		/*-----Array-----*/

			tileMap[_tileHead.arrPos] = tileMap[_tileBody.arrVert];


		/*-----Movement-----*/
		_tileHead.setTilePosition(_tileHead.tilePosx, _tileHead.tilePosy + 1);
		_tileBody.setTilePosition(_tileBody.tilePosx, _tileBody.tilePosy + 1);
			
		checkTrue();
	}

	public function moveRight():Void
	{

		/*-----Head-----*/
		if(_tileHead.arrVert != -1)
		{
			tileMap[_tileHead.arrVert].updateColor(FlxRandom.intRanged(0, 9));
		}

		if(_tileHead.arrRight != -1)
		{
			tileMap[_tileHead.arrRight].setTilePosition(_tileHead.tilePosx, _tileHead.tilePosy);
			tileMap[_tileHead.arrRight].tweenPosition();	
		}
		if(_tileHead.arrLeft != -1)
		{
			tileMap[_tileHead.arrLeft].updateColor(FlxRandom.intRanged(0, 9));
		}
		
		/*-----Body-----*/
		if(_tileBody.arrVert != -1)
		{
			tileMap[_tileBody.arrVert].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileBody.arrRight != -1)
		{
			tileMap[_tileBody.arrRight].setTilePosition(_tileBody.tilePosx, _tileBody.tilePosy);
			tileMap[_tileBody.arrRight].tweenPosition();
		}
		if(_tileBody.arrLeft != -1)
		{
			tileMap[_tileBody.arrLeft].updateColor(FlxRandom.intRanged(0, 9));
		}

		/*-----Array-----*/

			tileMap[_tileHead.arrPos] = tileMap[_tileHead.arrRight];
			tileMap[_tileBody.arrPos] = tileMap[_tileBody.arrRight];
			


		/*-----Movement-----*/
		_tileHead.setTilePosition(_tileHead.tilePosx+1, _tileHead.tilePosy);
		_tileBody.setTilePosition(_tileBody.tilePosx+1, _tileBody.tilePosy);
	
		checkTrue();	
	}

	public function moveLeft():Void
	{

		/*-----Head-----*/
		if(_tileHead.arrVert != -1)
		{
			tileMap[_tileHead.arrVert].updateColor(FlxRandom.intRanged(0, 9));
		}

		if(_tileHead.arrRight != -1)
		{
			tileMap[_tileHead.arrRight].updateColor(FlxRandom.intRanged(0, 9));	
		}
		if(_tileHead.arrLeft != -1)
		{
			tileMap[_tileHead.arrLeft].setTilePosition(_tileHead.tilePosx, _tileHead.tilePosy);
			tileMap[_tileHead.arrLeft].tweenPosition();
		}
		
		/*-----Body-----*/
		if(_tileBody.arrVert != -1)
		{
			tileMap[_tileBody.arrVert].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileBody.arrRight != -1)
		{
			tileMap[_tileBody.arrRight].updateColor(FlxRandom.intRanged(0, 9));
		}
		if(_tileBody.arrLeft != -1)
		{
			tileMap[_tileBody.arrLeft].setTilePosition(_tileBody.tilePosx, _tileBody.tilePosy);
			tileMap[_tileBody.arrLeft].tweenPosition();
		}

		/*-----Array-----*/

			tileMap[_tileHead.arrPos] = tileMap[_tileHead.arrLeft];
			tileMap[_tileBody.arrPos] = tileMap[_tileBody.arrLeft];
			


		/*-----Movement-----*/
		_tileHead.setTilePosition(_tileHead.tilePosx-1, _tileHead.tilePosy);
		_tileBody.setTilePosition(_tileBody.tilePosx-1, _tileBody.tilePosy);
		
		checkTrue();
	}
	



	/*---------------------MAIN FUNCTIONS--------------------------*/
	
	override public function create():Void
	{
		//scoreText.setFormat("assets/font.ttf", 20, FlxColor.WHITE, "center");

		myScore=0;
		
		scoreText = new FlxText(120, 20, 120, "Your Score");


		_tileHead = new PlayerTile(2,1,0);
		_tileBody = new PlayerTile(2,2,1);
		_tileHead.updatePosition();
		_tileBody.updatePosition();

		_tileHead.drawCircle(30, 30, 5, 0x33333333);
		_tileBody.drawRect(25, 25, 10, 10, 0x33333333);



		_tile1 = new Tile(0,0,FlxRandom.intRanged(0, 9));
		_tile2 = new Tile(1,0,FlxRandom.intRanged(0, 9));
		_tile3 = new Tile(2,0,FlxRandom.intRanged(1, 9));
		_tile4 = new Tile(3,0,FlxRandom.intRanged(0, 9));
		_tile5 = new Tile(0,1,FlxRandom.intRanged(0, 9));
		_tile6 = new Tile(1,1,FlxRandom.intRanged(1, 9));
		_tile7 = new Tile(3,1,FlxRandom.intRanged(1, 9));
		_tile8 = new Tile(0,2,FlxRandom.intRanged(0, 9));
		_tile9 = new Tile(1,2,FlxRandom.intRanged(2, 10));
		_tile10 = new Tile(3,2,FlxRandom.intRanged(2, 10));
		_tile11 = new Tile(0,3,FlxRandom.intRanged(0, 9));
		_tile12 = new Tile(1,3,FlxRandom.intRanged(0, 9));
		_tile13 = new Tile(2,3,FlxRandom.intRanged(2, 10));
		_tile14 = new Tile(3,3,FlxRandom.intRanged(0, 9));

		

		add(_tile1);
		add(_tile2);
		add(_tile3);
		add(_tile4);
		add(_tile5);
		add(_tile6);
		add(_tile7);
		add(_tile8);
		add(_tile9);
		add(_tile10);
		add(_tile11);
		add(_tile12);
		add(_tile13);
		add(_tile14);

		add(scoreText);

		add(_tileHead);
		add(_tileBody);

		_tileHead.playerAdjacents();
		_tileBody.playerAdjacents();

		tileMap = [_tile1, _tile2, _tile3, _tile4, _tile5, _tile6, _tileHead, _tile7, _tile8, _tile9, _tileBody, _tile10, _tile11, _tile12, _tile13, _tile14];
		
		super.create();
	}
	
	
	override public function destroy():Void
	{

		super.destroy();
		_tileHead = FlxDestroyUtil.destroy(_tileHead);
		_tileBody = FlxDestroyUtil.destroy(_tileBody);
		_tile1 = FlxDestroyUtil.destroy(_tile1);
		_tile2 = FlxDestroyUtil.destroy(_tile2);
		_tile3 = FlxDestroyUtil.destroy(_tile3);
		_tile4 = FlxDestroyUtil.destroy(_tile4);
		_tile5 = FlxDestroyUtil.destroy(_tile5);
		_tile6 = FlxDestroyUtil.destroy(_tile6);
		_tile7 = FlxDestroyUtil.destroy(_tile7);
		_tile8 = FlxDestroyUtil.destroy(_tile8);
		_tile9 = FlxDestroyUtil.destroy(_tile9);
		_tile10 = FlxDestroyUtil.destroy(_tile10);
		_tile11 = FlxDestroyUtil.destroy(_tile11);
		_tile12 = FlxDestroyUtil.destroy(_tile12);
		_tile13 = FlxDestroyUtil.destroy(_tile13);
		_tile14 = FlxDestroyUtil.destroy(_tile14);
		//tileMap = IFlxDestroyable.destroy;

	}

	/**
	 * Function that is called once every frame.
	 */
	override public function update():Void
	{

		scoreText.text = Std.string(myScore);

		if(isGameOver == false)
		{
			myController.checkInput();

		

			if (myController._up && _tileHead.tilePosy!=0)
			moveUp();

			if (myController._down && _tileHead.tilePosy!=2)
			moveDown();

			if (myController._right && _tileHead.tilePosx!=3)
			moveRight();

			if (myController._left && _tileHead.tilePosx!=0)
			moveLeft();

		}

		
		super.update();
	}	
}