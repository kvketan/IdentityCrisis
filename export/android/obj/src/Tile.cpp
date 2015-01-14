#include <hxcpp.h>

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
#ifndef INCLUDED_flixel_tweens_FlxEase
#include <flixel/tweens/FlxEase.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif

Void Tile_obj::__construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z)
{
HX_STACK_FRAME("Tile","new",0x479a5740,"Tile.new","Tile.hx",10,0x12b05030)
HX_STACK_THIS(this)
HX_STACK_ARG(__o_X,"X")
HX_STACK_ARG(__o_Y,"Y")
HX_STACK_ARG(__o_Z,"Z")
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
int Z = __o_Z.Default(0);
{
	HX_STACK_LINE(17)
	this->tileColor = (int)0;
	HX_STACK_LINE(16)
	this->arrPos = (int)0;
	HX_STACK_LINE(12)
	this->colorArray = Array_obj< int >::__new().Add((int)-663885).Add((int)-16744320).Add((int)-8388864).Add((int)-2354116).Add((int)-14513374).Add((int)-34817).Add((int)-11861886).Add((int)-4882724).Add((int)-3952495).Add((int)-2448096).Add((int)-663885);
	HX_STACK_LINE(55)
	int tileX;		HX_STACK_VAR(tileX,"tileX");
	HX_STACK_LINE(55)
	tileX = hx::TCast< Int >::cast((X * (int)60));
	HX_STACK_LINE(56)
	int tileY;		HX_STACK_VAR(tileY,"tileY");
	HX_STACK_LINE(56)
	tileY = hx::TCast< Int >::cast(((Y * (int)60) + (int)80));
	HX_STACK_LINE(57)
	super::__construct(tileX,tileY,null());
	HX_STACK_LINE(59)
	this->tilePosx = X;
	HX_STACK_LINE(60)
	this->tilePosy = Y;
	HX_STACK_LINE(61)
	this->arrPos = ((Y * (int)4) + X);
	HX_STACK_LINE(63)
	this->tileColor = Z;
	HX_STACK_LINE(66)
	int colour = this->colorArray->__get(Z);		HX_STACK_VAR(colour,"colour");
	HX_STACK_LINE(67)
	this->makeGraphic((int)60,(int)60,colour,true,null());
}
;
	return null();
}

//Tile_obj::~Tile_obj() { }

Dynamic Tile_obj::__CreateEmpty() { return  new Tile_obj; }
hx::ObjectPtr< Tile_obj > Tile_obj::__new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct(__o_X,__o_Y,__o_Z);
	return result;}

Dynamic Tile_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Tile_obj > result = new Tile_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

