#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Card
#include <Card.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_haxe_Timer
#include <haxe/Timer.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_MouseEvent
#include <openfl/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl_text_TextField
#include <openfl/text/TextField.h>
#endif

Void Main_obj::__construct()
{
HX_STACK_FRAME("Main","new",0x6616a5cb,"Main.new","Main.hx",21,0x087e5c05)
HX_STACK_THIS(this)
{
	HX_STACK_LINE(30)
	this->scorePlayer2 = ::openfl::text::TextField_obj::__new();
	HX_STACK_LINE(29)
	this->scorePlayer1 = ::openfl::text::TextField_obj::__new();
	HX_STACK_LINE(27)
	this->player2 = ::Player_obj::__new(HX_HCSTRING("Player2","\x91","\x31","\x66","\x57"));
	HX_STACK_LINE(26)
	this->player1 = ::Player_obj::__new(HX_HCSTRING("Player1","\x90","\x31","\x66","\x57"));
	HX_STACK_LINE(25)
	this->clickedCards = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(24)
	this->memoryCards = Array_obj< ::Dynamic >::__new();
	HX_STACK_LINE(23)
	this->board = ::openfl::display::Sprite_obj::__new();
	HX_STACK_LINE(36)
	super::__construct();
	HX_STACK_LINE(38)
	::Player tmp = this->player1;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(38)
	this->currentPlayer = tmp;
	HX_STACK_LINE(39)
	::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("img/StartButton.jpg","\xfb","\x81","\x77","\x5b"),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(39)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(39)
	::openfl::display::Bitmap startButton = tmp2;		HX_STACK_VAR(startButton,"startButton");
	HX_STACK_LINE(40)
	::openfl::display::Sprite tmp3 = this->board;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(40)
	::openfl::display::Bitmap tmp4 = startButton;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(40)
	tmp3->addChild(tmp4);
	HX_STACK_LINE(41)
	::openfl::display::Sprite tmp5 = this->board;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(41)
	this->addChild(tmp5);
	HX_STACK_LINE(42)
	::openfl::display::Stage tmp6 = this->stage;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(42)
	int tmp7 = tmp6->stageWidth;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(42)
	Float tmp8 = startButton->get_width();		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(42)
	Float tmp9 = (tmp7 - tmp8);		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(42)
	Float tmp10 = (Float(tmp9) / Float((int)2));		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(42)
	startButton->set_x(tmp10);
	HX_STACK_LINE(43)
	::openfl::display::Stage tmp11 = this->stage;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(43)
	int tmp12 = tmp11->stageHeight;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(43)
	Float tmp13 = startButton->get_height();		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(43)
	Float tmp14 = (tmp12 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(43)
	Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
	HX_STACK_LINE(43)
	startButton->set_y(tmp15);
	HX_STACK_LINE(45)
	::openfl::display::Sprite tmp16 = this->board;		HX_STACK_VAR(tmp16,"tmp16");
	HX_STACK_LINE(45)
	::String tmp17 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp17,"tmp17");
	HX_STACK_LINE(45)
	Dynamic tmp18 = this->startGame_dyn();		HX_STACK_VAR(tmp18,"tmp18");
	HX_STACK_LINE(45)
	tmp16->addEventListener(tmp17,tmp18,null(),null(),null());
}
;
	return null();
}

//Main_obj::~Main_obj() { }

Dynamic Main_obj::__CreateEmpty() { return  new Main_obj; }
hx::ObjectPtr< Main_obj > Main_obj::__new()
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Dynamic Main_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Main_obj > _result_ = new Main_obj();
	_result_->__construct();
	return _result_;}

Void Main_obj::startGame( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","startGame",0xdddba51f,"Main.startGame","Main.hx",49,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(50)
		::openfl::display::Sprite tmp = this->board;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(50)
		::String tmp1 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(50)
		Dynamic tmp2 = this->startGame_dyn();		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(50)
		tmp->removeEventListener(tmp1,tmp2,null());
		HX_STACK_LINE(52)
		this->createPlayerScores();
		HX_STACK_LINE(53)
		this->createDeck();
		HX_STACK_LINE(54)
		this->shuffleDeck();
		HX_STACK_LINE(55)
		this->createField();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,startGame,(void))

