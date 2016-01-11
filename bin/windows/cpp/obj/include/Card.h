#ifndef INCLUDED_Card
#define INCLUDED_Card

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS0(Card)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)


class HXCPP_CLASS_ATTRIBUTES  Card_obj : public ::openfl::display::Sprite_obj{
	public:
		typedef ::openfl::display::Sprite_obj super;
		typedef Card_obj OBJ_;
		Card_obj();
		Void __construct(int number,::String image);

	public:
		inline void *operator new( size_t inSize, bool inContainer=true,const char *inName="Card")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		static hx::ObjectPtr< Card_obj > __new(int number,::String image);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Card_obj();

		HX_DO_RTTI_ALL;
		Dynamic __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		Dynamic __SetField(const ::String &inString,const Dynamic &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_HCSTRING("Card","\xf0","\x49","\x93","\x2c"); }

		int cardNumber;
		::openfl::display::Bitmap frontImage;
		virtual Void changeToBack( );
		Dynamic changeToBack_dyn();

		virtual Void changeToFront( );
		Dynamic changeToFront_dyn();

};


#endif /* INCLUDED_Card */ 
