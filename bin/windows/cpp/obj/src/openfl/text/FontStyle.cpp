#include <hxcpp.h>

#ifndef INCLUDED_openfl_text_FontStyle
#include <openfl/text/FontStyle.h>
#endif
namespace openfl{
namespace text{

::openfl::text::FontStyle FontStyle_obj::BOLD;

::openfl::text::FontStyle FontStyle_obj::BOLD_ITALIC;

::openfl::text::FontStyle FontStyle_obj::ITALIC;

::openfl::text::FontStyle FontStyle_obj::REGULAR;

HX_DEFINE_CREATE_ENUM(FontStyle_obj)

int FontStyle_obj::__FindIndex(::String inName)
{
	if (inName==HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b")) return 3;
	if (inName==HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88")) return 2;
	if (inName==HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8")) return 1;
	if (inName==HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")) return 0;
	return super::__FindIndex(inName);
}

int FontStyle_obj::__FindArgCount(::String inName)
{
	if (inName==HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b")) return 0;
	if (inName==HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88")) return 0;
	if (inName==HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8")) return 0;
	if (inName==HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic FontStyle_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b")) return BOLD;
	if (inName==HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88")) return BOLD_ITALIC;
	if (inName==HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8")) return ITALIC;
	if (inName==HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02")) return REGULAR;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),
	HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8"),
	HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88"),
	HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FontStyle_obj::BOLD,"BOLD");
	HX_MARK_MEMBER_NAME(FontStyle_obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_obj::ITALIC,"ITALIC");
	HX_MARK_MEMBER_NAME(FontStyle_obj::REGULAR,"REGULAR");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FontStyle_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::BOLD,"BOLD");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::BOLD_ITALIC,"BOLD_ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::ITALIC,"ITALIC");
	HX_VISIT_MEMBER_NAME(FontStyle_obj::REGULAR,"REGULAR");
};
#endif

static ::String sMemberFields[] = { ::String(null()) };
hx::Class FontStyle_obj::__mClass;

Dynamic __Create_FontStyle_obj() { return new FontStyle_obj; }

void FontStyle_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_HCSTRING("openfl.text.FontStyle","\xdf","\xcc","\x4d","\x86"), hx::TCanCast< FontStyle_obj >,sStaticFields,sMemberFields,
	&__Create_FontStyle_obj, &__Create,
	&super::__SGetClass(), &CreateFontStyle_obj, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
}

void FontStyle_obj::__boot()
{
hx::Static(BOLD) = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("BOLD","\x85","\x49","\xdc","\x2b"),3);
hx::Static(BOLD_ITALIC) = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("BOLD_ITALIC","\xaa","\x0d","\xc2","\x88"),2);
hx::Static(ITALIC) = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("ITALIC","\xf0","\xda","\xe6","\xb8"),1);
hx::Static(REGULAR) = hx::CreateEnum< FontStyle_obj >(HX_HCSTRING("REGULAR","\x3c","\x26","\x5c","\x02"),0);
}


} // end namespace openfl
} // end namespace text
