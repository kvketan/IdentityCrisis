#include <hxcpp.h>

#ifndef INCLUDED_GameOverState
#include <GameOverState.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
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

Void GameOverState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("GameOverState","new",0x0e4d841d,"GameOverState.new","GameOverState.hx",16,0xd0ff2df3)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(16)
	super::__construct(MaxSize);
}
;
	return null();
}

//GameOverState_obj::~GameOverState_obj() { }

Dynamic GameOverState_obj::__CreateEmpty() { return  new GameOverState_obj; }
hx::ObjectPtr< GameOverState_obj > GameOverState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< GameOverState_obj > result = new GameOverState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic GameOverState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameOverState_obj > result = new GameOverState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void GameOverState_obj::create( ){
{
		HX_STACK_FRAME("GameOverState","create",0x7dd4e75f,"GameOverState.create","GameOverState.hx",24,0xd0ff2df3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(25)
		::flixel::FlxSprite canvas = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(canvas,"canvas");
		HX_STACK_LINE(26)
		canvas->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,(int)0,true,null());
		HX_STACK_LINE(28)
		::flixel::util::FlxSpriteUtil_obj::drawRect(canvas,(int)120,(int)10,(int)10,(int)10,(int)-663885,null(),null(),null());
		HX_STACK_LINE(29)
		::flixel::util::FlxSpriteUtil_obj::drawRect(canvas,(int)120,(int)20,(int)10,(int)10,(int)-16744320,null(),null(),null());
		HX_STACK_LINE(31)
		this->add(canvas);
		HX_STACK_LINE(33)
		::String currentScore;		HX_STACK_VAR(currentScore,"currentScore");
		HX_STACK_LINE(34)
		::String _g = ::Std_obj::string(::Main_obj::globalScore);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(34)
		::String currentScore1 = (HX_CSTRING("Your score is  ") + _g);		HX_STACK_VAR(currentScore1,"currentScore1");
		HX_STACK_LINE(36)
		::flixel::text::FlxText introText1 = ::flixel::text::FlxText_obj::__new((int)10,(int)10,(int)220,HX_CSTRING("You are this person "),null(),null());		HX_STACK_VAR(introText1,"introText1");
		HX_STACK_LINE(37)
		::flixel::text::FlxText introText2 = ::flixel::text::FlxText_obj::__new((int)10,(int)50,(int)220,HX_CSTRING("Move around so that you are distinct from other tiles"),null(),null());		HX_STACK_VAR(introText2,"introText2");
		HX_STACK_LINE(39)
		::flixel::text::FlxText scoreText = ::flixel::text::FlxText_obj::__new((int)10,(int)10,(int)220,currentScore1,null(),null());		HX_STACK_VAR(scoreText,"scoreText");
		HX_STACK_LINE(40)
		scoreText->setFormat(HX_CSTRING("assets/font.ttf"),(int)15,(int)-1,HX_CSTRING("center"),null(),null(),null());
		HX_STACK_LINE(42)
		::flixel::ui::FlxButton _g1 = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Replay"),this->clickReplay_dyn());		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(42)
		this->btnPlay = _g1;
		HX_STACK_LINE(43)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->btnPlay,null(),null());
		HX_STACK_LINE(44)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(scoreText,null(),null());
		HX_STACK_LINE(45)
		this->btnPlay->set_y((this->btnPlay->y + (int)40));
		HX_STACK_LINE(47)
		this->add(this->btnPlay);
		HX_STACK_LINE(48)
		this->add(introText1);
		HX_STACK_LINE(49)
		this->add(introText2);
		HX_STACK_LINE(50)
		this->add(scoreText);
		HX_STACK_LINE(51)
		this->super::create();
	}
return null();
}


Void GameOverState_obj::clickReplay( ){
{
		HX_STACK_FRAME("GameOverState","clickReplay",0xed22764c,"GameOverState.clickReplay","GameOverState.hx",56,0xd0ff2df3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(56)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(56)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameOverState_obj,clickReplay,(void))

Void GameOverState_obj::destroy( ){
{
		HX_STACK_FRAME("GameOverState","destroy",0xaf910337,"GameOverState.destroy","GameOverState.hx",63,0xd0ff2df3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(65)
		this->super::destroy();
		HX_STACK_LINE(66)
		::flixel::ui::FlxButton _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->btnPlay);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(66)
		this->btnPlay = _g;
	}
return null();
}


Void GameOverState_obj::update( ){
{
		HX_STACK_FRAME("GameOverState","update",0x88cb066c,"GameOverState.update","GameOverState.hx",74,0xd0ff2df3)
		HX_STACK_THIS(this)
		HX_STACK_LINE(74)
		this->super::update();
	}
return null();
}



GameOverState_obj::GameOverState_obj()
{
}

void GameOverState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GameOverState);
	HX_MARK_MEMBER_NAME(btnPlay,"btnPlay");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GameOverState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(btnPlay,"btnPlay");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic GameOverState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"btnPlay") ) { return btnPlay; }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"clickReplay") ) { return clickReplay_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameOverState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"btnPlay") ) { btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameOverState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("btnPlay"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(GameOverState_obj,btnPlay),HX_CSTRING("btnPlay")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("btnPlay"),
	HX_CSTRING("create"),
	HX_CSTRING("clickReplay"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameOverState_obj::__mClass,"__mClass");
};

#endif

Class GameOverState_obj::__mClass;

void GameOverState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameOverState"), hx::TCanCast< GameOverState_obj> ,sStaticFields,sMemberFields,
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

void GameOverState_obj::__boot()
{
}