Void Tile_obj::setTilePosition( hx::Null< int >  __o_X,hx::Null< int >  __o_Y){
int X = __o_X.Default(0);
int Y = __o_Y.Default(0);
	HX_STACK_FRAME("Tile","setTilePosition",0xa4682f99,"Tile.setTilePosition","Tile.hx",20,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
	HX_STACK_ARG(Y,"Y")
{
		HX_STACK_LINE(21)
		this->tilePosx = X;
		HX_STACK_LINE(22)
		this->tilePosy = Y;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Tile_obj,setTilePosition,(void))

Void Tile_obj::updateColor( hx::Null< int >  __o_X){
int X = __o_X.Default(0);
	HX_STACK_FRAME("Tile","updateColor",0x1d6d417a,"Tile.updateColor","Tile.hx",30,0x12b05030)
	HX_STACK_THIS(this)
	HX_STACK_ARG(X,"X")
{
		HX_STACK_LINE(31)
		this->tileColor = X;
		HX_STACK_LINE(32)
		int colour = this->colorArray->__get(X);		HX_STACK_VAR(colour,"colour");
		HX_STACK_LINE(33)
		this->makeGraphic((int)60,(int)60,colour,true,null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Tile_obj,updateColor,(void))

Void Tile_obj::updatePosition( ){
{
		HX_STACK_FRAME("Tile","updatePosition",0xcd7fb8f2,"Tile.updatePosition","Tile.hx",38,0x12b05030)
		HX_STACK_THIS(this)
		HX_STACK_LINE(39)
		this->set_x((this->tilePosx * (int)60));
		HX_STACK_LINE(40)
		this->set_y(((this->tilePosy * (int)60) + (int)80));
		HX_STACK_LINE(41)
		this->arrPos = ((this->tilePosy * (int)4) + this->tilePosx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,updatePosition,(void))

Void Tile_obj::tweenPosition( ){
{
		HX_STACK_FRAME("Tile","tweenPosition",0xb245c914,"Tile.tweenPosition","Tile.hx",46,0x12b05030)
		HX_STACK_THIS(this)
		struct _Function_1_1{
			inline static Dynamic Block( hx::ObjectPtr< ::Tile_obj > __this){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Tile.hx",47,0x12b05030)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("x") , (__this->tilePosx * (int)60),false);
					__result->Add(HX_CSTRING("y") , ((__this->tilePosy * (int)60) + (int)80),false);
					return __result;
				}
				return null();
			}
		};
		struct _Function_1_2{
			inline static Dynamic Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Tile.hx",47,0x12b05030)
				{
					hx::Anon __result = hx::Anon_obj::Create();
					__result->Add(HX_CSTRING("ease") , ::flixel::tweens::FlxEase_obj::expoOut_dyn(),false);
					return __result;
				}
				return null();
			}
		};
		HX_STACK_LINE(47)
		::flixel::tweens::FlxTween_obj::tween(hx::ObjectPtr<OBJ_>(this),_Function_1_1::Block(this),0.2,_Function_1_2::Block());
		HX_STACK_LINE(48)
		this->arrPos = ((this->tilePosy * (int)4) + this->tilePosx);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Tile_obj,tweenPosition,(void))


Tile_obj::Tile_obj()
{
}

void Tile_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Tile);
	HX_MARK_MEMBER_NAME(colorArray,"colorArray");
	HX_MARK_MEMBER_NAME(tilePosx,"tilePosx");
	HX_MARK_MEMBER_NAME(tilePosy,"tilePosy");
	HX_MARK_MEMBER_NAME(arrPos,"arrPos");
	HX_MARK_MEMBER_NAME(tileColor,"tileColor");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Tile_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(colorArray,"colorArray");
	HX_VISIT_MEMBER_NAME(tilePosx,"tilePosx");
	HX_VISIT_MEMBER_NAME(tilePosy,"tilePosy");
	HX_VISIT_MEMBER_NAME(arrPos,"arrPos");
	HX_VISIT_MEMBER_NAME(tileColor,"tileColor");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Tile_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"arrPos") ) { return arrPos; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilePosx") ) { return tilePosx; }
		if (HX_FIELD_EQ(inName,"tilePosy") ) { return tilePosy; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileColor") ) { return tileColor; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { return colorArray; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"updateColor") ) { return updateColor_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"tweenPosition") ) { return tweenPosition_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"updatePosition") ) { return updatePosition_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setTilePosition") ) { return setTilePosition_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Tile_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"arrPos") ) { arrPos=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tilePosx") ) { tilePosx=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tilePosy") ) { tilePosy=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"tileColor") ) { tileColor=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"colorArray") ) { colorArray=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Tile_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("colorArray"));
	outFields->push(HX_CSTRING("tilePosx"));
	outFields->push(HX_CSTRING("tilePosy"));
	outFields->push(HX_CSTRING("arrPos"));
	outFields->push(HX_CSTRING("tileColor"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*Array< int >*/ ,(int)offsetof(Tile_obj,colorArray),HX_CSTRING("colorArray")},
	{hx::fsInt,(int)offsetof(Tile_obj,tilePosx),HX_CSTRING("tilePosx")},
	{hx::fsInt,(int)offsetof(Tile_obj,tilePosy),HX_CSTRING("tilePosy")},
	{hx::fsInt,(int)offsetof(Tile_obj,arrPos),HX_CSTRING("arrPos")},
	{hx::fsInt,(int)offsetof(Tile_obj,tileColor),HX_CSTRING("tileColor")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("colorArray"),
	HX_CSTRING("tilePosx"),
	HX_CSTRING("tilePosy"),
	HX_CSTRING("arrPos"),
	HX_CSTRING("tileColor"),
	HX_CSTRING("setTilePosition"),
	HX_CSTRING("updateColor"),
	HX_CSTRING("updatePosition"),
	HX_CSTRING("tweenPosition"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Tile_obj::__mClass,"__mClass");
};

#endif

Class Tile_obj::__mClass;

void Tile_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Tile"), hx::TCanCast< Tile_obj> ,sStaticFields,sMemberFields,
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

void Tile_obj::__boot()
{
}

