#include <hxcpp.h>

#ifndef INCLUDED_Card
#include <Card.h>
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
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

Void Card_obj::__construct(int number,::String image)
{
HX_STACK_FRAME("Card","new",0x0152a2e2,"Card.new","Card.hx",24,0x90a6cece)
HX_STACK_THIS(this)
HX_STACK_ARG(number,"number")
HX_STACK_ARG(image,"image")
{
	HX_STACK_LINE(25)
	super::__construct();
	HX_STACK_LINE(26)
	this->cardNumber = number;
	HX_STACK_LINE(27)
	::String tmp = image;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(27)
	::openfl::display::BitmapData tmp1 = ::openfl::Assets_obj::getBitmapData(tmp,null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(27)
	::openfl::display::Bitmap tmp2 = ::openfl::display::Bitmap_obj::__new(tmp1,null(),null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(27)
	this->frontImage = tmp2;
	HX_STACK_LINE(28)
	::openfl::display::Bitmap tmp3 = this->frontImage;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(28)
	this->addChild(tmp3);
	HX_STACK_LINE(29)
	::openfl::display::Bitmap tmp4 = this->frontImage;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(29)
	tmp4->set_width((int)100);
	HX_STACK_LINE(30)
	::openfl::display::Bitmap tmp5 = this->frontImage;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(30)
	tmp5->set_height((int)170);
}
;
	return null();
}

//Card_obj::~Card_obj() { }

Dynamic Card_obj::__CreateEmpty() { return  new Card_obj; }
hx::ObjectPtr< Card_obj > Card_obj::__new(int number,::String image)
{  hx::ObjectPtr< Card_obj > _result_ = new Card_obj();
	_result_->__construct(number,image);
	return _result_;}

Dynamic Card_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Card_obj > _result_ = new Card_obj();
	_result_->__construct(inArgs[0],inArgs[1]);
	return _result_;}

Void Card_obj::changeToBack( ){
{
		HX_STACK_FRAME("Card","changeToBack",0x095fcc10,"Card.changeToBack","Card.hx",35,0x90a6cece)
		HX_STACK_THIS(this)
		HX_STACK_LINE(36)
		::openfl::display::BitmapData tmp = ::openfl::Assets_obj::getBitmapData(HX_HCSTRING("img/CardBack.jpg","\xf6","\x09","\x5f","\x25"),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(36)
		::openfl::display::Bitmap tmp1 = this->frontImage;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(36)
		tmp1->bitmapData = tmp;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,changeToBack,(void))

Void Card_obj::changeToFront( ){
{
		HX_STACK_FRAME("Card","changeToFront",0x8352d2a0,"Card.changeToFront","Card.hx",40,0x90a6cece)
		HX_STACK_THIS(this)
		HX_STACK_LINE(41)
		int tmp = this->cardNumber;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(41)
		int tmp1 = hx::Mod(tmp,(int)10);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(41)
		int tmp2 = (tmp1 + (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(41)
		::String tmp3 = (HX_HCSTRING("img/Card_","\x23","\xce","\xb4","\x39") + tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(41)
		::String tmp4 = (tmp3 + HX_HCSTRING(".jpg","\x73","\xa1","\xb8","\x1e"));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(41)
		::openfl::display::BitmapData tmp5 = ::openfl::Assets_obj::getBitmapData(tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(41)
		::openfl::display::Bitmap tmp6 = this->frontImage;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(41)
		tmp6->bitmapData = tmp5;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Card_obj,changeToFront,(void))


Card_obj::Card_obj()
{
}

void Card_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Card);
	HX_MARK_MEMBER_NAME(cardNumber,"cardNumber");
	HX_MARK_MEMBER_NAME(frontImage,"frontImage");
	::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Card_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(cardNumber,"cardNumber");
	HX_VISIT_MEMBER_NAME(frontImage,"frontImage");
	::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Card_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"cardNumber") ) { return cardNumber; }
		if (HX_FIELD_EQ(inName,"frontImage") ) { return frontImage; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"changeToBack") ) { return changeToBack_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"changeToFront") ) { return changeToFront_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Card_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"cardNumber") ) { cardNumber=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"frontImage") ) { frontImage=inValue.Cast< ::openfl::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Card_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("cardNumber","\xb9","\x54","\x2d","\xd7"));
	outFields->push(HX_HCSTRING("frontImage","\xf2","\x71","\x41","\xea"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Card_obj,cardNumber),HX_HCSTRING("cardNumber","\xb9","\x54","\x2d","\xd7")},
	{hx::fsObject /*::openfl::display::Bitmap*/ ,(int)offsetof(Card_obj,frontImage),HX_HCSTRING("frontImage","\xf2","\x71","\x41","\xea")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("cardNumber","\xb9","\x54","\x2d","\xd7"),
	HX_HCSTRING("frontImage","\xf2","\x71","\x41","\xea"),
	HX_HCSTRING("changeToBack","\xd2","\xfe","\xf7","\x5d"),
	HX_HCSTRING("changeToFront","\x9e","\x09","\xe7","\x33"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Card_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Card_obj::__mClass,"__mClass");
};

#endif

hx::Class Card_obj::__mClass;

void Card_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Card","\xf0","\x49","\x93","\x2c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Card_obj >;
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