Void Main_obj::createPlayerScores( ){
{
		HX_STACK_FRAME("Main","createPlayerScores",0xf3514b33,"Main.createPlayerScores","Main.hx",59,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(60)
		::openfl::text::TextField tmp = this->scorePlayer1;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(60)
		::Player tmp1 = this->currentPlayer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(60)
		int tmp2 = tmp1->score;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(60)
		::String tmp3 = (HX_HCSTRING("Player 1 ","\x0e","\xfa","\x74","\xa2") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(60)
		tmp->set_text(tmp3);
		HX_STACK_LINE(61)
		::openfl::text::TextField tmp4 = this->scorePlayer1;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(61)
		tmp4->set_x((int)1740);
		HX_STACK_LINE(62)
		::openfl::text::TextField tmp5 = this->scorePlayer1;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(62)
		tmp5->set_y((int)10);
		HX_STACK_LINE(63)
		::openfl::text::TextField tmp6 = this->scorePlayer1;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(63)
		tmp6->set_scaleX((int)3);
		HX_STACK_LINE(64)
		::openfl::text::TextField tmp7 = this->scorePlayer1;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(64)
		tmp7->set_scaleY((int)3);
		HX_STACK_LINE(65)
		::openfl::text::TextField tmp8 = this->scorePlayer1;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(65)
		this->addChild(tmp8);
		HX_STACK_LINE(67)
		::openfl::text::TextField tmp9 = this->scorePlayer2;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(67)
		::Player tmp10 = this->currentPlayer;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(67)
		int tmp11 = tmp10->score;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(67)
		::String tmp12 = (HX_HCSTRING("Player 2 ","\xed","\xfa","\x74","\xa2") + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(67)
		tmp9->set_text(tmp12);
		HX_STACK_LINE(68)
		::openfl::text::TextField tmp13 = this->scorePlayer2;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(68)
		tmp13->set_x((int)1740);
		HX_STACK_LINE(69)
		::openfl::text::TextField tmp14 = this->scorePlayer2;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(69)
		tmp14->set_y((int)70);
		HX_STACK_LINE(70)
		::openfl::text::TextField tmp15 = this->scorePlayer2;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(70)
		tmp15->set_scaleX((int)3);
		HX_STACK_LINE(71)
		::openfl::text::TextField tmp16 = this->scorePlayer2;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(71)
		tmp16->set_scaleY((int)3);
		HX_STACK_LINE(72)
		::openfl::text::TextField tmp17 = this->scorePlayer2;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(72)
		this->addChild(tmp17);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createPlayerScores,(void))

Void Main_obj::createDeck( ){
{
		HX_STACK_FRAME("Main","createDeck",0xec7b8f7a,"Main.createDeck","Main.hx",78,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(78)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(78)
		while((true)){
			HX_STACK_LINE(78)
			bool tmp = (_g < (int)20);		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(78)
			bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(78)
			if ((tmp1)){
				HX_STACK_LINE(78)
				break;
			}
			HX_STACK_LINE(78)
			int tmp2 = (_g)++;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(78)
			int i = tmp2;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(80)
			::String imagePath = HX_HCSTRING("img/CardBack.jpg","\xf6","\x09","\x5f","\x25");		HX_STACK_VAR(imagePath,"imagePath");
			HX_STACK_LINE(81)
			::Card tmp3 = ::Card_obj::__new(i,imagePath);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(81)
			::Card newCard = tmp3;		HX_STACK_VAR(newCard,"newCard");
			HX_STACK_LINE(82)
			::Card tmp4 = newCard;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(82)
			this->memoryCards->push(tmp4);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createDeck,(void))

Void Main_obj::shuffleDeck( ){
{
		HX_STACK_FRAME("Main","shuffleDeck",0x48706b6d,"Main.shuffleDeck","Main.hx",88,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(89)
		int tmp = this->memoryCards->length;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(89)
		int n = tmp;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(90)
		{
			HX_STACK_LINE(90)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(90)
			while((true)){
				HX_STACK_LINE(90)
				bool tmp1 = (_g < n);		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(90)
				bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(90)
				if ((tmp2)){
					HX_STACK_LINE(90)
					break;
				}
				HX_STACK_LINE(90)
				int tmp3 = (_g)++;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(90)
				int i = tmp3;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(92)
				int tmp4 = i;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(92)
				Float tmp5 = ::Math_obj::random();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(92)
				int tmp6 = (n - i);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(92)
				Float tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(92)
				int tmp8 = ::Math_obj::floor(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(92)
				int tmp9 = (tmp4 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(92)
				int change = tmp9;		HX_STACK_VAR(change,"change");
				HX_STACK_LINE(93)
				::Card tmp10 = this->memoryCards->__get(i).StaticCast< ::Card >();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(93)
				::Card tempCard = tmp10;		HX_STACK_VAR(tempCard,"tempCard");
				HX_STACK_LINE(94)
				::Card tmp11 = this->memoryCards->__get(change).StaticCast< ::Card >();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(94)
				this->memoryCards[i] = tmp11;
				HX_STACK_LINE(95)
				::Card tmp12 = tempCard;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(95)
				this->memoryCards[change] = tmp12;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,shuffleDeck,(void))

Void Main_obj::createField( ){
{
		HX_STACK_FRAME("Main","createField",0x29158489,"Main.createField","Main.hx",100,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(101)
		::openfl::display::Sprite tmp = this->board;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(101)
		tmp->removeChildren(null(),null());
		HX_STACK_LINE(102)
		Float xPos = (int)0;		HX_STACK_VAR(xPos,"xPos");
		HX_STACK_LINE(103)
		int tmp1 = this->memoryCards->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(103)
		int n = tmp1;		HX_STACK_VAR(n,"n");
		HX_STACK_LINE(105)
		{
			HX_STACK_LINE(105)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			while((true)){
				HX_STACK_LINE(105)
				bool tmp2 = (_g < n);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(105)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(105)
				if ((tmp3)){
					HX_STACK_LINE(105)
					break;
				}
				HX_STACK_LINE(105)
				int tmp4 = (_g)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(105)
				int i = tmp4;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(107)
				::Card tmp5 = this->memoryCards->__get(i).StaticCast< ::Card >();		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(107)
				::Card card = tmp5;		HX_STACK_VAR(card,"card");
				HX_STACK_LINE(108)
				bool tmp6 = (i <= (int)9);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(108)
				if ((tmp6)){
					HX_STACK_LINE(111)
					int tmp7 = ((int)110 * i);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(111)
					card->set_x(tmp7);
					HX_STACK_LINE(112)
					Float tmp8 = card->get_width();		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(112)
					hx::AddEq(xPos,tmp8);
				}
				else{
					HX_STACK_LINE(116)
					int tmp7 = (i - (int)10);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(116)
					int tmp8 = ((int)110 * tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(116)
					card->set_x(tmp8);
					HX_STACK_LINE(117)
					card->set_y((int)200);
				}
				HX_STACK_LINE(119)
				::openfl::display::Sprite tmp7 = this->board;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(119)
				::Card tmp8 = card;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(119)
				tmp7->addChild(tmp8);
				HX_STACK_LINE(121)
				::openfl::display::Sprite tmp9 = this->board;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(121)
				::openfl::display::Stage tmp10 = this->stage;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(121)
				int tmp11 = tmp10->stageWidth;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(121)
				::openfl::display::Sprite tmp12 = this->board;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(121)
				Float tmp13 = tmp12->get_width();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(121)
				Float tmp14 = (tmp11 - tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(121)
				Float tmp15 = (Float(tmp14) / Float((int)2));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(121)
				tmp9->set_x(tmp15);
				HX_STACK_LINE(122)
				::openfl::display::Sprite tmp16 = this->board;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(122)
				::openfl::display::Stage tmp17 = this->stage;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(122)
				int tmp18 = tmp17->stageHeight;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(122)
				::openfl::display::Sprite tmp19 = this->board;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(122)
				Float tmp20 = tmp19->get_height();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(122)
				Float tmp21 = (tmp18 - tmp20);		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(122)
				Float tmp22 = (Float(tmp21) / Float((int)2));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(122)
				tmp16->set_y(tmp22);
			}
		}
		HX_STACK_LINE(124)
		::openfl::display::Sprite tmp2 = this->board;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(124)
		::String tmp3 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(124)
		Dynamic tmp4 = this->clickedonCard_dyn();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(124)
		tmp2->addEventListener(tmp3,tmp4,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,createField,(void))

Void Main_obj::clickedonCard( ::openfl::events::MouseEvent event){
{
		HX_STACK_FRAME("Main","clickedonCard",0xa5237da1,"Main.clickedonCard","Main.hx",128,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(event,"event")
		HX_STACK_LINE(129)
		::Card card = event->target;		HX_STACK_VAR(card,"card");
		HX_STACK_LINE(130)
		::Card tmp = card;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(130)
		this->clickedCards->push(tmp);
		HX_STACK_LINE(131)
		card->changeToFront();
		HX_STACK_LINE(132)
		int tmp1 = this->clickedCards->length;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(132)
		bool tmp2 = (tmp1 == (int)2);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(132)
		if ((tmp2)){
			HX_STACK_LINE(134)
			::Card tmp3 = this->clickedCards->__get((int)0).StaticCast< ::Card >();		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(134)
			int tmp4 = tmp3->cardNumber;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(134)
			::Card tmp5 = this->clickedCards->__get((int)1).StaticCast< ::Card >();		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(134)
			int tmp6 = tmp5->cardNumber;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(134)
			bool tmp7 = (tmp4 == tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(134)
			if ((tmp7)){
				HX_STACK_LINE(136)
				::Card tmp8 = this->clickedCards->__get((int)1).StaticCast< ::Card >();		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(136)
				this->clickedCards->remove(tmp8);
			}
			else{
				HX_STACK_LINE(140)
				::openfl::display::Sprite tmp8 = this->board;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(140)
				::String tmp9 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(140)
				Dynamic tmp10 = this->clickedonCard_dyn();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(140)
				tmp8->removeEventListener(tmp9,tmp10,null());
				HX_STACK_LINE(141)
				Dynamic tmp11 = this->compareCards_dyn();		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(141)
				::Card tmp12 = this->clickedCards->__get((int)0).StaticCast< ::Card >();		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(141)
				::Card tmp13 = this->clickedCards->__get((int)1).StaticCast< ::Card >();		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(141)
				Dynamic tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(141)
				{
					HX_STACK_LINE(141)
					Dynamic f = tmp11;		HX_STACK_VAR(f,"f");
					HX_STACK_LINE(141)
					::Card a1 = tmp12;		HX_STACK_VAR(a1,"a1");
					HX_STACK_LINE(141)
					::Card a2 = tmp13;		HX_STACK_VAR(a2,"a2");

					HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_4_1,::Card,a1,Dynamic,f,::Card,a2)
					int __ArgCount() const { return 0; }
					Void run(){
						HX_STACK_FRAME("*","_Function_4_1",0x520333fa,"*._Function_4_1","Main.hx",141,0x087e5c05)
						{
							HX_STACK_LINE(141)
							::Card tmp15 = a1;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(141)
							::Card tmp16 = a2;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(141)
							f(tmp15,tmp16).Cast< Void >();
						}
						return null();
					}
					HX_END_LOCAL_FUNC0((void))

					HX_STACK_LINE(141)
					tmp14 =  Dynamic(new _Function_4_1(a1,f,a2));
				}
				HX_STACK_LINE(141)
				::haxe::Timer_obj::delay(tmp14,(int)500);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Main_obj,clickedonCard,(void))

Void Main_obj::compareCards( ::Card first,::Card second){
{
		HX_STACK_FRAME("Main","compareCards",0x04aa7ef3,"Main.compareCards","Main.hx",147,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_ARG(first,"first")
		HX_STACK_ARG(second,"second")
		HX_STACK_LINE(148)
		int tmp = hx::Mod(first->cardNumber,(int)10);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(148)
		int x = tmp;		HX_STACK_VAR(x,"x");
		HX_STACK_LINE(149)
		int tmp1 = hx::Mod(second->cardNumber,(int)10);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(149)
		int y = tmp1;		HX_STACK_VAR(y,"y");
		HX_STACK_LINE(150)
		bool tmp2 = (x == y);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(150)
		if ((tmp2)){
			HX_STACK_LINE(152)
			::openfl::display::Sprite tmp3 = this->board;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(152)
			::Card tmp4 = first;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(152)
			tmp3->removeChild(tmp4);
			HX_STACK_LINE(153)
			::openfl::display::Sprite tmp5 = this->board;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(153)
			::Card tmp6 = second;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(153)
			tmp5->removeChild(tmp6);
			HX_STACK_LINE(154)
			::Player tmp7 = this->currentPlayer;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(154)
			tmp7->addScore((int)5);
			HX_STACK_LINE(156)
			::Player tmp8 = this->currentPlayer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(156)
			::Player tmp9 = this->player1;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(156)
			bool tmp10 = (tmp8 == tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(156)
			if ((tmp10)){
				HX_STACK_LINE(158)
				::openfl::text::TextField tmp11 = this->scorePlayer1;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(158)
				::Player tmp12 = this->currentPlayer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(158)
				int tmp13 = tmp12->score;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(158)
				::String tmp14 = (HX_HCSTRING("Player 1 ","\x0e","\xfa","\x74","\xa2") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(158)
				tmp11->set_text(tmp14);
			}
			else{
				HX_STACK_LINE(168)
				::openfl::text::TextField tmp11 = this->scorePlayer2;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(168)
				::Player tmp12 = this->currentPlayer;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(168)
				int tmp13 = tmp12->score;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(168)
				::String tmp14 = (HX_HCSTRING("Player 2 ","\xed","\xfa","\x74","\xa2") + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(168)
				tmp11->set_text(tmp14);
			}
		}
		else{
			HX_STACK_LINE(178)
			first->changeToBack();
			HX_STACK_LINE(179)
			second->changeToBack();
			HX_STACK_LINE(180)
			this->switchPlayer();
		}
		HX_STACK_LINE(183)
		int tmp3 = this->clickedCards->length;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(183)
		this->clickedCards->splice((int)0,tmp3);
		HX_STACK_LINE(184)
		::openfl::display::Sprite tmp4 = this->board;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(184)
		::String tmp5 = ::openfl::events::MouseEvent_obj::CLICK;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(184)
		Dynamic tmp6 = this->clickedonCard_dyn();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(184)
		tmp4->addEventListener(tmp5,tmp6,null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Main_obj,compareCards,(void))

Void Main_obj::switchPlayer( ){
{
		HX_STACK_FRAME("Main","switchPlayer",0x7ab33daa,"Main.switchPlayer","Main.hx",190,0x087e5c05)
		HX_STACK_THIS(this)
		HX_STACK_LINE(191)
		::Player tmp = this->currentPlayer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(191)
		::Player tmp1 = this->player1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(191)
		bool tmp2 = (tmp == tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(191)
		if ((tmp2)){
			HX_STACK_LINE(193)
			::Player tmp3 = this->player2;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(193)
			this->currentPlayer = tmp3;
		}
		else{
			HX_STACK_LINE(197)
			::Player tmp3 = this->player1;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(197)
			this->currentPlayer = tmp3;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,switchPlayer,(void))

Void Main_obj::showText( ){
{
		HX_STACK_FRAME("Main","showText",0xfb8936ff,"Main.showText","Main.hx",202,0x087e5c05)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Main_obj,showText,(void))


Main_obj::Main_obj()
{
}

void Main_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Main);
	HX_MARK_MEMBER_NAME(board,"board");
	HX_MARK_MEMBER_NAME(memoryCards,"memoryCards");
	HX_MARK_MEMBER_NAME(clickedCards,"clickedCards");
	HX_MARK_MEMBER_NAME(player1,"player1");
	HX_MARK_MEMBER_NAME(player2,"player2");
	HX_MARK_MEMBER_NAME(currentPlayer,"currentPlayer");
	HX_MARK_MEMBER_NAME(scorePlayer1,"scorePlayer1");
	HX_MARK_MEMBER_NAME(scorePlayer2,"scorePlayer2");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Main_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(board,"board");
	HX_VISIT_MEMBER_NAME(memoryCards,"memoryCards");
	HX_VISIT_MEMBER_NAME(clickedCards,"clickedCards");
	HX_VISIT_MEMBER_NAME(player1,"player1");
	HX_VISIT_MEMBER_NAME(player2,"player2");
	HX_VISIT_MEMBER_NAME(currentPlayer,"currentPlayer");
	HX_VISIT_MEMBER_NAME(scorePlayer1,"scorePlayer1");
	HX_VISIT_MEMBER_NAME(scorePlayer2,"scorePlayer2");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Main_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"board") ) { return board; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { return player1; }
		if (HX_FIELD_EQ(inName,"player2") ) { return player2; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"showText") ) { return showText_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"startGame") ) { return startGame_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"createDeck") ) { return createDeck_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memoryCards") ) { return memoryCards; }
		if (HX_FIELD_EQ(inName,"shuffleDeck") ) { return shuffleDeck_dyn(); }
		if (HX_FIELD_EQ(inName,"createField") ) { return createField_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickedCards") ) { return clickedCards; }
		if (HX_FIELD_EQ(inName,"scorePlayer1") ) { return scorePlayer1; }
		if (HX_FIELD_EQ(inName,"scorePlayer2") ) { return scorePlayer2; }
		if (HX_FIELD_EQ(inName,"compareCards") ) { return compareCards_dyn(); }
		if (HX_FIELD_EQ(inName,"switchPlayer") ) { return switchPlayer_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentPlayer") ) { return currentPlayer; }
		if (HX_FIELD_EQ(inName,"clickedonCard") ) { return clickedonCard_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"createPlayerScores") ) { return createPlayerScores_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Main_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"board") ) { board=inValue.Cast< ::openfl::display::Sprite >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"player1") ) { player1=inValue.Cast< ::Player >(); return inValue; }
		if (HX_FIELD_EQ(inName,"player2") ) { player2=inValue.Cast< ::Player >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memoryCards") ) { memoryCards=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"clickedCards") ) { clickedCards=inValue.Cast< Array< ::Dynamic > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scorePlayer1") ) { scorePlayer1=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scorePlayer2") ) { scorePlayer2=inValue.Cast< ::openfl::text::TextField >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"currentPlayer") ) { currentPlayer=inValue.Cast< ::Player >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Main_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("board","\xa6","\x86","\xed","\xb6"));
	outFields->push(HX_HCSTRING("memoryCards","\xe2","\x19","\xc9","\x13"));
	outFields->push(HX_HCSTRING("clickedCards","\x7c","\x74","\xce","\x5c"));
	outFields->push(HX_HCSTRING("player1","\xb0","\x09","\x15","\x8a"));
	outFields->push(HX_HCSTRING("player2","\xb1","\x09","\x15","\x8a"));
	outFields->push(HX_HCSTRING("currentPlayer","\x7a","\x6c","\x15","\x1b"));
	outFields->push(HX_HCSTRING("scorePlayer1","\x7e","\xac","\x19","\x97"));
	outFields->push(HX_HCSTRING("scorePlayer2","\x7f","\xac","\x19","\x97"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(Main_obj,board),HX_HCSTRING("board","\xa6","\x86","\xed","\xb6")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,memoryCards),HX_HCSTRING("memoryCards","\xe2","\x19","\xc9","\x13")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Main_obj,clickedCards),HX_HCSTRING("clickedCards","\x7c","\x74","\xce","\x5c")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Main_obj,player1),HX_HCSTRING("player1","\xb0","\x09","\x15","\x8a")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Main_obj,player2),HX_HCSTRING("player2","\xb1","\x09","\x15","\x8a")},
	{hx::fsObject /*::Player*/ ,(int)offsetof(Main_obj,currentPlayer),HX_HCSTRING("currentPlayer","\x7a","\x6c","\x15","\x1b")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,scorePlayer1),HX_HCSTRING("scorePlayer1","\x7e","\xac","\x19","\x97")},
	{hx::fsObject /*::openfl::text::TextField*/ ,(int)offsetof(Main_obj,scorePlayer2),HX_HCSTRING("scorePlayer2","\x7f","\xac","\x19","\x97")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("board","\xa6","\x86","\xed","\xb6"),
	HX_HCSTRING("memoryCards","\xe2","\x19","\xc9","\x13"),
	HX_HCSTRING("clickedCards","\x7c","\x74","\xce","\x5c"),
	HX_HCSTRING("player1","\xb0","\x09","\x15","\x8a"),
	HX_HCSTRING("player2","\xb1","\x09","\x15","\x8a"),
	HX_HCSTRING("currentPlayer","\x7a","\x6c","\x15","\x1b"),
	HX_HCSTRING("scorePlayer1","\x7e","\xac","\x19","\x97"),
	HX_HCSTRING("scorePlayer2","\x7f","\xac","\x19","\x97"),
	HX_HCSTRING("startGame","\x74","\x6d","\x52","\xfd"),
	HX_HCSTRING("createPlayerScores","\x3e","\x50","\x7b","\x3b"),
	HX_HCSTRING("createDeck","\x85","\x11","\xf4","\x54"),
	HX_HCSTRING("shuffleDeck","\x02","\xb3","\x69","\x49"),
	HX_HCSTRING("createField","\x1e","\xcc","\x0e","\x2a"),
	HX_HCSTRING("clickedonCard","\x76","\x94","\xad","\xcc"),
	HX_HCSTRING("compareCards","\xbe","\xd9","\xcf","\xdd"),
	HX_HCSTRING("switchPlayer","\x75","\x98","\xd8","\x53"),
	HX_HCSTRING("showText","\x4a","\x90","\x80","\xb4"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Main_obj::__mClass,"__mClass");
};

#endif

hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Main","\x59","\x64","\x2f","\x33");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Main_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = sStaticStorageInfo;
#endif
	hx::RegisterClass(__mClass->mName, __mClass);
}

