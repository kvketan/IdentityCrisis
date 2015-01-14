#ifndef INCLUDED_GameController
#define INCLUDED_GameController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxBasic.h>
HX_DECLARE_CLASS0(GameController)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  GameController_obj : public ::flixel::FlxBasic_obj{
	public:
		typedef ::flixel::FlxBasic_obj super;
		typedef GameController_obj OBJ_;
		GameController_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< GameController_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GameController_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("GameController"); }

		bool _up;
		bool _down;
		bool _left;
		bool _right;
		virtual Void checkInput( );
		Dynamic checkInput_dyn();

};


#endif /* INCLUDED_GameController */ 
