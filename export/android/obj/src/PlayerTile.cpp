#include <hxcpp.h>

#ifndef INCLUDED_PlayerTile
#include <PlayerTile.h>
#endif
#ifndef INCLUDED_Tile
#include <Tile.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxDestroyable
#include <flixel/interfaces/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_interfaces_IFlxPooled
#include <flixel/interfaces/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPoint
#include <flixel/util/FlxPoint.h>
#endif

Void PlayerTile_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z)
{
HX_STACK_FRAME("PlayerTile","new",0x2a849fc1,"PlayerTile.new","PlayerTile.hx",7,0x04c852cf)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Z,"Z")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Z = __o_Z.Default(0);
{
	HX_STACK_LINE(14)
	this->posChange = ::flixel::util::FlxPoint_obj::__new((int)0,(int)0);
	HX_STACK_LINE(13)
	this->arrRight = (int)16;
	HX_STACK_LINE(12)
	this->arrLeft = (int)16;
	HX_STACK_LINE(11)
	this->arrVert = (int)16;
	HX_STACK_LINE(10)
	this->isHead = false;
	HX_STACK_LINE(69)
	int tileX;		HX_STACK_VAR(tileX,"tileX");
	HX_STACK_LINE(69)
	tileX = hx::TCast< Int >::cast((X * (int)60));
	HX_STACK_LINE(70)
	int tileY;		HX_STACK_VAR(tileY,"tileY");
	HX_STACK_LINE(70)
	tileY = hx::TCast< Int >::cast(((Y * (int)60) + (int)80));
	HX_STACK_LINE(71)
	super::__construct(tileX,tileY,null());
	HX_STACK_LINE(73)
	this->tilePosx = X;
	HX_STACK_LINE(74)
	this->tilePosy = Y;
	HX_STACK_LINE(75)
	this->arrPos = ((Y * (int)4) + X);
	HX_STACK_LINE(77)
	if (((Z == (int)0))){
		HX_STACK_LINE(79)
		this->makeGraphic((int)60,(int)60,(int)-663885,true,null());
		HX_STACK_LINE(80)
		this->isHead = true;
		HX_STACK_LINE(81)
		this->tileColor = (int)0;
	}
	else{
		HX_STACK_LINE(85)
		this->makeGraphic((int)60,(int)60,(int)-16744320,true,null());
		HX_STACK_LINE(86)
		this->isHead = false;
		HX_STACK_LINE(87)
		this->tileColor = (int)1;
	}
}
;
	return null();
}

//PlayerTile_obj::~PlayerTile_obj() { }

Dynamic PlayerTile_obj::__CreateEmpty() { return  new PlayerTile_obj; }
hx::ObjectPtr< PlayerTile_obj > PlayerTile_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z)
{  hx::ObjectPtr< PlayerTile_obj > result = new PlayerTile_obj();
	result->__construct(__o_X,__o_Y,__o_Z);
	return result;}

