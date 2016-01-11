#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif

Void Player_obj::__construct(::String newName)
{
HX_STACK_FRAME("Player","new",0x8d5554f3,"Player.new","Player.hx",14,0xa27fc9dd)
HX_STACK_THIS(this)
HX_STACK_ARG(newName,"newName")
{
	HX_STACK_LINE(16)
	this->score = (int)0;
	HX_STACK_LINE(21)
	this->name = newName;
}
;
	return null();
}

//Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new(::String newName)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(newName);
	return _result_;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > _result_ = new Player_obj();
	_result_->__construct(inArgs[0]);
	return _result_;}

Void Player_obj::addScore( int addedscore){
{
		HX_STACK_FRAME("Player","addScore",0x83ac9ffe,"Player.addScore","Player.hx",26,0xa27fc9dd)
		HX_STACK_THIS(this)
		HX_STACK_ARG(addedscore,"addedscore")
		HX_STACK_LINE(26)
		hx::AddEq(this->score,addedscore);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Player_obj,addScore,(void))


Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	HX_MARK_MEMBER_NAME(score,"score");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(score,"score");
	HX_VISIT_MEMBER_NAME(name,"name");
}

Dynamic Player_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return name; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { return score; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"addScore") ) { return addScore_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"score") ) { score=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("score","\x52","\x73","\xd9","\x78"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Player_obj,score),HX_HCSTRING("score","\x52","\x73","\xd9","\x78")},
	{hx::fsString,(int)offsetof(Player_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *sStaticStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("score","\x52","\x73","\xd9","\x78"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("addScore","\x71","\x99","\x36","\xf2"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

#endif

hx::Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("Player","\x81","\x5f","\x4d","\x6c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Player_obj >;
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

