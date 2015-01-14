#ifndef INCLUDED_Tile
#define INCLUDED_Tile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxSprite.h>
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)


class HXCPP_CLASS_ATTRIBUTES  Tile_obj : public ::flixel::FlxSprite_obj{
	public:
		typedef ::flixel::FlxSprite_obj super;
		typedef Tile_obj OBJ_;
		Tile_obj();
		Void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Tile_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("Tile"); }

		Array< int > colorArray;
		int tilePosx;
		int tilePosy;
		int arrPos;
		int tileColor;
		virtual Void setTilePosition( hx::Null< int >  X,hx::Null< int >  Y);
		Dynamic setTilePosition_dyn();

		virtual Void updateColor( hx::Null< int >  X);
		Dynamic updateColor_dyn();

		virtual Void updatePosition( );
		Dynamic updatePosition_dyn();

		virtual Void tweenPosition( );
		Dynamic tweenPosition_dyn();

};


#endif /* INCLUDED_Tile */ 
