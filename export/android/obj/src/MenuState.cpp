#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_PlayState
#include <PlayState.h>
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
#ifndef INCLUDED_openfl__v2_Lib
#include <openfl/_v2/Lib.h>
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
#ifndef INCLUDED_openfl__v2_display_MovieClip
#include <openfl/_v2/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Stage
#include <openfl/_v2/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",16,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	this->stagWidth = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageWidth();
	HX_STACK_LINE(19)
	this->stagHeight = ::openfl::_v2::Lib_obj::get_current()->get_stage()->get_stageHeight();
	HX_STACK_LINE(16)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",26,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(27)
		::flixel::FlxSprite canvas = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(canvas,"canvas");
		HX_STACK_LINE(28)
		canvas->makeGraphic(::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,(int)0,true,null());
		HX_STACK_LINE(32)
		::flixel::util::FlxSpriteUtil_obj::drawRect(canvas,(int)0,(int)0,::flixel::FlxG_obj::width,::flixel::FlxG_obj::height,(int)-1,null(),null(),null());
		HX_STACK_LINE(33)
		::flixel::util::FlxSpriteUtil_obj::drawRect(canvas,(int)120,(int)10,(int)10,(int)10,(int)-663885,null(),null(),null());
		HX_STACK_LINE(34)
		::flixel::util::FlxSpriteUtil_obj::drawRect(canvas,(int)120,(int)20,(int)10,(int)10,(int)-16744320,null(),null(),null());
		HX_STACK_LINE(38)
		this->add(canvas);
		HX_STACK_LINE(40)
		::flixel::text::FlxText introText1 = ::flixel::text::FlxText_obj::__new((int)10,(int)10,(int)220,HX_CSTRING("You are this person "),null(),null());		HX_STACK_VAR(introText1,"introText1");
		HX_STACK_LINE(41)
		::flixel::text::FlxText introText2 = ::flixel::text::FlxText_obj::__new((int)10,(int)50,(int)220,HX_CSTRING("Move around so that you are distinct from other tiles"),null(),null());		HX_STACK_VAR(introText2,"introText2");
		HX_STACK_LINE(45)
		::flixel::ui::FlxButton _g = ::flixel::ui::FlxButton_obj::__new((int)0,(int)0,HX_CSTRING("Play"),this->clickPlay_dyn());		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(45)
		this->_btnPlay = _g;
		HX_STACK_LINE(46)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(this->_btnPlay,null(),null());
		HX_STACK_LINE(47)
		this->add(this->_btnPlay);
		HX_STACK_LINE(48)
		this->add(introText1);
		HX_STACK_LINE(49)
		this->add(introText2);
		HX_STACK_LINE(50)
		this->super::create();
	}
return null();
}


Void MenuState_obj::clickPlay( ){
{
		HX_STACK_FRAME("MenuState","clickPlay",0x5f6a9ec0,"MenuState.clickPlay","MenuState.hx",55,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(55)
		::flixel::FlxState State = ::PlayState_obj::__new(null());		HX_STACK_VAR(State,"State");
		HX_STACK_LINE(55)
		::flixel::FlxG_obj::game->_requestedState = State;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,clickPlay,(void))

Void MenuState_obj::destroy( ){
{
		HX_STACK_FRAME("MenuState","destroy",0xf9ac905e,"MenuState.destroy","MenuState.hx",62,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(64)
		this->super::destroy();
		HX_STACK_LINE(65)
		::flixel::ui::FlxButton _g = ::flixel::util::FlxDestroyUtil_obj::destroy(this->_btnPlay);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(65)
		this->_btnPlay = _g;
	}
return null();
}


Void MenuState_obj::update( ){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",73,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(73)
		this->super::update();
	}
return null();
}



MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_MARK_MEMBER_NAME(stagHeight,"stagHeight");
	HX_MARK_MEMBER_NAME(stagWidth,"stagWidth");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_btnPlay,"_btnPlay");
	HX_VISIT_MEMBER_NAME(stagHeight,"stagHeight");
	HX_VISIT_MEMBER_NAME(stagWidth,"stagWidth");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { return _btnPlay; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stagWidth") ) { return stagWidth; }
		if (HX_FIELD_EQ(inName,"clickPlay") ) { return clickPlay_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stagHeight") ) { return stagHeight; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"_btnPlay") ) { _btnPlay=inValue.Cast< ::flixel::ui::FlxButton >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"stagWidth") ) { stagWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"stagHeight") ) { stagHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_btnPlay"));
	outFields->push(HX_CSTRING("stagHeight"));
	outFields->push(HX_CSTRING("stagWidth"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::ui::FlxButton*/ ,(int)offsetof(MenuState_obj,_btnPlay),HX_CSTRING("_btnPlay")},
	{hx::fsInt,(int)offsetof(MenuState_obj,stagHeight),HX_CSTRING("stagHeight")},
	{hx::fsInt,(int)offsetof(MenuState_obj,stagWidth),HX_CSTRING("stagWidth")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_btnPlay"),
	HX_CSTRING("stagHeight"),
	HX_CSTRING("stagWidth"),
	HX_CSTRING("create"),
	HX_CSTRING("clickPlay"),
	HX_CSTRING("destroy"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