Dynamic PlayerTile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< PlayerTile_obj > result = new PlayerTile_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void PlayerTile_obj::playerAdjacents( ){
{
		HX_STACK_FRAME("PlayerTile","playerAdjacents",0x3a673eb1,"PlayerTile.playerAdjacents","PlayerTile.hx",18,0x04c852cf)
		HX_STACK_THIS(this)
		HX_STACK_LINE(19)
		if (((this->isHead == true))){
			HX_STACK_LINE(21)
			if (((this->tilePosy != (int)0))){
				HX_STACK_LINE(23)
				this->arrVert = (this->arrPos - (int)4);
			}
			else{
				HX_STACK_LINE(25)
				this->arrVert = (int)-1;
			}
			HX_STACK_LINE(27)
			if (((this->tilePosx != (int)3))){
				HX_STACK_LINE(29)
				this->arrRight = (this->arrPos + (int)1);
			}
			else{
				HX_STACK_LINE(31)
				this->arrRight = (int)-1;
			}
			HX_STACK_LINE(33)
			if (((this->tilePosx != (int)0))){
				HX_STACK_LINE(35)
				this->arrLeft = (this->arrPos - (int)1);
			}
			else{
				HX_STACK_LINE(37)
				this->arrLeft = (int)-1;
			}
		}
		HX_STACK_LINE(41)
		if (((this->isHead == false))){
			HX_STACK_LINE(43)
			if (((this->tilePosy != (int)3))){
				HX_STACK_LINE(45)
				this->arrVert = (this->arrPos + (int)4);
			}
			else{
				HX_STACK_LINE(47)
				this->arrVert = (int)-1;
			}
			HX_STACK_LINE(49)
			if (((this->tilePosx != (int)3))){
				HX_STACK_LINE(51)
				this->arrRight = (this->arrPos + (int)1);
			}
			else{
				HX_STACK_LINE(53)
				this->arrRight = (int)-1;
			}
			HX_STACK_LINE(55)
			if (((this->tilePosx != (int)0))){
				HX_STACK_LINE(57)
				this->arrLeft = (this->arrPos - (int)1);
			}
			else{
				HX_STACK_LINE(59)
				this->arrLeft = (int)-1;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(PlayerTile_obj,playerAdjacents,(void))


PlayerTile_obj::PlayerTile_obj()
{
}

void PlayerTile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(PlayerTile);
	HX_MARK_MEMBER_NAME(isHead,"isHead");
	HX_MARK_MEMBER_NAME(arrVert,"arrVert");
	HX_MARK_MEMBER_NAME(arrLeft,"arrLeft");
	HX_MARK_MEMBER_NAME(arrRight,"arrRight");
	HX_MARK_MEMBER_NAME(posChange,"posChange");
	::Tile_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void PlayerTile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(isHead,"isHead");
	HX_VISIT_MEMBER_NAME(arrVert,"arrVert");
	HX_VISIT_MEMBER_NAME(arrLeft,"arrLeft");
	HX_VISIT_MEMBER_NAME(arrRight,"arrRight");
	HX_VISIT_MEMBER_NAME(posChange,"posChange");
	::Tile_obj::__Visit(HX_VISIT_ARG);
}

Dynamic PlayerTile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isHead") ) { return isHead; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrVert") ) { return arrVert; }
		if (HX_FIELD_EQ(inName,"arrLeft") ) { return arrLeft; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"arrRight") ) { return arrRight; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"posChange") ) { return posChange; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"playerAdjacents") ) { return playerAdjacents_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic PlayerTile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"isHead") ) { isHead=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"arrVert") ) { arrVert=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"arrLeft") ) { arrLeft=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"arrRight") ) { arrRight=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"posChange") ) { posChange=inValue.Cast< ::flixel::util::FlxPoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void PlayerTile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("isHead"));
	outFields->push(HX_CSTRING("arrVert"));
	outFields->push(HX_CSTRING("arrLeft"));
	outFields->push(HX_CSTRING("arrRight"));
	outFields->push(HX_CSTRING("posChange"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(PlayerTile_obj,isHead),HX_CSTRING("isHead")},
	{hx::fsInt,(int)offsetof(PlayerTile_obj,arrVert),HX_CSTRING("arrVert")},
	{hx::fsInt,(int)offsetof(PlayerTile_obj,arrLeft),HX_CSTRING("arrLeft")},
	{hx::fsInt,(int)offsetof(PlayerTile_obj,arrRight),HX_CSTRING("arrRight")},
	{hx::fsObject /*::flixel::util::FlxPoint*/ ,(int)offsetof(PlayerTile_obj,posChange),HX_CSTRING("posChange")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("isHead"),
	HX_CSTRING("arrVert"),
	HX_CSTRING("arrLeft"),
	HX_CSTRING("arrRight"),
	HX_CSTRING("posChange"),
	HX_CSTRING("playerAdjacents"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(PlayerTile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(PlayerTile_obj::__mClass,"__mClass");
};

#endif

Class PlayerTile_obj::__mClass;

void PlayerTile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("PlayerTile"), hx::TCanCast< PlayerTile_obj> ,sStaticFields,sMemberFields,
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

void PlayerTile_obj::__boot()
{
}

