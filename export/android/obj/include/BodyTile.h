#ifndef INCLUDED_BodyTile
#define INCLUDED_BodyTile

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <Tile.h>
HX_DECLARE_CLASS0(BodyTile)
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxPooled)
HX_DECLARE_CLASS2(flixel,util,FlxPoint)


class HXCPP_CLASS_ATTRIBUTES  BodyTile_obj : public ::Tile_obj{
	public:
		typedef ::Tile_obj super;
		typedef BodyTile_obj OBJ_;
		BodyTile_obj();
		Void __construct(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< BodyTile_obj > __new(hx::Null< int >  __o_X,hx::Null< int >  __o_Y,hx::Null< int >  __o_Z);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BodyTile_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("BodyTile"); }

		bool isHead;
		int arrVert;
		int arrLeft;
		int arrRight;
		::flixel::util::FlxPoint posChange;
		virtual Void playerAdjacents( );
		Dynamic playerAdjacents_dyn();

};


#endif /* INCLUDED_BodyTile */ 
