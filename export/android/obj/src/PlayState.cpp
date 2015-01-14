#include <hxcpp.h>

#ifndef INCLUDED_GameController
#include <GameController.h>
#endif
#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_PlayerTile
#include <PlayerTile.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Tile
#include <Tile.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxGroup
#include <flixel/group/FlxGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxRandom
#include <flixel/util/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void PlayState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("PlayState","new",0xf8bf96cf,"PlayState.new","PlayState.hx",19,0xb30d7781)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(51)
	this->myController = ::GameController_obj::__new();
	HX_STACK_LINE(49)
	this->isGameOver = false;
	HX_STACK_LINE(46)
	this->_right = false;
	HX_STACK_LINE(45)
	this->_left = false;
	HX_STACK_LINE(44)
	this->_down = false;
	HX_STACK_LINE(43)
	this->_up = false;
	HX_STACK_LINE(19)
	super::__construct(MaxSize);
}
;
	return null();
}

//PlayState_obj::~PlayState_obj() { }

Dynamic PlayState_obj::__CreateEmpty() { return  new PlayState_obj; }
hx::ObjectPtr< PlayState_obj > PlayState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic PlayState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayState_obj > result = new PlayState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void PlayState_obj::checkTrue( ){
{
		HX_STACK_FRAME("PlayState","checkTrue",0xdd3633e5,"PlayState.checkTrue","PlayState.hx",58,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(61)
		this->_tileHead->tweenPosition();
		HX_STACK_LINE(62)
		this->_tileBody->tweenPosition();
		HX_STACK_LINE(64)
		this->_tileHead->playerAdjacents();
		HX_STACK_LINE(65)
		this->_tileBody->playerAdjacents();
		HX_STACK_LINE(67)
		this->tileMap[this->_tileHead->arrPos] = this->_tileBody;
		HX_STACK_LINE(68)
		this->tileMap[this->_tileBody->arrPos] = this->_tileBody;
		HX_STACK_LINE(71)
		if (((this->_tileHead->arrVert != (int)-1))){
			HX_STACK_LINE(73)
			if (((this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >()->tileColor == this->_tileHead->tileColor))){
				HX_STACK_LINE(75)
				this->isGameOver = true;
			}
		}
		HX_STACK_LINE(78)
		if (((this->_tileHead->arrRight != (int)-1))){
			HX_STACK_LINE(80)
			if (((this->tileMap->__get(this->_tileHead->arrRight).StaticCast< ::Tile >()->tileColor == this->_tileHead->tileColor))){
				HX_STACK_LINE(82)
				this->isGameOver = true;
			}
		}
		HX_STACK_LINE(85)
		if (((this->_tileHead->arrLeft != (int)-1))){
			HX_STACK_LINE(87)
			if (((this->tileMap->__get(this->_tileHead->arrLeft).StaticCast< ::Tile >()->tileColor == this->_tileHead->tileColor))){
				HX_STACK_LINE(89)
				this->isGameOver = true;
			}
		}
		HX_STACK_LINE(94)
		if (((this->_tileBody->arrVert != (int)-1))){
			HX_STACK_LINE(96)
			if (((this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >()->tileColor == this->_tileBody->tileColor))){
				HX_STACK_LINE(98)
				this->isGameOver = true;
			}
		}
		HX_STACK_LINE(101)
		if (((this->_tileBody->arrRight != (int)-1))){
			HX_STACK_LINE(103)
			if (((this->tileMap->__get(this->_tileBody->arrRight).StaticCast< ::Tile >()->tileColor == this->_tileBody->tileColor))){
				HX_STACK_LINE(105)
				this->isGameOver = true;
			}
		}
		HX_STACK_LINE(109)
		if (((this->_tileBody->arrLeft != (int)-1))){
			HX_STACK_LINE(111)
			if (((this->tileMap->__get(this->_tileBody->arrLeft).StaticCast< ::Tile >()->tileColor == this->_tileBody->tileColor))){
				HX_STACK_LINE(113)
				this->isGameOver = true;
			}
		}
		HX_STACK_LINE(118)
		if (((this->isGameOver == false))){
			HX_STACK_LINE(120)
			(this->myScore)++;
			HX_STACK_LINE(121)
			this->myController->_up = false;
			HX_STACK_LINE(122)
			this->myController->_down = false;
			HX_STACK_LINE(123)
			this->myController->_left = false;
			HX_STACK_LINE(124)
			this->myController->_right = false;
		}
		HX_STACK_LINE(127)
		if (((this->isGameOver == true))){
			HX_STACK_LINE(129)
			::flixel::util::FlxTimer _g = ::flixel::util::FlxTimer_obj::__new(2.0,this->gameOver_dyn(),(int)1);		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(129)
			this->myTimer = _g;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,checkTrue,(void))

Void PlayState_obj::gameOver( ::flixel::util::FlxTimer Timer){
{
		HX_STACK_FRAME("PlayState","gameOver",0x64a21997,"PlayState.gameOver","PlayState.hx",136,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_ARG(Timer,"Timer")
		HX_STACK_LINE(137)
		::Main_obj::globalScore = this->myScore;
		HX_STACK_LINE(138)
		this->myScore = (int)0;
		HX_STACK_LINE(139)
		{
			HX_STACK_LINE(139)
			::flixel::FlxState State = ::GameOverState_obj::__new(null());		HX_STACK_VAR(State,"State");
			HX_STACK_LINE(139)
			::flixel::FlxG_obj::game->_requestedState = State;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(PlayState_obj,gameOver,(void))

Void PlayState_obj::moveUp( ){
{
		HX_STACK_FRAME("PlayState","moveUp",0xd2bf7cbd,"PlayState.moveUp","PlayState.hx",144,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(148)
		if (((this->_tileHead->arrVert != (int)-1))){
			HX_STACK_LINE(150)
			this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >()->setTilePosition(this->_tileBody->tilePosx,this->_tileBody->tilePosy);
			HX_STACK_LINE(151)
			this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >()->tweenPosition();
		}
		HX_STACK_LINE(156)
		if (((this->_tileBody->arrVert != (int)-1))){
			HX_STACK_LINE(158)
			int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(158)
			this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >()->updateColor(_g);
		}
		HX_STACK_LINE(160)
		if (((this->_tileBody->arrRight != (int)-1))){
			HX_STACK_LINE(162)
			int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(162)
			this->tileMap->__get(this->_tileBody->arrRight).StaticCast< ::Tile >()->updateColor(_g1);
		}
		HX_STACK_LINE(164)
		if (((this->_tileBody->arrLeft != (int)-1))){
			HX_STACK_LINE(166)
			int _g2 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(166)
			this->tileMap->__get(this->_tileBody->arrLeft).StaticCast< ::Tile >()->updateColor(_g2);
		}
		HX_STACK_LINE(171)
		this->tileMap[this->_tileBody->arrPos] = this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >();
		HX_STACK_LINE(176)
		this->_tileHead->setTilePosition(this->_tileHead->tilePosx,(this->_tileHead->tilePosy - (int)1));
		HX_STACK_LINE(177)
		this->_tileBody->setTilePosition(this->_tileBody->tilePosx,(this->_tileBody->tilePosy - (int)1));
		HX_STACK_LINE(179)
		this->checkTrue();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,moveUp,(void))

Void PlayState_obj::moveDown( ){
{
		HX_STACK_FRAME("PlayState","moveDown",0x93e8eb44,"PlayState.moveDown","PlayState.hx",183,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(188)
		if (((this->_tileHead->arrVert != (int)-1))){
			HX_STACK_LINE(190)
			int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(190)
			this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >()->updateColor(_g);
		}
		HX_STACK_LINE(192)
		if (((this->_tileHead->arrRight != (int)-1))){
			HX_STACK_LINE(194)
			int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(194)
			this->tileMap->__get(this->_tileHead->arrRight).StaticCast< ::Tile >()->updateColor(_g1);
		}
		HX_STACK_LINE(196)
		if (((this->_tileHead->arrLeft != (int)-1))){
			HX_STACK_LINE(198)
			int _g2 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(198)
			this->tileMap->__get(this->_tileHead->arrLeft).StaticCast< ::Tile >()->updateColor(_g2);
		}
		HX_STACK_LINE(204)
		if (((this->_tileBody->arrVert != (int)-1))){
			HX_STACK_LINE(206)
			this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >()->setTilePosition(this->_tileHead->tilePosx,this->_tileHead->tilePosy);
			HX_STACK_LINE(207)
			this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >()->tweenPosition();
		}
		HX_STACK_LINE(213)
		this->tileMap[this->_tileHead->arrPos] = this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >();
		HX_STACK_LINE(217)
		this->_tileHead->setTilePosition(this->_tileHead->tilePosx,(this->_tileHead->tilePosy + (int)1));
		HX_STACK_LINE(218)
		this->_tileBody->setTilePosition(this->_tileBody->tilePosx,(this->_tileBody->tilePosy + (int)1));
		HX_STACK_LINE(220)
		this->checkTrue();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,moveDown,(void))

Void PlayState_obj::moveRight( ){
{
		HX_STACK_FRAME("PlayState","moveRight",0xe37d9eba,"PlayState.moveRight","PlayState.hx",224,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(227)
		if (((this->_tileHead->arrVert != (int)-1))){
			HX_STACK_LINE(229)
			int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(229)
			this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >()->updateColor(_g);
		}
		HX_STACK_LINE(232)
		if (((this->_tileHead->arrRight != (int)-1))){
			HX_STACK_LINE(234)
			this->tileMap->__get(this->_tileHead->arrRight).StaticCast< ::Tile >()->setTilePosition(this->_tileHead->tilePosx,this->_tileHead->tilePosy);
			HX_STACK_LINE(235)
			this->tileMap->__get(this->_tileHead->arrRight).StaticCast< ::Tile >()->tweenPosition();
		}
		HX_STACK_LINE(237)
		if (((this->_tileHead->arrLeft != (int)-1))){
			HX_STACK_LINE(239)
			int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(239)
			this->tileMap->__get(this->_tileHead->arrLeft).StaticCast< ::Tile >()->updateColor(_g1);
		}
		HX_STACK_LINE(243)
		if (((this->_tileBody->arrVert != (int)-1))){
			HX_STACK_LINE(245)
			int _g2 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(245)
			this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >()->updateColor(_g2);
		}
		HX_STACK_LINE(247)
		if (((this->_tileBody->arrRight != (int)-1))){
			HX_STACK_LINE(249)
			this->tileMap->__get(this->_tileBody->arrRight).StaticCast< ::Tile >()->setTilePosition(this->_tileBody->tilePosx,this->_tileBody->tilePosy);
			HX_STACK_LINE(250)
			this->tileMap->__get(this->_tileBody->arrRight).StaticCast< ::Tile >()->tweenPosition();
		}
		HX_STACK_LINE(252)
		if (((this->_tileBody->arrLeft != (int)-1))){
			HX_STACK_LINE(254)
			int _g3 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(254)
			this->tileMap->__get(this->_tileBody->arrLeft).StaticCast< ::Tile >()->updateColor(_g3);
		}
		HX_STACK_LINE(259)
		this->tileMap[this->_tileHead->arrPos] = this->tileMap->__get(this->_tileHead->arrRight).StaticCast< ::Tile >();
		HX_STACK_LINE(260)
		this->tileMap[this->_tileBody->arrPos] = this->tileMap->__get(this->_tileBody->arrRight).StaticCast< ::Tile >();
		HX_STACK_LINE(265)
		this->_tileHead->setTilePosition((this->_tileHead->tilePosx + (int)1),this->_tileHead->tilePosy);
		HX_STACK_LINE(266)
		this->_tileBody->setTilePosition((this->_tileBody->tilePosx + (int)1),this->_tileBody->tilePosy);
		HX_STACK_LINE(268)
		this->checkTrue();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,moveRight,(void))

Void PlayState_obj::moveLeft( ){
{
		HX_STACK_FRAME("PlayState","moveLeft",0x992afae9,"PlayState.moveLeft","PlayState.hx",272,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(275)
		if (((this->_tileHead->arrVert != (int)-1))){
			HX_STACK_LINE(277)
			int _g = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(277)
			this->tileMap->__get(this->_tileHead->arrVert).StaticCast< ::Tile >()->updateColor(_g);
		}
		HX_STACK_LINE(280)
		if (((this->_tileHead->arrRight != (int)-1))){
			HX_STACK_LINE(282)
			int _g1 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(282)
			this->tileMap->__get(this->_tileHead->arrRight).StaticCast< ::Tile >()->updateColor(_g1);
		}
		HX_STACK_LINE(284)
		if (((this->_tileHead->arrLeft != (int)-1))){
			HX_STACK_LINE(286)
			this->tileMap->__get(this->_tileHead->arrLeft).StaticCast< ::Tile >()->setTilePosition(this->_tileHead->tilePosx,this->_tileHead->tilePosy);
			HX_STACK_LINE(287)
			this->tileMap->__get(this->_tileHead->arrLeft).StaticCast< ::Tile >()->tweenPosition();
		}
		HX_STACK_LINE(291)
		if (((this->_tileBody->arrVert != (int)-1))){
			HX_STACK_LINE(293)
			int _g2 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(293)
			this->tileMap->__get(this->_tileBody->arrVert).StaticCast< ::Tile >()->updateColor(_g2);
		}
		HX_STACK_LINE(295)
		if (((this->_tileBody->arrRight != (int)-1))){
			HX_STACK_LINE(297)
			int _g3 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g3,"_g3");
			HX_STACK_LINE(297)
			this->tileMap->__get(this->_tileBody->arrRight).StaticCast< ::Tile >()->updateColor(_g3);
		}
		HX_STACK_LINE(299)
		if (((this->_tileBody->arrLeft != (int)-1))){
			HX_STACK_LINE(301)
			this->tileMap->__get(this->_tileBody->arrLeft).StaticCast< ::Tile >()->setTilePosition(this->_tileBody->tilePosx,this->_tileBody->tilePosy);
			HX_STACK_LINE(302)
			this->tileMap->__get(this->_tileBody->arrLeft).StaticCast< ::Tile >()->tweenPosition();
		}
		HX_STACK_LINE(307)
		this->tileMap[this->_tileHead->arrPos] = this->tileMap->__get(this->_tileHead->arrLeft).StaticCast< ::Tile >();
		HX_STACK_LINE(308)
		this->tileMap[this->_tileBody->arrPos] = this->tileMap->__get(this->_tileBody->arrLeft).StaticCast< ::Tile >();
		HX_STACK_LINE(313)
		this->_tileHead->setTilePosition((this->_tileHead->tilePosx - (int)1),this->_tileHead->tilePosy);
		HX_STACK_LINE(314)
		this->_tileBody->setTilePosition((this->_tileBody->tilePosx - (int)1),this->_tileBody->tilePosy);
		HX_STACK_LINE(316)
		this->checkTrue();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayState_obj,moveLeft,(void))

Void PlayState_obj::create( ){
{
		HX_STACK_FRAME("PlayState","create",0x82220fed,"PlayState.create","PlayState.hx",325,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(328)
		this->myScore = (int)0;
		HX_STACK_LINE(330)
		::flixel::text::FlxText _g = ::flixel::text::FlxText_obj::__new((int)120,(int)20,(int)120,HX_CSTRING("Your Score"),null(),null());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(330)
		this->scoreText = _g;
		HX_STACK_LINE(333)
		::PlayerTile _g1 = ::PlayerTile_obj::__new((int)2,(int)1,(int)0);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(333)
		this->_tileHead = _g1;
		HX_STACK_LINE(334)
		::PlayerTile _g2 = ::PlayerTile_obj::__new((int)2,(int)2,(int)1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(334)
		this->_tileBody = _g2;
		HX_STACK_LINE(335)
		this->_tileHead->updatePosition();
		HX_STACK_LINE(336)
		this->_tileBody->updatePosition();
		HX_STACK_LINE(338)
		::flixel::util::FlxSpriteUtil_obj::drawCircle(this->_tileHead,(int)30,(int)30,(int)5,(int)858993459,null(),null(),null());
		HX_STACK_LINE(339)
		::flixel::util::FlxSpriteUtil_obj::drawRect(this->_tileBody,(int)25,(int)25,(int)10,(int)10,(int)858993459,null(),null(),null());
		HX_STACK_LINE(343)
		int _g3 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(343)
		::Tile _g4 = ::Tile_obj::__new((int)0,(int)0,_g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(343)
		this->_tile1 = _g4;
		HX_STACK_LINE(344)
		int _g5 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(344)
		::Tile _g6 = ::Tile_obj::__new((int)1,(int)0,_g5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(344)
		this->_tile2 = _g6;
		HX_STACK_LINE(345)
		int _g7 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)9,null());		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(345)
		::Tile _g8 = ::Tile_obj::__new((int)2,(int)0,_g7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(345)
		this->_tile3 = _g8;
		HX_STACK_LINE(346)
		int _g9 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(346)
		::Tile _g10 = ::Tile_obj::__new((int)3,(int)0,_g9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(346)
		this->_tile4 = _g10;
		HX_STACK_LINE(347)
		int _g11 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(347)
		::Tile _g12 = ::Tile_obj::__new((int)0,(int)1,_g11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(347)
		this->_tile5 = _g12;
		HX_STACK_LINE(348)
		int _g13 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)9,null());		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(348)
		::Tile _g14 = ::Tile_obj::__new((int)1,(int)1,_g13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(348)
		this->_tile6 = _g14;
		HX_STACK_LINE(349)
		int _g15 = ::flixel::util::FlxRandom_obj::intRanged((int)1,(int)9,null());		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(349)
		::Tile _g16 = ::Tile_obj::__new((int)3,(int)1,_g15);		HX_STACK_VAR(_g16,"_g16");
		HX_STACK_LINE(349)
		this->_tile7 = _g16;
		HX_STACK_LINE(350)
		int _g17 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g17,"_g17");
		HX_STACK_LINE(350)
		::Tile _g18 = ::Tile_obj::__new((int)0,(int)2,_g17);		HX_STACK_VAR(_g18,"_g18");
		HX_STACK_LINE(350)
		this->_tile8 = _g18;
		HX_STACK_LINE(351)
		int _g19 = ::flixel::util::FlxRandom_obj::intRanged((int)2,(int)10,null());		HX_STACK_VAR(_g19,"_g19");
		HX_STACK_LINE(351)
		::Tile _g20 = ::Tile_obj::__new((int)1,(int)2,_g19);		HX_STACK_VAR(_g20,"_g20");
		HX_STACK_LINE(351)
		this->_tile9 = _g20;
		HX_STACK_LINE(352)
		int _g21 = ::flixel::util::FlxRandom_obj::intRanged((int)2,(int)10,null());		HX_STACK_VAR(_g21,"_g21");
		HX_STACK_LINE(352)
		::Tile _g22 = ::Tile_obj::__new((int)3,(int)2,_g21);		HX_STACK_VAR(_g22,"_g22");
		HX_STACK_LINE(352)
		this->_tile10 = _g22;
		HX_STACK_LINE(353)
		int _g23 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g23,"_g23");
		HX_STACK_LINE(353)
		::Tile _g24 = ::Tile_obj::__new((int)0,(int)3,_g23);		HX_STACK_VAR(_g24,"_g24");
		HX_STACK_LINE(353)
		this->_tile11 = _g24;
		HX_STACK_LINE(354)
		int _g25 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g25,"_g25");
		HX_STACK_LINE(354)
		::Tile _g26 = ::Tile_obj::__new((int)1,(int)3,_g25);		HX_STACK_VAR(_g26,"_g26");
		HX_STACK_LINE(354)
		this->_tile12 = _g26;
		HX_STACK_LINE(355)
		int _g27 = ::flixel::util::FlxRandom_obj::intRanged((int)2,(int)10,null());		HX_STACK_VAR(_g27,"_g27");
		HX_STACK_LINE(355)
		::Tile _g28 = ::Tile_obj::__new((int)2,(int)3,_g27);		HX_STACK_VAR(_g28,"_g28");
		HX_STACK_LINE(355)
		this->_tile13 = _g28;
		HX_STACK_LINE(356)
		int _g29 = ::flixel::util::FlxRandom_obj::intRanged((int)0,(int)9,null());		HX_STACK_VAR(_g29,"_g29");
		HX_STACK_LINE(356)
		::Tile _g30 = ::Tile_obj::__new((int)3,(int)3,_g29);		HX_STACK_VAR(_g30,"_g30");
		HX_STACK_LINE(356)
		this->_tile14 = _g30;
		HX_STACK_LINE(360)
		this->add(this->_tile1);
		HX_STACK_LINE(361)
		this->add(this->_tile2);
		HX_STACK_LINE(362)
		this->add(this->_tile3);
		HX_STACK_LINE(363)
		this->add(this->_tile4);
		HX_STACK_LINE(364)
		this->add(this->_tile5);
		HX_STACK_LINE(365)
		this->add(this->_tile6);
		HX_STACK_LINE(366)
		this->add(this->_tile7);
		HX_STACK_LINE(367)
		this->add(this->_tile8);
		HX_STACK_LINE(368)
		this->add(this->_tile9);
		HX_STACK_LINE(369)
		this->add(this->_tile10);
		HX_STACK_LINE(370)
		this->add(this->_tile11);
		HX_STACK_LINE(371)
		this->add(this->_tile12);
		HX_STACK_LINE(372)
		this->add(this->_tile13);
		HX_STACK_LINE(373)
		this->add(this->_tile14);
		HX_STACK_LINE(375)
		this->add(this->scoreText);
		HX_STACK_LINE(377)
		this->add(this->_tileHead);
		HX_STACK_LINE(378)
		this->add(this->_tileBody);
		HX_STACK_LINE(380)
		this->_tileHead->playerAdjacents();
		HX_STACK_LINE(381)
		this->_tileBody->playerAdjacents();
		HX_STACK_LINE(383)
		this->tileMap = Array_obj< ::Dynamic >::__new().Add(this->_tile1).Add(this->_tile2).Add(this->_tile3).Add(this->_tile4).Add(this->_tile5).Add(this->_tile6).Add(this->_tileHead).Add(this->_tile7).Add(this->_tile8).Add(this->_tile9).Add(this->_tileBody).Add(this->_tile10).Add(this->_tile11).Add(this->_tile12).Add(this->_tile13).Add(this->_tile14);
		HX_STACK_LINE(385)
		this->super::create();
	}
return null();
}


Void PlayState_obj::destroy( ){
{
		HX_STACK_FRAME("PlayState","destroy",0x6ec756e9,"PlayState.destroy","PlayState.hx",390,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(392)
		this->super::destroy();
		HX_STACK_LINE(393)
		::PlayerTile _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tileHead);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(393)
		this->_tileHead = _g;
		HX_STACK_LINE(394)
		::PlayerTile _g1 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tileBody);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(394)
		this->_tileBody = _g1;
		HX_STACK_LINE(395)
		::Tile _g2 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(395)
		this->_tile1 = _g2;
		HX_STACK_LINE(396)
		::Tile _g3 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile2);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(396)
		this->_tile2 = _g3;
		HX_STACK_LINE(397)
		::Tile _g4 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(397)
		this->_tile3 = _g4;
		HX_STACK_LINE(398)
		::Tile _g5 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile4);		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(398)
		this->_tile4 = _g5;
		HX_STACK_LINE(399)
		::Tile _g6 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile5);		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(399)
		this->_tile5 = _g6;
		HX_STACK_LINE(400)
		::Tile _g7 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile6);		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(400)
		this->_tile6 = _g7;
		HX_STACK_LINE(401)
		::Tile _g8 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile7);		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(401)
		this->_tile7 = _g8;
		HX_STACK_LINE(402)
		::Tile _g9 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile8);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(402)
		this->_tile8 = _g9;
		HX_STACK_LINE(403)
		::Tile _g10 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile9);		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(403)
		this->_tile9 = _g10;
		HX_STACK_LINE(404)
		::Tile _g11 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile10);		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(404)
		this->_tile10 = _g11;
		HX_STACK_LINE(405)
		::Tile _g12 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile11);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(405)
		this->_tile11 = _g12;
		HX_STACK_LINE(406)
		::Tile _g13 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile12);		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(406)
		this->_tile12 = _g13;
		HX_STACK_LINE(407)
		::Tile _g14 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile13);		HX_STACK_VAR(_g14,"_g14");
		HX_STACK_LINE(407)
		this->_tile13 = _g14;
		HX_STACK_LINE(408)
		::Tile _g15 = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_tile14);		HX_STACK_VAR(_g15,"_g15");
		HX_STACK_LINE(408)
		this->_tile14 = _g15;
	}
return null();
}


Void PlayState_obj::update( ){
{
		HX_STACK_FRAME("PlayState","update",0x8d182efa,"PlayState.update","PlayState.hx",417,0xb30d7781)
		HX_STACK_THIS(this)
		HX_STACK_LINE(419)
		::String _g = ::Std_obj::string(this->myScore);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(419)
		this->scoreText->set_text(_g);
		HX_STACK_LINE(421)
		if (((this->isGameOver == false))){
			HX_STACK_LINE(423)
			this->myController->checkInput();
			HX_STACK_LINE(427)
			if (((bool(this->myController->_up) && bool((this->_tileHead->tilePosy != (int)0))))){
				HX_STACK_LINE(428)
				this->moveUp();
			}
			HX_STACK_LINE(430)
			if (((bool(this->myController->_down) && bool((this->_tileHead->tilePosy != (int)2))))){
				HX_STACK_LINE(431)
				this->moveDown();
			}
			HX_STACK_LINE(433)
			if (((bool(this->myController->_right) && bool((this->_tileHead->tilePosx != (int)3))))){
				HX_STACK_LINE(434)
				this->moveRight();
			}
			HX_STACK_LINE(436)
			if (((bool(this->myController->_left) && bool((this->_tileHead->tilePosx != (int)0))))){
				HX_STACK_LINE(437)
				this->moveLeft();
			}
		}
		HX_STACK_LINE(442)
		this->super::update();
	}
return null();
}



PlayState_obj::PlayState_obj()
{
}

void PlayState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayState);
	HX_MARK_MEMBER_NAME(_tileHead,"_tileHead");
	HX_MARK_MEMBER_NAME(_tileBody,"_tileBody");
	HX_MARK_MEMBER_NAME(_tile1,"_tile1");
	HX_MARK_MEMBER_NAME(_tile2,"_tile2");
	HX_MARK_MEMBER_NAME(_tile3,"_tile3");
	HX_MARK_MEMBER_NAME(_tile4,"_tile4");
	HX_MARK_MEMBER_NAME(_tile5,"_tile5");
	HX_MARK_MEMBER_NAME(_tile6,"_tile6");
	HX_MARK_MEMBER_NAME(_tile7,"_tile7");
	HX_MARK_MEMBER_NAME(_tile8,"_tile8");
	HX_MARK_MEMBER_NAME(_tile9,"_tile9");
	HX_MARK_MEMBER_NAME(_tile10,"_tile10");
	HX_MARK_MEMBER_NAME(_tile11,"_tile11");
	HX_MARK_MEMBER_NAME(_tile12,"_tile12");
	HX_MARK_MEMBER_NAME(_tile13,"_tile13");
	HX_MARK_MEMBER_NAME(_tile14,"_tile14");
	HX_MARK_MEMBER_NAME(scoreText,"scoreText");
	HX_MARK_MEMBER_NAME(myScore,"myScore");
	HX_MARK_MEMBER_NAME(_up,"_up");
	HX_MARK_MEMBER_NAME(_down,"_down");
	HX_MARK_MEMBER_NAME(_left,"_left");
	HX_MARK_MEMBER_NAME(_right,"_right");
	HX_MARK_MEMBER_NAME(myTimer,"myTimer");
	HX_MARK_MEMBER_NAME(isGameOver,"isGameOver");
	HX_MARK_MEMBER_NAME(myController,"myController");
	HX_MARK_MEMBER_NAME(tileMap,"tileMap");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_tileHead,"_tileHead");
	HX_VISIT_MEMBER_NAME(_tileBody,"_tileBody");
	HX_VISIT_MEMBER_NAME(_tile1,"_tile1");
	HX_VISIT_MEMBER_NAME(_tile2,"_tile2");
	HX_VISIT_MEMBER_NAME(_tile3,"_tile3");
	HX_VISIT_MEMBER_NAME(_tile4,"_tile4");
	HX_VISIT_MEMBER_NAME(_tile5,"_tile5");
	HX_VISIT_MEMBER_NAME(_tile6,"_tile6");
	HX_VISIT_MEMBER_NAME(_tile7,"_tile7");
	HX_VISIT_MEMBER_NAME(_tile8,"_tile8");
	HX_VISIT_MEMBER_NAME(_tile9,"_tile9");
	HX_VISIT_MEMBER_NAME(_tile10,"_tile10");
	HX_VISIT_MEMBER_NAME(_tile11,"_tile11");
	HX_VISIT_MEMBER_NAME(_tile12,"_tile12");
	HX_VISIT_MEMBER_NAME(_tile13,"_tile13");
	HX_VISIT_MEMBER_NAME(_tile14,"_tile14");
	HX_VISIT_MEMBER_NAME(scoreText,"scoreText");
	HX_VISIT_MEMBER_NAME(myScore,"myScore");
	HX_VISIT_MEMBER_NAME(_up,"_up");
	HX_VISIT_MEMBER_NAME(_down,"_down");
	HX_VISIT_MEMBER_NAME(_left,"_left");
	HX_VISIT_MEMBER_NAME(_right,"_right");
	HX_VISIT_MEMBER_NAME(myTimer,"myTimer");
	HX_VISIT_MEMBER_NAME(isGameOver,"isGameOver");
	HX_VISIT_MEMBER_NAME(myController,"myController");
	HX_VISIT_MEMBER_NAME(tileMap,"tileMap");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { return _up; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { return _down; }
		if (HX_FIELD_EQ(inName,"_left") ) { return _left; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tile1") ) { return _tile1; }
		if (HX_FIELD_EQ(inName,"_tile2") ) { return _tile2; }
		if (HX_FIELD_EQ(inName,"_tile3") ) { return _tile3; }
		if (HX_FIELD_EQ(inName,"_tile4") ) { return _tile4; }
		if (HX_FIELD_EQ(inName,"_tile5") ) { return _tile5; }
		if (HX_FIELD_EQ(inName,"_tile6") ) { return _tile6; }
		if (HX_FIELD_EQ(inName,"_tile7") ) { return _tile7; }
		if (HX_FIELD_EQ(inName,"_tile8") ) { return _tile8; }
		if (HX_FIELD_EQ(inName,"_tile9") ) { return _tile9; }
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		if (HX_FIELD_EQ(inName,"moveUp") ) { return moveUp_dyn(); }
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tile10") ) { return _tile10; }
		if (HX_FIELD_EQ(inName,"_tile11") ) { return _tile11; }
		if (HX_FIELD_EQ(inName,"_tile12") ) { return _tile12; }
		if (HX_FIELD_EQ(inName,"_tile13") ) { return _tile13; }
		if (HX_FIELD_EQ(inName,"_tile14") ) { return _tile14; }
		if (HX_FIELD_EQ(inName,"myScore") ) { return myScore; }
		if (HX_FIELD_EQ(inName,"myTimer") ) { return myTimer; }
		if (HX_FIELD_EQ(inName,"tileMap") ) { return tileMap; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"gameOver") ) { return gameOver_dyn(); }
		if (HX_FIELD_EQ(inName,"moveDown") ) { return moveDown_dyn(); }
		if (HX_FIELD_EQ(inName,"moveLeft") ) { return moveLeft_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileHead") ) { return _tileHead; }
		if (HX_FIELD_EQ(inName,"_tileBody") ) { return _tileBody; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { return scoreText; }
		if (HX_FIELD_EQ(inName,"checkTrue") ) { return checkTrue_dyn(); }
		if (HX_FIELD_EQ(inName,"moveRight") ) { return moveRight_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isGameOver") ) { return isGameOver; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"myController") ) { return myController; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_up") ) { _up=inValue.Cast< bool >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_down") ) { _down=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_left") ) { _left=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_tile1") ) { _tile1=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile2") ) { _tile2=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile3") ) { _tile3=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile4") ) { _tile4=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile5") ) { _tile5=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile6") ) { _tile6=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile7") ) { _tile7=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile8") ) { _tile8=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile9") ) { _tile9=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_tile10") ) { _tile10=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile11") ) { _tile11=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile12") ) { _tile12=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile13") ) { _tile13=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tile14") ) { _tile14=inValue.Cast< ::Tile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"myScore") ) { myScore=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"myTimer") ) { myTimer=inValue.Cast< ::flixel::util::FlxTimer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMap") ) { tileMap=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_tileHead") ) { _tileHead=inValue.Cast< ::PlayerTile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tileBody") ) { _tileBody=inValue.Cast< ::PlayerTile >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scoreText") ) { scoreText=inValue.Cast< ::flixel::text::FlxText >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isGameOver") ) { isGameOver=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"myController") ) { myController=inValue.Cast< ::GameController >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_tileHead"));
	outFields->push(HX_CSTRING("_tileBody"));
	outFields->push(HX_CSTRING("_tile1"));
	outFields->push(HX_CSTRING("_tile2"));
	outFields->push(HX_CSTRING("_tile3"));
	outFields->push(HX_CSTRING("_tile4"));
	outFields->push(HX_CSTRING("_tile5"));
	outFields->push(HX_CSTRING("_tile6"));
	outFields->push(HX_CSTRING("_tile7"));
	outFields->push(HX_CSTRING("_tile8"));
	outFields->push(HX_CSTRING("_tile9"));
	outFields->push(HX_CSTRING("_tile10"));
	outFields->push(HX_CSTRING("_tile11"));
	outFields->push(HX_CSTRING("_tile12"));
	outFields->push(HX_CSTRING("_tile13"));
	outFields->push(HX_CSTRING("_tile14"));
	outFields->push(HX_CSTRING("scoreText"));
	outFields->push(HX_CSTRING("myScore"));
	outFields->push(HX_CSTRING("_up"));
	outFields->push(HX_CSTRING("_down"));
	outFields->push(HX_CSTRING("_left"));
	outFields->push(HX_CSTRING("_right"));
	outFields->push(HX_CSTRING("myTimer"));
	outFields->push(HX_CSTRING("isGameOver"));
	outFields->push(HX_CSTRING("myController"));
	outFields->push(HX_CSTRING("tileMap"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::PlayerTile*/ ,(int)offsetof(PlayState_obj,_tileHead),HX_CSTRING("_tileHead")},
	{hx::fsObject /*::PlayerTile*/ ,(int)offsetof(PlayState_obj,_tileBody),HX_CSTRING("_tileBody")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile1),HX_CSTRING("_tile1")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile2),HX_CSTRING("_tile2")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile3),HX_CSTRING("_tile3")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile4),HX_CSTRING("_tile4")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile5),HX_CSTRING("_tile5")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile6),HX_CSTRING("_tile6")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile7),HX_CSTRING("_tile7")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile8),HX_CSTRING("_tile8")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile9),HX_CSTRING("_tile9")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile10),HX_CSTRING("_tile10")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile11),HX_CSTRING("_tile11")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile12),HX_CSTRING("_tile12")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile13),HX_CSTRING("_tile13")},
	{hx::fsObject /*::Tile*/ ,(int)offsetof(PlayState_obj,_tile14),HX_CSTRING("_tile14")},
	{hx::fsObject /*::flixel::text::FlxText*/ ,(int)offsetof(PlayState_obj,scoreText),HX_CSTRING("scoreText")},
	{hx::fsInt,(int)offsetof(PlayState_obj,myScore),HX_CSTRING("myScore")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_up),HX_CSTRING("_up")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_down),HX_CSTRING("_down")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_left),HX_CSTRING("_left")},
	{hx::fsBool,(int)offsetof(PlayState_obj,_right),HX_CSTRING("_right")},
	{hx::fsObject /*::flixel::util::FlxTimer*/ ,(int)offsetof(PlayState_obj,myTimer),HX_CSTRING("myTimer")},
	{hx::fsBool,(int)offsetof(PlayState_obj,isGameOver),HX_CSTRING("isGameOver")},
	{hx::fsObject /*::GameController*/ ,(int)offsetof(PlayState_obj,myController),HX_CSTRING("myController")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(PlayState_obj,tileMap),HX_CSTRING("tileMap")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_tileHead"),
	HX_CSTRING("_tileBody"),
	HX_CSTRING("_tile1"),
	HX_CSTRING("_tile2"),
	HX_CSTRING("_tile3"),
	HX_CSTRING("_tile4"),
	HX_CSTRING("_tile5"),
	HX_CSTRING("_tile6"),
	HX_CSTRING("_tile7"),
	HX_CSTRING("_tile8"),
	HX_CSTRING("_tile9"),
	HX_CSTRING("_tile10"),
	HX_CSTRING("_tile11"),
	HX_CSTRING("_tile12"),
	HX_CSTRING("_tile13"),
	HX_CSTRING("_tile14"),
	HX_CSTRING("scoreText"),
	HX_CSTRING("myScore"),
	HX_CSTRING("_up"),
	HX_CSTRING("_down"),
	HX_CSTRING("_left"),
	HX_CSTRING("_right"),
	HX_CSTRING("myTimer"),
	HX_CSTRING("isGameOver"),
	HX_CSTRING("myController"),
	HX_CSTRING("tileMap"),
	HX_CSTRING("checkTrue"),
	HX_CSTRING("gameOver"),
	HX_CSTRING("moveUp"),
	HX_CSTRING("moveDown"),
	HX_CSTRING("moveRight"),
	HX_CSTRING("moveLeft"),
	HX_CSTRING("create"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayState_obj::__mClass,"__mClass");
};

#endif

Class PlayState_obj::__mClass;

void PlayState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayState"), hx::TCanCast< PlayState_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void PlayState_obj::__boot()
{
}

