#ifndef INCLUDED_Main
#define INCLUDED_Main

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Card)
HX_DECLARE_CLASS0(Main)
HX_DECLARE_CLASS0(Player)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,Event)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,events,MouseEvent)
HX_DECLARE_CLASS2(openfl,text,TextField)


class HXCPP_CLASS_ATTRIBUTES  Main_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Main_obj OBJ_;
		Main_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Main")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Main_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Main_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Main","\x59","\x64","\x2f","\x33"); }

		::openfl::display::Sprite board;
		Array< ::Dynamic > memoryCards;
		Array< ::Dynamic > clickedCards;
		::Player player1;
		::Player player2;
		::Player currentPlayer;
		::openfl::text::TextField scorePlayer1;
		::openfl::text::TextField scorePlayer2;
		virtual Void startGame( ::openfl::events::MouseEvent event);
		Dynamic startGame_dyn();

		virtual Void createPlayerScores( );
		Dynamic createPlayerScores_dyn();

		virtual Void createDeck( );
		Dynamic createDeck_dyn();

		virtual Void shuffleDeck( );
		Dynamic shuffleDeck_dyn();

		virtual Void createField( );
		Dynamic createField_dyn();

		virtual Void clickedonCard( ::openfl::events::MouseEvent event);
		Dynamic clickedonCard_dyn();

		virtual Void compareCards( ::Card first,::Card second);
		Dynamic compareCards_dyn();

		virtual Void switchPlayer( );
		Dynamic switchPlayer_dyn();

		virtual Void showText( );
		Dynamic showText_dyn();

};


#endif /* INCLUDED_Main */ 
