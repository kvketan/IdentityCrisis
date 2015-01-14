#ifndef INCLUDED_PlayState
#define INCLUDED_PlayState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <flixel/FlxState.h>
HX_DECLARE_CLASS0(GameController)
HX_DECLARE_CLASS0(PlayState)
HX_DECLARE_CLASS0(PlayerTile)
HX_DECLARE_CLASS0(Tile)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxGroup)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,interfaces,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)


class HXCPP_CLASS_ATTRIBUTES  PlayState_obj : public ::flixel::FlxState_obj{
	public:
		typedef ::flixel::FlxState_obj super;
		typedef PlayState_obj OBJ_;
		PlayState_obj();
		Void __construct(Dynamic MaxSize);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< PlayState_obj > __new(Dynamic MaxSize);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayState_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("PlayState"); }

		::PlayerTile _tileHead;
		::PlayerTile _tileBody;
		::Tile _tile1;
		::Tile _tile2;
		::Tile _tile3;
		::Tile _tile4;
		::Tile _tile5;
		::Tile _tile6;
		::Tile _tile7;
		::Tile _tile8;
		::Tile _tile9;
		::Tile _tile10;
		::Tile _tile11;
		::Tile _tile12;
		::Tile _tile13;
		::Tile _tile14;
		::flixel::text::FlxText scoreText;
		int myScore;
		bool _up;
		bool _down;
		bool _left;
		bool _right;
		::flixel::util::FlxTimer myTimer;
		bool isGameOver;
		::GameController myController;
		Array< ::Dynamic > tileMap;
		virtual Void checkTrue( );
		Dynamic checkTrue_dyn();

		virtual Void gameOver( ::flixel::util::FlxTimer Timer);
		Dynamic gameOver_dyn();

		virtual Void moveUp( );
		Dynamic moveUp_dyn();

		virtual Void moveDown( );
		Dynamic moveDown_dyn();

		virtual Void moveRight( );
		Dynamic moveRight_dyn();

		virtual Void moveLeft( );
		Dynamic moveLeft_dyn();

		virtual Void create( );

		virtual Void destroy( );

		virtual Void update( );

};


#endif /* INCLUDED_PlayState */ 
