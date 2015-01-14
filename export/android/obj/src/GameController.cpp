#include <hxcpp.h>

#ifndef INCLUDED_GameController
#include <GameController.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
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
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif

Void GameController_obj::__construct()
{
HX_STACK_FRAME("GameController","new",0x0e5fa740,"GameController.new","GameController.hx",13,0x36050030)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(18)
	this->_right = false;
	HX_STACK_LINE(17)
	this->_left = false;
	HX_STACK_LINE(16)
	this->_down = false;
	HX_STACK_LINE(15)
	this->_up = false;
	HX_STACK_LINE(13)
	super::__construct();
}
;
	return null();
}

//GameController_obj::~GameController_obj() { }

Dynamic GameController_obj::__CreateEmpty() { return  new GameController_obj; }
hx::ObjectPtr< GameController_obj > GameController_obj::__new()
{  hx::ObjectPtr< GameController_obj > result = new GameController_obj();
	result->__construct();
	return result;}

Dynamic GameController_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< GameController_obj > result = new GameController_obj();
	result->__construct();
	return result;}

Void GameController_obj::checkInput( ){
{
		HX_STACK_FRAME("GameController","checkInput",0x9eec8b42,"GameController.checkInput","GameController.hx",23,0x36050030)
		HX_STACK_THIS(this)
		HX_STACK_LINE(23)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(23)
		Array< ::Dynamic > _g1 = ::flixel::FlxG_obj::swipes;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(23)
		while((true)){
			HX_STACK_LINE(23)
			if ((!(((_g < _g1->length))))){
				HX_STACK_LINE(23)
				break;
			}
			HX_STACK_LINE(23)
			::flixel::input::FlxSwipe swipe = _g1->__get(_g).StaticCast< ::flixel::input::FlxSwipe >();		HX_STACK_VAR(swipe,"swipe");
			HX_STACK_LINE(23)
			++(_g);
			HX_STACK_LINE(25)
			Float _g2;		HX_STACK_VAR(_g2,"_g2");
			HX_STACK_LINE(25)
			{
				HX_STACK_LINE(25)
				Float dx = (swipe->startPosition->x - swipe->endPosition->x);		HX_STACK_VAR(dx,"dx");
				HX_STACK_LINE(25)
				Float dy = (swipe->startPosition->y - swipe->endPosition->y);		HX_STACK_VAR(dy,"dy");
				HX_STACK_LINE(25)
				_g2 = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
			}
			HX_STACK_LINE(25)
			if (((_g2 > (int)10))){
				HX_STACK_LINE(27)
				Float _g11;		HX_STACK_VAR(_g11,"_g11");
				HX_STACK_LINE(27)
				{
					HX_STACK_LINE(27)
					::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
					HX_STACK_LINE(27)
					::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
					HX_STACK_LINE(27)
					Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(27)
					Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(27)
					Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
					HX_STACK_LINE(27)
					if (((bool((x != (int)0)) || bool((y != (int)0))))){
						HX_STACK_LINE(27)
						Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
						HX_STACK_LINE(27)
						Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
						HX_STACK_LINE(27)
						Float ay;		HX_STACK_VAR(ay,"ay");
						HX_STACK_LINE(27)
						if (((y < (int)0))){
							HX_STACK_LINE(27)
							ay = -(y);
						}
						else{
							HX_STACK_LINE(27)
							ay = y;
						}
						HX_STACK_LINE(27)
						if (((x >= (int)0))){
							HX_STACK_LINE(27)
							angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
						}
						else{
							HX_STACK_LINE(27)
							angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
						}
						HX_STACK_LINE(27)
						angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
						HX_STACK_LINE(27)
						if (((angle > (int)90))){
							HX_STACK_LINE(27)
							angle = (angle - (int)270);
						}
						else{
							HX_STACK_LINE(27)
							hx::AddEq(angle,(int)90);
						}
					}
					HX_STACK_LINE(27)
					if ((Point1->_weak)){
						HX_STACK_LINE(27)
						Point1->put();
					}
					HX_STACK_LINE(27)
					if ((Point2->_weak)){
						HX_STACK_LINE(27)
						Point2->put();
					}
					HX_STACK_LINE(27)
					_g11 = angle;
				}
				struct _Function_3_1{
					inline static bool Block( ::flixel::input::FlxSwipe &swipe){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameController.hx",27,0x36050030)
						{
							HX_STACK_LINE(27)
							Float _g21;		HX_STACK_VAR(_g21,"_g21");
							HX_STACK_LINE(27)
							{
								HX_STACK_LINE(27)
								::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
								HX_STACK_LINE(27)
								::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
								HX_STACK_LINE(27)
								Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(27)
								Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(27)
								Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
								HX_STACK_LINE(27)
								if (((bool((x != (int)0)) || bool((y != (int)0))))){
									HX_STACK_LINE(27)
									Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(27)
									Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
									HX_STACK_LINE(27)
									Float ay;		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(27)
									if (((y < (int)0))){
										HX_STACK_LINE(27)
										ay = -(y);
									}
									else{
										HX_STACK_LINE(27)
										ay = y;
									}
									HX_STACK_LINE(27)
									if (((x >= (int)0))){
										HX_STACK_LINE(27)
										angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
									}
									else{
										HX_STACK_LINE(27)
										angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
									}
									HX_STACK_LINE(27)
									angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
									HX_STACK_LINE(27)
									if (((angle > (int)90))){
										HX_STACK_LINE(27)
										angle = (angle - (int)270);
									}
									else{
										HX_STACK_LINE(27)
										hx::AddEq(angle,(int)90);
									}
								}
								HX_STACK_LINE(27)
								if ((Point1->_weak)){
									HX_STACK_LINE(27)
									Point1->put();
								}
								HX_STACK_LINE(27)
								if ((Point2->_weak)){
									HX_STACK_LINE(27)
									Point2->put();
								}
								HX_STACK_LINE(27)
								_g21 = angle;
							}
							HX_STACK_LINE(27)
							return (_g21 > (int)45);
						}
						return null();
					}
				};
				HX_STACK_LINE(27)
				if (((  (((_g11 < (int)135))) ? bool(_Function_3_1::Block(swipe)) : bool(false) ))){
					HX_STACK_LINE(28)
					this->_right = true;
				}
				else{
					HX_STACK_LINE(29)
					Float _g3;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(29)
					{
						HX_STACK_LINE(29)
						::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
						HX_STACK_LINE(29)
						::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
						HX_STACK_LINE(29)
						Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(29)
						Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(29)
						Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
						HX_STACK_LINE(29)
						if (((bool((x != (int)0)) || bool((y != (int)0))))){
							HX_STACK_LINE(29)
							Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
							HX_STACK_LINE(29)
							Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
							HX_STACK_LINE(29)
							Float ay;		HX_STACK_VAR(ay,"ay");
							HX_STACK_LINE(29)
							if (((y < (int)0))){
								HX_STACK_LINE(29)
								ay = -(y);
							}
							else{
								HX_STACK_LINE(29)
								ay = y;
							}
							HX_STACK_LINE(29)
							if (((x >= (int)0))){
								HX_STACK_LINE(29)
								angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
							}
							else{
								HX_STACK_LINE(29)
								angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
							}
							HX_STACK_LINE(29)
							angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
							HX_STACK_LINE(29)
							if (((angle > (int)90))){
								HX_STACK_LINE(29)
								angle = (angle - (int)270);
							}
							else{
								HX_STACK_LINE(29)
								hx::AddEq(angle,(int)90);
							}
						}
						HX_STACK_LINE(29)
						if ((Point1->_weak)){
							HX_STACK_LINE(29)
							Point1->put();
						}
						HX_STACK_LINE(29)
						if ((Point2->_weak)){
							HX_STACK_LINE(29)
							Point2->put();
						}
						HX_STACK_LINE(29)
						_g3 = angle;
					}
					struct _Function_4_1{
						inline static bool Block( ::flixel::input::FlxSwipe &swipe){
							HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameController.hx",29,0x36050030)
							{
								HX_STACK_LINE(29)
								Float _g4;		HX_STACK_VAR(_g4,"_g4");
								HX_STACK_LINE(29)
								{
									HX_STACK_LINE(29)
									::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
									HX_STACK_LINE(29)
									::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
									HX_STACK_LINE(29)
									Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(29)
									Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
									HX_STACK_LINE(29)
									Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
									HX_STACK_LINE(29)
									if (((bool((x != (int)0)) || bool((y != (int)0))))){
										HX_STACK_LINE(29)
										Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
										HX_STACK_LINE(29)
										Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
										HX_STACK_LINE(29)
										Float ay;		HX_STACK_VAR(ay,"ay");
										HX_STACK_LINE(29)
										if (((y < (int)0))){
											HX_STACK_LINE(29)
											ay = -(y);
										}
										else{
											HX_STACK_LINE(29)
											ay = y;
										}
										HX_STACK_LINE(29)
										if (((x >= (int)0))){
											HX_STACK_LINE(29)
											angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
										}
										else{
											HX_STACK_LINE(29)
											angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
										}
										HX_STACK_LINE(29)
										angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
										HX_STACK_LINE(29)
										if (((angle > (int)90))){
											HX_STACK_LINE(29)
											angle = (angle - (int)270);
										}
										else{
											HX_STACK_LINE(29)
											hx::AddEq(angle,(int)90);
										}
									}
									HX_STACK_LINE(29)
									if ((Point1->_weak)){
										HX_STACK_LINE(29)
										Point1->put();
									}
									HX_STACK_LINE(29)
									if ((Point2->_weak)){
										HX_STACK_LINE(29)
										Point2->put();
									}
									HX_STACK_LINE(29)
									_g4 = angle;
								}
								HX_STACK_LINE(29)
								return (_g4 < (int)-135);
							}
							return null();
						}
					};
					HX_STACK_LINE(29)
					if (((  ((!(((_g3 > (int)135))))) ? bool(_Function_4_1::Block(swipe)) : bool(true) ))){
						HX_STACK_LINE(30)
						this->_down = true;
					}
					else{
						HX_STACK_LINE(31)
						Float _g5;		HX_STACK_VAR(_g5,"_g5");
						HX_STACK_LINE(31)
						{
							HX_STACK_LINE(31)
							::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
							HX_STACK_LINE(31)
							::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
							HX_STACK_LINE(31)
							Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(31)
							Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(31)
							Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
							HX_STACK_LINE(31)
							if (((bool((x != (int)0)) || bool((y != (int)0))))){
								HX_STACK_LINE(31)
								Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
								HX_STACK_LINE(31)
								Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
								HX_STACK_LINE(31)
								Float ay;		HX_STACK_VAR(ay,"ay");
								HX_STACK_LINE(31)
								if (((y < (int)0))){
									HX_STACK_LINE(31)
									ay = -(y);
								}
								else{
									HX_STACK_LINE(31)
									ay = y;
								}
								HX_STACK_LINE(31)
								if (((x >= (int)0))){
									HX_STACK_LINE(31)
									angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
								}
								else{
									HX_STACK_LINE(31)
									angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
								}
								HX_STACK_LINE(31)
								angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
								HX_STACK_LINE(31)
								if (((angle > (int)90))){
									HX_STACK_LINE(31)
									angle = (angle - (int)270);
								}
								else{
									HX_STACK_LINE(31)
									hx::AddEq(angle,(int)90);
								}
							}
							HX_STACK_LINE(31)
							if ((Point1->_weak)){
								HX_STACK_LINE(31)
								Point1->put();
							}
							HX_STACK_LINE(31)
							if ((Point2->_weak)){
								HX_STACK_LINE(31)
								Point2->put();
							}
							HX_STACK_LINE(31)
							_g5 = angle;
						}
						struct _Function_5_1{
							inline static bool Block( ::flixel::input::FlxSwipe &swipe){
								HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameController.hx",31,0x36050030)
								{
									HX_STACK_LINE(31)
									Float _g6;		HX_STACK_VAR(_g6,"_g6");
									HX_STACK_LINE(31)
									{
										HX_STACK_LINE(31)
										::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
										HX_STACK_LINE(31)
										::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
										HX_STACK_LINE(31)
										Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
										HX_STACK_LINE(31)
										Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
										HX_STACK_LINE(31)
										Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
										HX_STACK_LINE(31)
										if (((bool((x != (int)0)) || bool((y != (int)0))))){
											HX_STACK_LINE(31)
											Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
											HX_STACK_LINE(31)
											Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
											HX_STACK_LINE(31)
											Float ay;		HX_STACK_VAR(ay,"ay");
											HX_STACK_LINE(31)
											if (((y < (int)0))){
												HX_STACK_LINE(31)
												ay = -(y);
											}
											else{
												HX_STACK_LINE(31)
												ay = y;
											}
											HX_STACK_LINE(31)
											if (((x >= (int)0))){
												HX_STACK_LINE(31)
												angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
											}
											else{
												HX_STACK_LINE(31)
												angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
											}
											HX_STACK_LINE(31)
											angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
											HX_STACK_LINE(31)
											if (((angle > (int)90))){
												HX_STACK_LINE(31)
												angle = (angle - (int)270);
											}
											else{
												HX_STACK_LINE(31)
												hx::AddEq(angle,(int)90);
											}
										}
										HX_STACK_LINE(31)
										if ((Point1->_weak)){
											HX_STACK_LINE(31)
											Point1->put();
										}
										HX_STACK_LINE(31)
										if ((Point2->_weak)){
											HX_STACK_LINE(31)
											Point2->put();
										}
										HX_STACK_LINE(31)
										_g6 = angle;
									}
									HX_STACK_LINE(31)
									return (_g6 > (int)-135);
								}
								return null();
							}
						};
						HX_STACK_LINE(31)
						if (((  (((_g5 < (int)-45))) ? bool(_Function_5_1::Block(swipe)) : bool(false) ))){
							HX_STACK_LINE(32)
							this->_left = true;
						}
						else{
							HX_STACK_LINE(33)
							Float _g7;		HX_STACK_VAR(_g7,"_g7");
							HX_STACK_LINE(33)
							{
								HX_STACK_LINE(33)
								::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
								HX_STACK_LINE(33)
								::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
								HX_STACK_LINE(33)
								Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(33)
								Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
								HX_STACK_LINE(33)
								Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
								HX_STACK_LINE(33)
								if (((bool((x != (int)0)) || bool((y != (int)0))))){
									HX_STACK_LINE(33)
									Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
									HX_STACK_LINE(33)
									Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
									HX_STACK_LINE(33)
									Float ay;		HX_STACK_VAR(ay,"ay");
									HX_STACK_LINE(33)
									if (((y < (int)0))){
										HX_STACK_LINE(33)
										ay = -(y);
									}
									else{
										HX_STACK_LINE(33)
										ay = y;
									}
									HX_STACK_LINE(33)
									if (((x >= (int)0))){
										HX_STACK_LINE(33)
										angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
									}
									else{
										HX_STACK_LINE(33)
										angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
									}
									HX_STACK_LINE(33)
									angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
									HX_STACK_LINE(33)
									if (((angle > (int)90))){
										HX_STACK_LINE(33)
										angle = (angle - (int)270);
									}
									else{
										HX_STACK_LINE(33)
										hx::AddEq(angle,(int)90);
									}
								}
								HX_STACK_LINE(33)
								if ((Point1->_weak)){
									HX_STACK_LINE(33)
									Point1->put();
								}
								HX_STACK_LINE(33)
								if ((Point2->_weak)){
									HX_STACK_LINE(33)
									Point2->put();
								}
								HX_STACK_LINE(33)
								_g7 = angle;
							}
							struct _Function_6_1{
								inline static bool Block( ::flixel::input::FlxSwipe &swipe){
									HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","GameController.hx",33,0x36050030)
									{
										HX_STACK_LINE(33)
										Float _g8;		HX_STACK_VAR(_g8,"_g8");
										HX_STACK_LINE(33)
										{
											HX_STACK_LINE(33)
											::flixel::util::FlxPoint Point1 = swipe->startPosition;		HX_STACK_VAR(Point1,"Point1");
											HX_STACK_LINE(33)
											::flixel::util::FlxPoint Point2 = swipe->endPosition;		HX_STACK_VAR(Point2,"Point2");
											HX_STACK_LINE(33)
											Float x = (Point2->x - Point1->x);		HX_STACK_VAR(x,"x");
											HX_STACK_LINE(33)
											Float y = (Point2->y - Point1->y);		HX_STACK_VAR(y,"y");
											HX_STACK_LINE(33)
											Float angle = (int)0;		HX_STACK_VAR(angle,"angle");
											HX_STACK_LINE(33)
											if (((bool((x != (int)0)) || bool((y != (int)0))))){
												HX_STACK_LINE(33)
												Float c1 = (::Math_obj::PI * 0.25);		HX_STACK_VAR(c1,"c1");
												HX_STACK_LINE(33)
												Float c2 = ((int)3 * c1);		HX_STACK_VAR(c2,"c2");
												HX_STACK_LINE(33)
												Float ay;		HX_STACK_VAR(ay,"ay");
												HX_STACK_LINE(33)
												if (((y < (int)0))){
													HX_STACK_LINE(33)
													ay = -(y);
												}
												else{
													HX_STACK_LINE(33)
													ay = y;
												}
												HX_STACK_LINE(33)
												if (((x >= (int)0))){
													HX_STACK_LINE(33)
													angle = (c1 - (c1 * ((Float(((x - ay))) / Float(((x + ay)))))));
												}
												else{
													HX_STACK_LINE(33)
													angle = (c2 - (c1 * ((Float(((x + ay))) / Float(((ay - x)))))));
												}
												HX_STACK_LINE(33)
												angle = (((  (((y < (int)0))) ? Float(-(angle)) : Float(angle) )) * ((Float((int)180) / Float(::Math_obj::PI))));
												HX_STACK_LINE(33)
												if (((angle > (int)90))){
													HX_STACK_LINE(33)
													angle = (angle - (int)270);
												}
												else{
													HX_STACK_LINE(33)
													hx::AddEq(angle,(int)90);
												}
											}
											HX_STACK_LINE(33)
											if ((Point1->_weak)){
												HX_STACK_LINE(33)
												Point1->put();
											}
											HX_STACK_LINE(33)
											if ((Point2->_weak)){
												HX_STACK_LINE(33)
												Point2->put();
											}
											HX_STACK_LINE(33)
											_g8 = angle;
										}
										HX_STACK_LINE(33)
										return (_g8 < (int)45);
									}
									return null();
								}
							};
							HX_STACK_LINE(33)
							if (((  (((_g7 > (int)-45))) ? bool(_Function_6_1::Block(swipe)) : bool(false) ))){
								HX_STACK_LINE(34)
								this->_up = true;
							}
						}
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(GameController_obj,checkInput,(void))


GameController_obj::GameController_obj()
{
}

Dynamic GameController_obj::__Field(const ::String &inName,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_right") ) { return _right; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"checkInput") ) { return checkInput_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic GameController_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
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
		if (HX_FIELD_EQ(inName,"_right") ) { _right=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GameController_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_up"));
	outFields->push(HX_CSTRING("_down"));
	outFields->push(HX_CSTRING("_left"));
	outFields->push(HX_CSTRING("_right"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(GameController_obj,_up),HX_CSTRING("_up")},
	{hx::fsBool,(int)offsetof(GameController_obj,_down),HX_CSTRING("_down")},
	{hx::fsBool,(int)offsetof(GameController_obj,_left),HX_CSTRING("_left")},
	{hx::fsBool,(int)offsetof(GameController_obj,_right),HX_CSTRING("_right")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("_up"),
	HX_CSTRING("_down"),
	HX_CSTRING("_left"),
	HX_CSTRING("_right"),
	HX_CSTRING("checkInput"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GameController_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GameController_obj::__mClass,"__mClass");
};

#endif

Class GameController_obj::__mClass;

void GameController_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("GameController"), hx::TCanCast< GameController_obj> ,sStaticFields,sMemberFields,
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

void GameController_obj::__boot()
{
}

