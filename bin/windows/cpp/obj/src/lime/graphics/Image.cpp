#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_crypto_BaseCode
#include <haxe/crypto/BaseCode.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageChannel
#include <lime/graphics/ImageChannel.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageType
#include <lime/graphics/ImageType.h>
#endif
#ifndef INCLUDED_lime_graphics_RenderContext
#include <lime/graphics/RenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_Renderer
#include <lime/graphics/Renderer.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMP
#include <lime/graphics/format/BMP.h>
#endif
#ifndef INCLUDED_lime_graphics_format_BMPType
#include <lime/graphics/format/BMPType.h>
#endif
#ifndef INCLUDED_lime_graphics_format_JPEG
#include <lime/graphics/format/JPEG.h>
#endif
#ifndef INCLUDED_lime_graphics_format_PNG
#include <lime/graphics/format/PNG.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageCanvasUtil
#include <lime/graphics/utils/ImageCanvasUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_math__ColorMatrix_ColorMatrix_Impl_
#include <lime/math/_ColorMatrix/ColorMatrix_Impl_.h>
#endif
#ifndef INCLUDED_lime_system_CFFI
#include <lime/system/CFFI.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace graphics{

Void Image_obj::__construct(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{
HX_STACK_FRAME("lime.graphics.Image","new",0x344ae603,"lime.graphics.Image.new","lime/graphics/Image.hx",88,0xc7b862ad)
HX_STACK_THIS(this)
HX_STACK_ARG(buffer,"buffer")
HX_STACK_ARG(__o_offsetX,"offsetX")
HX_STACK_ARG(__o_offsetY,"offsetY")
HX_STACK_ARG(__o_width,"width")
HX_STACK_ARG(__o_height,"height")
HX_STACK_ARG(color,"color")
HX_STACK_ARG(type,"type")
int offsetX = __o_offsetX.Default(0);
int offsetY = __o_offsetY.Default(0);
int width = __o_width.Default(-1);
int height = __o_height.Default(-1);
{
	HX_STACK_LINE(90)
	this->offsetX = offsetX;
	HX_STACK_LINE(91)
	this->offsetY = offsetY;
	HX_STACK_LINE(92)
	this->width = width;
	HX_STACK_LINE(93)
	this->height = height;
	HX_STACK_LINE(95)
	bool tmp = (type == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(95)
	if ((tmp)){
		HX_STACK_LINE(97)
		::lime::app::Application tmp1 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(97)
		bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(97)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(97)
		if ((tmp2)){
			HX_STACK_LINE(97)
			::lime::app::Application tmp4 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(97)
			::lime::app::Application tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(97)
			::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(97)
			::lime::graphics::Renderer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(97)
			tmp3 = (tmp7 != null());
		}
		else{
			HX_STACK_LINE(97)
			tmp3 = false;
		}
		HX_STACK_LINE(97)
		if ((tmp3)){
			HX_STACK_LINE(99)
			::lime::graphics::ImageType tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(99)
			{
				HX_STACK_LINE(99)
				::lime::app::Application tmp5 = ::lime::app::Application_obj::current;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(99)
				::lime::graphics::Renderer tmp6 = tmp5->renderers->__get((int)0).StaticCast< ::lime::graphics::Renderer >();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(99)
				::lime::graphics::RenderContext _g = tmp6->context;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(99)
				switch( (int)(_g->__Index())){
					case (int)2: case (int)1: {
						HX_STACK_LINE(101)
						tmp4 = ::lime::graphics::ImageType_obj::CANVAS;
					}
					;break;
					case (int)3: {
						HX_STACK_LINE(102)
						tmp4 = ::lime::graphics::ImageType_obj::FLASH;
					}
					;break;
					default: {
						HX_STACK_LINE(103)
						tmp4 = ::lime::graphics::ImageType_obj::DATA;
					}
				}
			}
			HX_STACK_LINE(99)
			this->type = tmp4;
		}
		else{
			HX_STACK_LINE(109)
			this->type = ::lime::graphics::ImageType_obj::DATA;
		}
	}
	else{
		HX_STACK_LINE(115)
		this->type = type;
	}
	HX_STACK_LINE(119)
	bool tmp1 = (buffer == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(119)
	if ((tmp1)){
		HX_STACK_LINE(121)
		bool tmp2 = (width > (int)0);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(121)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(121)
		if ((tmp2)){
			HX_STACK_LINE(121)
			tmp3 = (height > (int)0);
		}
		else{
			HX_STACK_LINE(121)
			tmp3 = false;
		}
		HX_STACK_LINE(121)
		if ((tmp3)){
			HX_STACK_LINE(123)
			::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(123)
			::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(123)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(127)
					::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(null(),width,height,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(127)
					this->buffer = tmp5;
					HX_STACK_LINE(128)
					int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(128)
					int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(128)
					::lime::graphics::utils::ImageCanvasUtil_obj::createCanvas(hx::ObjectPtr<OBJ_>(this),tmp6,tmp7);
					HX_STACK_LINE(130)
					bool tmp8 = (color != null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(130)
					if ((tmp8)){
						HX_STACK_LINE(132)
						::lime::math::Rectangle tmp9 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(132)
						Dynamic tmp10 = color;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(132)
						this->fillRect(tmp9,tmp10,null());
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(138)
					::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(138)
					{
						HX_STACK_LINE(138)
						int tmp6 = (width * height);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(138)
						int tmp7 = (tmp6 * (int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(138)
						Dynamic elements = tmp7;		HX_STACK_VAR(elements,"elements");
						HX_STACK_LINE(138)
						::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(138)
						bool tmp8 = (elements != null());		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(138)
						if ((tmp8)){
							HX_STACK_LINE(138)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(138)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(138)
							bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(138)
							if ((tmp9)){
								HX_STACK_LINE(138)
								::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(138)
								{
									HX_STACK_LINE(138)
									::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(138)
									::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(138)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(138)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(138)
									_this->length = tmp12;
									HX_STACK_LINE(138)
									int tmp13 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(138)
									_this->byteLength = tmp13;
									HX_STACK_LINE(138)
									::haxe::io::Bytes tmp14;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(138)
									{
										HX_STACK_LINE(138)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(138)
										int tmp15 = _this->byteLength;		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(138)
										::haxe::io::Bytes tmp16 = ::haxe::io::Bytes_obj::alloc(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(138)
										this2 = tmp16;
										HX_STACK_LINE(138)
										tmp14 = this2;
									}
									HX_STACK_LINE(138)
									_this->buffer = tmp14;
									HX_STACK_LINE(138)
									_this->copyFromArray(((Array< Float >)(null())),null());
									HX_STACK_LINE(138)
									tmp10 = _this;
								}
								HX_STACK_LINE(138)
								this1 = tmp10;
							}
							else{
								HX_STACK_LINE(138)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(138)
								if ((tmp10)){
									HX_STACK_LINE(138)
									::lime::utils::ArrayBufferView tmp11;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(138)
									{
										HX_STACK_LINE(138)
										::lime::utils::ArrayBufferView tmp12 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(138)
										::lime::utils::ArrayBufferView _this = tmp12;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(138)
										::haxe::io::Bytes tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(138)
										::haxe::io::Bytes srcData = tmp13;		HX_STACK_VAR(srcData,"srcData");
										HX_STACK_LINE(138)
										int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(138)
										int srcLength = tmp14;		HX_STACK_VAR(srcLength,"srcLength");
										HX_STACK_LINE(138)
										int tmp15 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(138)
										int srcByteOffset = tmp15;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
										HX_STACK_LINE(138)
										int tmp16 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(138)
										int srcElementSize = tmp16;		HX_STACK_VAR(srcElementSize,"srcElementSize");
										HX_STACK_LINE(138)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(138)
										int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(138)
										int tmp18 = _this->type;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(138)
										bool tmp19 = (tmp17 == tmp18);		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(138)
										if ((tmp19)){
											HX_STACK_LINE(138)
											int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
											HX_STACK_LINE(138)
											int tmp20 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(138)
											int cloneLength = tmp20;		HX_STACK_VAR(cloneLength,"cloneLength");
											HX_STACK_LINE(138)
											::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
											HX_STACK_LINE(138)
											{
												HX_STACK_LINE(138)
												::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
												HX_STACK_LINE(138)
												int tmp22 = cloneLength;		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(138)
												::haxe::io::Bytes tmp23 = ::haxe::io::Bytes_obj::alloc(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
												HX_STACK_LINE(138)
												this2 = tmp23;
												HX_STACK_LINE(138)
												tmp21 = this2;
											}
											HX_STACK_LINE(138)
											_this->buffer = tmp21;
											HX_STACK_LINE(138)
											::haxe::io::Bytes tmp22 = srcData;		HX_STACK_VAR(tmp22,"tmp22");
											HX_STACK_LINE(138)
											int tmp23 = srcByteOffset;		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(138)
											int tmp24 = cloneLength;		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(138)
											_this->buffer->blit((int)0,tmp22,tmp23,tmp24);
										}
										else{
											HX_STACK_LINE(138)
											HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
										}
										HX_STACK_LINE(138)
										int tmp20 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(138)
										_this->byteLength = tmp20;
										HX_STACK_LINE(138)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(138)
										_this->length = srcLength;
										HX_STACK_LINE(138)
										tmp11 = _this;
									}
									HX_STACK_LINE(138)
									this1 = tmp11;
								}
								else{
									HX_STACK_LINE(138)
									bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(138)
									if ((tmp11)){
										HX_STACK_LINE(138)
										::lime::utils::ArrayBufferView tmp12;		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(138)
										{
											HX_STACK_LINE(138)
											::lime::utils::ArrayBufferView tmp13 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp13,"tmp13");
											HX_STACK_LINE(138)
											::lime::utils::ArrayBufferView _this = tmp13;		HX_STACK_VAR(_this,"_this");
											HX_STACK_LINE(138)
											bool tmp14 = false;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(138)
											if ((tmp14)){
												HX_STACK_LINE(138)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(138)
											int tmp15 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(138)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(138)
											if ((tmp16)){
												HX_STACK_LINE(138)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(138)
											int tmp17 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(138)
											int bufferByteLength = tmp17;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
											HX_STACK_LINE(138)
											int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
											HX_STACK_LINE(138)
											int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
											HX_STACK_LINE(138)
											bool tmp18 = true;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(138)
											if ((tmp18)){
												HX_STACK_LINE(138)
												int tmp19 = bufferByteLength;		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(138)
												newByteLength = tmp19;
												HX_STACK_LINE(138)
												int tmp20 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(138)
												bool tmp21 = (tmp20 != (int)0);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(138)
												if ((tmp21)){
													HX_STACK_LINE(138)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
												HX_STACK_LINE(138)
												bool tmp22 = (newByteLength < (int)0);		HX_STACK_VAR(tmp22,"tmp22");
												HX_STACK_LINE(138)
												if ((tmp22)){
													HX_STACK_LINE(138)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											else{
												HX_STACK_LINE(138)
												int tmp19 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp19,"tmp19");
												HX_STACK_LINE(138)
												newByteLength = tmp19;
												HX_STACK_LINE(138)
												int tmp20 = newByteLength;		HX_STACK_VAR(tmp20,"tmp20");
												HX_STACK_LINE(138)
												int newRange = tmp20;		HX_STACK_VAR(newRange,"newRange");
												HX_STACK_LINE(138)
												bool tmp21 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp21,"tmp21");
												HX_STACK_LINE(138)
												if ((tmp21)){
													HX_STACK_LINE(138)
													HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
												}
											}
											HX_STACK_LINE(138)
											_this->buffer = null();
											HX_STACK_LINE(138)
											_this->byteOffset = (int)0;
											HX_STACK_LINE(138)
											_this->byteLength = newByteLength;
											HX_STACK_LINE(138)
											Float tmp19 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(138)
											int tmp20 = ::Std_obj::_int(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
											HX_STACK_LINE(138)
											_this->length = tmp20;
											HX_STACK_LINE(138)
											tmp12 = _this;
										}
										HX_STACK_LINE(138)
										this1 = tmp12;
									}
									else{
										HX_STACK_LINE(138)
										HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
									}
								}
							}
						}
						HX_STACK_LINE(138)
						tmp5 = this1;
					}
					HX_STACK_LINE(138)
					int tmp6 = width;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(138)
					int tmp7 = height;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(138)
					::lime::graphics::ImageBuffer tmp8 = ::lime::graphics::ImageBuffer_obj::__new(tmp5,tmp6,tmp7,null(),null());		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(138)
					this->buffer = tmp8;
					HX_STACK_LINE(140)
					bool tmp9 = (color != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(140)
					if ((tmp9)){
						HX_STACK_LINE(142)
						::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(142)
						Dynamic tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(142)
						this->fillRect(tmp10,tmp11,null());
					}
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	else{
		HX_STACK_LINE(161)
		::lime::graphics::ImageBuffer tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(161)
		this->__fromImageBuffer(tmp2);
	}
}
;
	return null();
}

//Image_obj::~Image_obj() { }

Dynamic Image_obj::__CreateEmpty() { return  new Image_obj; }
hx::ObjectPtr< Image_obj > Image_obj::__new(::lime::graphics::ImageBuffer buffer,hx::Null< int >  __o_offsetX,hx::Null< int >  __o_offsetY,hx::Null< int >  __o_width,hx::Null< int >  __o_height,Dynamic color,::lime::graphics::ImageType type)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(buffer,__o_offsetX,__o_offsetY,__o_width,__o_height,color,type);
	return _result_;}

Dynamic Image_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Image_obj > _result_ = new Image_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6]);
	return _result_;}

::lime::graphics::Image Image_obj::clone( ){
	HX_STACK_FRAME("lime.graphics.Image","clone",0xb88517c0,"lime.graphics.Image.clone","lime/graphics/Image.hx",168,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(170)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(170)
	bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(170)
	if ((tmp1)){
		HX_STACK_LINE(172)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(172)
		bool tmp3 = (tmp2 == ::lime::graphics::ImageType_obj::CANVAS);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(172)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(172)
		if ((tmp3)){
			HX_STACK_LINE(172)
			::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(172)
			::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(172)
			Dynamic tmp7 = tmp6->__srcImage;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			tmp4 = (tmp7 == null());
		}
		else{
			HX_STACK_LINE(172)
			tmp4 = false;
		}
		HX_STACK_LINE(172)
		if ((tmp4)){
			HX_STACK_LINE(174)
			::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
			HX_STACK_LINE(175)
			::lime::graphics::utils::ImageCanvasUtil_obj::sync(hx::ObjectPtr<OBJ_>(this),true);
		}
		HX_STACK_LINE(179)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(179)
		::lime::graphics::ImageBuffer tmp6 = tmp5->clone();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(179)
		int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(179)
		int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(179)
		int tmp9 = this->width;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(179)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(179)
		::lime::graphics::ImageType tmp11 = this->type;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(179)
		::lime::graphics::Image tmp12 = ::lime::graphics::Image_obj::__new(tmp6,tmp7,tmp8,tmp9,tmp10,null(),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(179)
		::lime::graphics::Image image = tmp12;		HX_STACK_VAR(image,"image");
		HX_STACK_LINE(180)
		bool tmp13 = this->dirty;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(180)
		image->dirty = tmp13;
		HX_STACK_LINE(181)
		::lime::graphics::Image tmp14 = image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(181)
		return tmp14;
	}
	else{
		HX_STACK_LINE(185)
		int tmp2 = this->offsetX;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(185)
		int tmp3 = this->offsetY;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(185)
		int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(185)
		int tmp5 = this->height;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(185)
		::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(185)
		::lime::graphics::Image tmp7 = ::lime::graphics::Image_obj::__new(null(),tmp2,tmp3,tmp4,tmp5,null(),tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(185)
		return tmp7;
	}
	HX_STACK_LINE(170)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,clone,return )

Void Image_obj::colorTransform( ::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.Image","colorTransform",0xaf89aec6,"lime.graphics.Image.colorTransform","lime/graphics/Image.hx",192,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(194)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(194)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(194)
		rect = tmp1;
		HX_STACK_LINE(195)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(195)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(195)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(195)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(195)
		if ((tmp4)){
			HX_STACK_LINE(195)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(195)
			tmp5 = true;
		}
		HX_STACK_LINE(195)
		if ((tmp5)){
			HX_STACK_LINE(195)
			return null();
		}
		HX_STACK_LINE(197)
		{
			HX_STACK_LINE(197)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(197)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(197)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(201)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(201)
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(201)
					::lime::graphics::utils::ImageCanvasUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(209)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(209)
					::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(209)
					::lime::graphics::utils::ImageDataUtil_obj::colorTransform(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(213)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(213)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(213)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(214)
					::lime::graphics::ImageBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(214)
					::lime::utils::ArrayBufferView tmp10 = colorMatrix;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(214)
					tmp9->__srcBitmapData->__Field(HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"), hx::paccDynamic )(rect->__toFlashRectangle(),::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::__toFlashColorTransform(tmp10));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,colorTransform,(void))

Void Image_obj::copyChannel( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.Image","copyChannel",0xc3306e31,"lime.graphics.Image.copyChannel","lime/graphics/Image.hx",223,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(225)
		::lime::math::Rectangle tmp = sourceRect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(225)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(225)
		sourceRect = tmp1;
		HX_STACK_LINE(226)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(226)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(226)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(226)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(226)
		if ((tmp4)){
			HX_STACK_LINE(226)
			tmp5 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(226)
			tmp5 = true;
		}
		HX_STACK_LINE(226)
		if ((tmp5)){
			HX_STACK_LINE(226)
			return null();
		}
		HX_STACK_LINE(228)
		bool tmp6 = (destChannel == ::lime::graphics::ImageChannel_obj::ALPHA);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(228)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(228)
		if ((tmp6)){
			HX_STACK_LINE(228)
			bool tmp8 = this->get_transparent();		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(228)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(228)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(228)
			tmp7 = !(tmp10);
		}
		else{
			HX_STACK_LINE(228)
			tmp7 = false;
		}
		HX_STACK_LINE(228)
		if ((tmp7)){
			HX_STACK_LINE(228)
			return null();
		}
		HX_STACK_LINE(229)
		bool tmp8 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(229)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(229)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(229)
		if ((tmp9)){
			HX_STACK_LINE(229)
			tmp10 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(229)
			tmp10 = true;
		}
		HX_STACK_LINE(229)
		if ((tmp10)){
			HX_STACK_LINE(229)
			return null();
		}
		HX_STACK_LINE(230)
		Float tmp11 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(230)
		int tmp12 = sourceImage->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(230)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(230)
		if ((tmp13)){
			HX_STACK_LINE(230)
			Float tmp14 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(230)
			sourceRect->width = tmp14;
		}
		HX_STACK_LINE(231)
		Float tmp14 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(231)
		int tmp15 = sourceImage->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(231)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(231)
		if ((tmp16)){
			HX_STACK_LINE(231)
			Float tmp17 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(231)
			sourceRect->height = tmp17;
		}
		HX_STACK_LINE(233)
		{
			HX_STACK_LINE(233)
			::lime::graphics::ImageType tmp17 = this->type;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(233)
			::lime::graphics::ImageType _g = tmp17;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(233)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(237)
					::lime::graphics::Image tmp18 = sourceImage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(237)
					::lime::math::Rectangle tmp19 = sourceRect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(237)
					::lime::math::Vector2 tmp20 = destPoint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(237)
					::lime::graphics::ImageChannel tmp21 = sourceChannel;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(237)
					::lime::graphics::ImageChannel tmp22 = destChannel;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(237)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(245)
					::lime::graphics::Image tmp18 = sourceImage;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(245)
					::lime::math::Rectangle tmp19 = sourceRect;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(245)
					::lime::math::Vector2 tmp20 = destPoint;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(245)
					::lime::graphics::ImageChannel tmp21 = sourceChannel;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(245)
					::lime::graphics::ImageChannel tmp22 = destChannel;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(245)
					::lime::graphics::utils::ImageDataUtil_obj::copyChannel(hx::ObjectPtr<OBJ_>(this),tmp18,tmp19,tmp20,tmp21,tmp22);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(249)
					int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(249)
					switch( (int)(sourceChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(250)
							tmp18 = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(251)
							tmp18 = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(252)
							tmp18 = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(253)
							tmp18 = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(249)
					int srcChannel = tmp18;		HX_STACK_VAR(srcChannel,"srcChannel");
					HX_STACK_LINE(256)
					int tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(256)
					switch( (int)(destChannel->__Index())){
						case (int)0: {
							HX_STACK_LINE(257)
							tmp19 = (int)1;
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(258)
							tmp19 = (int)2;
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(259)
							tmp19 = (int)4;
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(260)
							tmp19 = (int)8;
						}
						;break;
					}
					HX_STACK_LINE(256)
					int dstChannel = tmp19;		HX_STACK_VAR(dstChannel,"dstChannel");
					HX_STACK_LINE(263)
					int tmp20 = sourceImage->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(263)
					int tmp21 = sourceImage->offsetY;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(263)
					sourceRect->offset(tmp20,tmp21);
					HX_STACK_LINE(264)
					int tmp22 = this->offsetX;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(264)
					int tmp23 = this->offsetY;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(264)
					destPoint->offset(tmp22,tmp23);
					HX_STACK_LINE(266)
					::lime::graphics::ImageBuffer tmp24 = this->buffer;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(266)
					tmp24->__srcBitmapData->__Field(HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"), hx::paccDynamic )(sourceImage->buffer->get_src(),sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),srcChannel,dstChannel);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(Image_obj,copyChannel,(void))

Void Image_obj::copyPixels( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","copyPixels",0x19d2897f,"lime.graphics.Image.copyPixels","lime/graphics/Image.hx",275,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(278)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(278)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(278)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(278)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(278)
		if ((tmp2)){
			HX_STACK_LINE(278)
			tmp3 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(278)
			tmp3 = true;
		}
		HX_STACK_LINE(278)
		if ((tmp3)){
			HX_STACK_LINE(278)
			return null();
		}
		HX_STACK_LINE(279)
		bool tmp4 = (sourceRect->width <= (int)0);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(279)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(279)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(279)
		if ((tmp5)){
			HX_STACK_LINE(279)
			tmp6 = (sourceRect->height <= (int)0);
		}
		else{
			HX_STACK_LINE(279)
			tmp6 = true;
		}
		HX_STACK_LINE(279)
		if ((tmp6)){
			HX_STACK_LINE(279)
			return null();
		}
		HX_STACK_LINE(280)
		int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(280)
		bool tmp8 = (tmp7 <= (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(280)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(280)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(280)
		if ((tmp9)){
			HX_STACK_LINE(280)
			int tmp11 = this->height;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(280)
			int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(280)
			tmp10 = (tmp12 <= (int)0);
		}
		else{
			HX_STACK_LINE(280)
			tmp10 = true;
		}
		HX_STACK_LINE(280)
		if ((tmp10)){
			HX_STACK_LINE(280)
			return null();
		}
		HX_STACK_LINE(283)
		Float tmp11 = (sourceRect->x + sourceRect->width);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(283)
		int tmp12 = sourceImage->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(283)
		bool tmp13 = (tmp11 > tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(283)
		if ((tmp13)){
			HX_STACK_LINE(283)
			Float tmp14 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(283)
			sourceRect->width = tmp14;
		}
		HX_STACK_LINE(284)
		Float tmp14 = (sourceRect->y + sourceRect->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(284)
		int tmp15 = sourceImage->height;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(284)
		bool tmp16 = (tmp14 > tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(284)
		if ((tmp16)){
			HX_STACK_LINE(284)
			Float tmp17 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(284)
			sourceRect->height = tmp17;
		}
		HX_STACK_LINE(287)
		bool tmp17 = (sourceRect->x < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(287)
		if ((tmp17)){
			HX_STACK_LINE(288)
			hx::AddEq(sourceRect->width,sourceRect->x);
			HX_STACK_LINE(289)
			sourceRect->x = (int)0;
		}
		HX_STACK_LINE(291)
		bool tmp18 = (sourceRect->y < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(291)
		if ((tmp18)){
			HX_STACK_LINE(292)
			hx::AddEq(sourceRect->height,sourceRect->y);
			HX_STACK_LINE(293)
			sourceRect->y = (int)0;
		}
		HX_STACK_LINE(297)
		Float tmp19 = (destPoint->x + sourceRect->width);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(297)
		int tmp20 = this->width;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(297)
		bool tmp21 = (tmp19 > tmp20);		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(297)
		if ((tmp21)){
			HX_STACK_LINE(297)
			int tmp22 = this->width;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(297)
			Float tmp23 = destPoint->x;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(297)
			Float tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(297)
			sourceRect->width = tmp24;
		}
		HX_STACK_LINE(298)
		Float tmp22 = (destPoint->y + sourceRect->height);		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(298)
		int tmp23 = this->height;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(298)
		bool tmp24 = (tmp22 > tmp23);		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(298)
		if ((tmp24)){
			HX_STACK_LINE(298)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(298)
			Float tmp26 = destPoint->y;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(298)
			Float tmp27 = (tmp25 - tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(298)
			sourceRect->height = tmp27;
		}
		HX_STACK_LINE(301)
		bool tmp25 = (destPoint->x < (int)0);		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(301)
		if ((tmp25)){
			HX_STACK_LINE(302)
			hx::AddEq(sourceRect->width,destPoint->x);
			HX_STACK_LINE(303)
			Float tmp26 = destPoint->x;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(303)
			Float tmp27 = -(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(303)
			sourceRect->x = tmp27;
			HX_STACK_LINE(304)
			destPoint->x = (int)0;
		}
		HX_STACK_LINE(306)
		bool tmp26 = (destPoint->y < (int)0);		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(306)
		if ((tmp26)){
			HX_STACK_LINE(307)
			hx::AddEq(sourceRect->height,destPoint->y);
			HX_STACK_LINE(308)
			Float tmp27 = destPoint->y;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(308)
			Float tmp28 = -(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(308)
			sourceRect->y = tmp28;
			HX_STACK_LINE(309)
			destPoint->y = (int)0;
		}
		HX_STACK_LINE(312)
		{
			HX_STACK_LINE(312)
			::lime::graphics::ImageType tmp27 = this->type;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(312)
			::lime::graphics::ImageType _g = tmp27;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(312)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(316)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(317)
					::lime::graphics::Image tmp28 = sourceImage;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(317)
					::lime::math::Rectangle tmp29 = sourceRect;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(317)
					::lime::math::Vector2 tmp30 = destPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(317)
					::lime::graphics::Image tmp31 = alphaImage;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(317)
					::lime::math::Vector2 tmp32 = alphaPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(317)
					bool tmp33 = mergeAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(317)
					::lime::graphics::utils::ImageCanvasUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(326)
					::lime::graphics::Image tmp28 = sourceImage;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(326)
					::lime::math::Rectangle tmp29 = sourceRect;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(326)
					::lime::math::Vector2 tmp30 = destPoint;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(326)
					::lime::graphics::Image tmp31 = alphaImage;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(326)
					::lime::math::Vector2 tmp32 = alphaPoint;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(326)
					bool tmp33 = mergeAlpha;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(326)
					::lime::graphics::utils::ImageDataUtil_obj::copyPixels(hx::ObjectPtr<OBJ_>(this),tmp28,tmp29,tmp30,tmp31,tmp32,tmp33);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(330)
					int tmp28 = sourceImage->offsetX;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(330)
					int tmp29 = sourceImage->offsetY;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(330)
					sourceRect->offset(tmp28,tmp29);
					HX_STACK_LINE(331)
					int tmp30 = this->offsetX;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(331)
					int tmp31 = this->offsetY;		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(331)
					destPoint->offset(tmp30,tmp31);
					HX_STACK_LINE(333)
					bool tmp32 = (alphaImage != null());		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(333)
					bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(333)
					if ((tmp32)){
						HX_STACK_LINE(333)
						tmp33 = (alphaPoint != null());
					}
					else{
						HX_STACK_LINE(333)
						tmp33 = false;
					}
					HX_STACK_LINE(333)
					if ((tmp33)){
						HX_STACK_LINE(335)
						int tmp34 = alphaImage->offsetX;		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(335)
						int tmp35 = alphaImage->offsetY;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(335)
						alphaPoint->offset(tmp34,tmp35);
					}
					HX_STACK_LINE(339)
					::lime::graphics::ImageBuffer tmp34 = this->buffer;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(339)
					bool tmp35 = (alphaImage != null());		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(339)
					bool tmp36 = (alphaPoint != null());		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(339)
					tmp34->__srcBitmapData->__Field(HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),(  ((tmp35)) ? Dynamic(alphaImage->buffer->get_src()) : Dynamic(null()) ),(  ((tmp36)) ? Dynamic(alphaPoint->__toFlashPoint()) : Dynamic(null()) ),mergeAlpha);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(Image_obj,copyPixels,(void))

::haxe::io::Bytes Image_obj::encode( ::String __o_format,hx::Null< int >  __o_quality){
::String format = __o_format.Default(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"));
int quality = __o_quality.Default(90);
	HX_STACK_FRAME("lime.graphics.Image","encode",0xa785c453,"lime.graphics.Image.encode","lime/graphics/Image.hx",348,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(format,"format")
	HX_STACK_ARG(quality,"quality")
{
		HX_STACK_LINE(350)
		::String tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(350)
		::String _switch_1 = (tmp);
		if (  ( _switch_1==HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"))){
			HX_STACK_LINE(354)
			::haxe::io::Bytes tmp1 = ::lime::graphics::format::PNG_obj::encode(hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(354)
			return tmp1;
		}
		else if (  ( _switch_1==HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00")) ||  ( _switch_1==HX_HCSTRING("jpeg","\xa8","\xf2","\x65","\x46"))){
			HX_STACK_LINE(358)
			int tmp1 = quality;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(358)
			::haxe::io::Bytes tmp2 = ::lime::graphics::format::JPEG_obj::encode(hx::ObjectPtr<OBJ_>(this),tmp1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(358)
			return tmp2;
		}
		else if (  ( _switch_1==HX_HCSTRING("bmp","\x45","\xbc","\x4a","\x00"))){
			HX_STACK_LINE(362)
			::haxe::io::Bytes tmp1 = ::lime::graphics::format::BMP_obj::encode(hx::ObjectPtr<OBJ_>(this),null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(362)
			return tmp1;
		}
		else  {
		}
;
;
		HX_STACK_LINE(368)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,encode,return )

Void Image_obj::fillRect( ::lime::math::Rectangle rect,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","fillRect",0x2421e0c4,"lime.graphics.Image.fillRect","lime/graphics/Image.hx",373,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(375)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(375)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(375)
		rect = tmp1;
		HX_STACK_LINE(376)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(376)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(376)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(376)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(376)
		if ((tmp4)){
			HX_STACK_LINE(376)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(376)
			tmp5 = true;
		}
		HX_STACK_LINE(376)
		if ((tmp5)){
			HX_STACK_LINE(376)
			return null();
		}
		HX_STACK_LINE(378)
		{
			HX_STACK_LINE(378)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(378)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(378)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(382)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(382)
					int tmp8 = color;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(382)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(382)
					::lime::graphics::utils::ImageCanvasUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(390)
					::lime::graphics::ImageBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(390)
					int tmp8 = tmp7->data->length;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(390)
					bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(390)
					if ((tmp9)){
						HX_STACK_LINE(390)
						return null();
					}
					HX_STACK_LINE(392)
					::lime::math::Rectangle tmp10 = rect;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(392)
					int tmp11 = color;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(392)
					Dynamic tmp12 = format;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(392)
					::lime::graphics::utils::ImageDataUtil_obj::fillRect(hx::ObjectPtr<OBJ_>(this),tmp10,tmp11,tmp12);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(396)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(396)
					int tmp8 = this->offsetY;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(396)
					rect->offset(tmp7,tmp8);
					HX_STACK_LINE(398)
					bool tmp9 = (format != null());		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(398)
					int tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(398)
					if ((tmp9)){
						HX_STACK_LINE(398)
						Dynamic tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(398)
						switch( (int)(tmp11)){
							case (int)1: {
								HX_STACK_LINE(400)
								tmp10 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(401)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(401)
								{
									HX_STACK_LINE(401)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(401)
									{
										HX_STACK_LINE(401)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(401)
										tmp12 = argb;
									}
									HX_STACK_LINE(401)
									int argb = tmp12;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(401)
									{
										HX_STACK_LINE(401)
										int tmp13 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(401)
										int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(401)
										int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(401)
										int tmp16 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(401)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(401)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(401)
										int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(401)
										int tmp20 = (int(tmp15) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(401)
										int tmp21 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(401)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(401)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(401)
										int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(401)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(401)
										int tmp26 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(401)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(401)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(401)
										int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(401)
										argb = tmp29;
									}
									HX_STACK_LINE(401)
									tmp10 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(402)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(402)
								{
									HX_STACK_LINE(402)
									int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(402)
									{
										HX_STACK_LINE(402)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(402)
										tmp12 = argb;
									}
									HX_STACK_LINE(402)
									int argb = tmp12;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(402)
									{
										HX_STACK_LINE(402)
										int tmp13 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(402)
										int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(402)
										int tmp15 = (int(tmp14) << int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(402)
										int tmp16 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(402)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(402)
										int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(402)
										int tmp19 = (int(tmp18) << int((int)16));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(402)
										int tmp20 = (int(tmp15) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(402)
										int tmp21 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(402)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(402)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(402)
										int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(402)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(402)
										int tmp26 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(402)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(402)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(402)
										int tmp29 = (int(tmp25) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(402)
										argb = tmp29;
									}
									HX_STACK_LINE(402)
									tmp10 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(402)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(402)
						{
							HX_STACK_LINE(402)
							int tmp11;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(402)
								tmp11 = argb;
							}
							HX_STACK_LINE(402)
							int argb = tmp11;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(402)
							{
								HX_STACK_LINE(402)
								int tmp12 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(402)
								int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(402)
								int tmp14 = (int(tmp13) << int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(402)
								int tmp15 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(402)
								int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(402)
								int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(402)
								int tmp18 = (int(tmp17) << int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(402)
								int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(402)
								int tmp20 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(402)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(402)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(402)
								int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(402)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(402)
								int tmp25 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(402)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(402)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(402)
								int tmp28 = (int(tmp24) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(402)
								argb = tmp28;
							}
							HX_STACK_LINE(402)
							tmp10 = argb;
						}
					}
					HX_STACK_LINE(398)
					int argb = tmp10;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(406)
					::lime::graphics::ImageBuffer tmp11 = this->buffer;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(406)
					tmp11->__srcBitmapData->__Field(HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"), hx::paccDynamic )(rect->__toFlashRectangle(),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fillRect,(void))

Void Image_obj::floodFill( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","floodFill",0x1da9f544,"lime.graphics.Image.floodFill","lime/graphics/Image.hx",415,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(417)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(417)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(417)
		if ((tmp1)){
			HX_STACK_LINE(417)
			return null();
		}
		HX_STACK_LINE(419)
		{
			HX_STACK_LINE(419)
			::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(419)
			::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(419)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(423)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(423)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(423)
					int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(423)
					Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(423)
					::lime::graphics::utils::ImageCanvasUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(431)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(431)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(431)
					int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(431)
					Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(431)
					::lime::graphics::utils::ImageDataUtil_obj::floodFill(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(435)
					bool tmp3 = (format != null());		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(435)
					int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(435)
					if ((tmp3)){
						HX_STACK_LINE(435)
						Dynamic tmp5 = format;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(435)
						switch( (int)(tmp5)){
							case (int)1: {
								HX_STACK_LINE(437)
								tmp4 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(438)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(438)
								{
									HX_STACK_LINE(438)
									int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(438)
									{
										HX_STACK_LINE(438)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(438)
										tmp6 = argb;
									}
									HX_STACK_LINE(438)
									int argb = tmp6;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(438)
									{
										HX_STACK_LINE(438)
										int tmp7 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(438)
										int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(438)
										int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(438)
										int tmp10 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(438)
										int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(438)
										int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(438)
										int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(438)
										int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(438)
										int tmp15 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(438)
										int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(438)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(438)
										int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(438)
										int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(438)
										int tmp20 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(438)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(438)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(438)
										int tmp23 = (int(tmp19) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(438)
										argb = tmp23;
									}
									HX_STACK_LINE(438)
									tmp4 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(439)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(439)
								{
									HX_STACK_LINE(439)
									int tmp6;		HX_STACK_VAR(tmp6,"tmp6");
									HX_STACK_LINE(439)
									{
										HX_STACK_LINE(439)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(439)
										tmp6 = argb;
									}
									HX_STACK_LINE(439)
									int argb = tmp6;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(439)
									{
										HX_STACK_LINE(439)
										int tmp7 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
										HX_STACK_LINE(439)
										int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
										HX_STACK_LINE(439)
										int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(439)
										int tmp10 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(439)
										int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(439)
										int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(439)
										int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(439)
										int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(439)
										int tmp15 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(439)
										int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(439)
										int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(439)
										int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(439)
										int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(439)
										int tmp20 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(439)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(439)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(439)
										int tmp23 = (int(tmp19) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(439)
										argb = tmp23;
									}
									HX_STACK_LINE(439)
									tmp4 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(439)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(439)
						{
							HX_STACK_LINE(439)
							int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(439)
							{
								HX_STACK_LINE(439)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(439)
								tmp5 = argb;
							}
							HX_STACK_LINE(439)
							int argb = tmp5;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(439)
							{
								HX_STACK_LINE(439)
								int tmp6 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
								HX_STACK_LINE(439)
								int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(439)
								int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(439)
								int tmp9 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(439)
								int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(439)
								int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(439)
								int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(439)
								int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(439)
								int tmp14 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(439)
								int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(439)
								int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(439)
								int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(439)
								int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(439)
								int tmp19 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(439)
								int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(439)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(439)
								int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(439)
								argb = tmp22;
							}
							HX_STACK_LINE(439)
							tmp4 = argb;
						}
					}
					HX_STACK_LINE(435)
					int argb = tmp4;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(443)
					::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(443)
					int tmp6 = x;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(443)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(443)
					int tmp8 = y;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(443)
					int tmp9 = this->offsetY;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(443)
					tmp5->__srcBitmapData->__Field(HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"), hx::paccDynamic )((tmp6 + tmp7),(tmp8 + tmp9),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,floodFill,(void))

::lime::math::Rectangle Image_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor,Dynamic format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.Image","getColorBoundsRect",0x21db6743,"lime.graphics.Image.getColorBoundsRect","lime/graphics/Image.hx",514,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(516)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(516)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(516)
		if ((tmp1)){
			HX_STACK_LINE(516)
			return null();
		}
		HX_STACK_LINE(518)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(518)
		::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(518)
		switch( (int)(_g->__Index())){
			case (int)0: {
				HX_STACK_LINE(526)
				int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(526)
				int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(526)
				bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(526)
				Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(526)
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(526)
				return tmp7;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(530)
				int tmp3 = mask;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(530)
				int tmp4 = color;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(530)
				bool tmp5 = findColor;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(530)
				Dynamic tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(530)
				::lime::math::Rectangle tmp7 = ::lime::graphics::utils::ImageDataUtil_obj::getColorBoundsRect(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(530)
				return tmp7;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(534)
				::lime::graphics::ImageBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(534)
				Dynamic tmp4 = tmp3->__srcBitmapData->__Field(HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"), hx::paccDynamic )(mask,color,findColor);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(534)
				Dynamic rect = tmp4;		HX_STACK_VAR(rect,"rect");
				HX_STACK_LINE(535)
				::lime::math::Rectangle tmp5 = ::lime::math::Rectangle_obj::__new(rect->__Field(HX_HCSTRING("x","\x78","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("y","\x79","\x00","\x00","\x00"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),rect->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(535)
				return tmp5;
			}
			;break;
			default: {
				HX_STACK_LINE(539)
				return null();
			}
		}
		HX_STACK_LINE(518)
		return null();
	}
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,getColorBoundsRect,return )

int Image_obj::getPixel( int x,int y,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixel",0xd9e3718d,"lime.graphics.Image.getPixel","lime/graphics/Image.hx",544,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(546)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(546)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(546)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(546)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(546)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(546)
	if ((tmp3)){
		HX_STACK_LINE(546)
		tmp4 = (x < (int)0);
	}
	else{
		HX_STACK_LINE(546)
		tmp4 = true;
	}
	HX_STACK_LINE(546)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(546)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(546)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(546)
	if ((tmp6)){
		HX_STACK_LINE(546)
		tmp7 = (y < (int)0);
	}
	else{
		HX_STACK_LINE(546)
		tmp7 = true;
	}
	HX_STACK_LINE(546)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(546)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(546)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(546)
	if ((tmp9)){
		HX_STACK_LINE(546)
		int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(546)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(546)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(546)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(546)
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		HX_STACK_LINE(546)
		tmp10 = true;
	}
	HX_STACK_LINE(546)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(546)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(546)
	if ((tmp11)){
		HX_STACK_LINE(546)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(546)
		int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(546)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(546)
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		HX_STACK_LINE(546)
		tmp12 = true;
	}
	HX_STACK_LINE(546)
	if ((tmp12)){
		HX_STACK_LINE(546)
		return (int)0;
	}
	HX_STACK_LINE(548)
	::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(548)
	::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(548)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(552)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(552)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(552)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(552)
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(552)
			return tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(560)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(560)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(560)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(560)
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(560)
			return tmp17;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(564)
			::lime::graphics::ImageBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(564)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(564)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(564)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(564)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(564)
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(564)
			int color = tmp19;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(566)
			bool tmp20 = (format != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(566)
			if ((tmp20)){
				HX_STACK_LINE(566)
				Dynamic tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(566)
				switch( (int)(tmp21)){
					case (int)1: {
						HX_STACK_LINE(568)
						int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(568)
						return tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(569)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(569)
						{
							HX_STACK_LINE(569)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(569)
							{
								HX_STACK_LINE(569)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(569)
								tmp23 = bgra;
							}
							HX_STACK_LINE(569)
							int bgra = tmp23;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(569)
							{
								HX_STACK_LINE(569)
								int tmp24 = (int(color) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(569)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(569)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(569)
								int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(569)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(569)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(569)
								int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(569)
								int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(569)
								int tmp32 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(569)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(569)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(569)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(569)
								int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(569)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(569)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(569)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(569)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(569)
								bgra = tmp40;
							}
							HX_STACK_LINE(569)
							tmp22 = bgra;
						}
						HX_STACK_LINE(569)
						int bgra = tmp22;		HX_STACK_VAR(bgra,"bgra");
						HX_STACK_LINE(569)
						int tmp23 = bgra;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(569)
						return tmp23;
					}
					;break;
					default: {
						HX_STACK_LINE(570)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(570)
						{
							HX_STACK_LINE(570)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(570)
							{
								HX_STACK_LINE(570)
								int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(570)
								tmp23 = rgba;
							}
							HX_STACK_LINE(570)
							int rgba = tmp23;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(570)
							{
								HX_STACK_LINE(570)
								int tmp24 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(570)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(570)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(570)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(570)
								int tmp28 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(570)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(570)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(570)
								int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(570)
								int tmp32 = (int(tmp27) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(570)
								int tmp33 = (int(color) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(570)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(570)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(570)
								int tmp36 = (int(tmp32) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(570)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(570)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(570)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(570)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(570)
								rgba = tmp40;
							}
							HX_STACK_LINE(570)
							tmp22 = rgba;
						}
						HX_STACK_LINE(570)
						int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(570)
						int tmp23 = rgba;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(570)
						return tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(570)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(570)
				{
					HX_STACK_LINE(570)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(570)
					{
						HX_STACK_LINE(570)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(570)
						tmp22 = rgba;
					}
					HX_STACK_LINE(570)
					int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(570)
					{
						HX_STACK_LINE(570)
						int tmp23 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(570)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(570)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(570)
						int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(570)
						int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(570)
						int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(570)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(570)
						int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(570)
						int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(570)
						int tmp32 = (int(color) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(570)
						int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(570)
						int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(570)
						int tmp35 = (int(tmp31) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(570)
						int tmp36 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(570)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(570)
						int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(570)
						int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(570)
						rgba = tmp39;
					}
					HX_STACK_LINE(570)
					tmp21 = rgba;
				}
				HX_STACK_LINE(570)
				int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(570)
				int tmp22 = rgba;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(570)
				return tmp22;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(576)
			return (int)0;
		}
	}
	HX_STACK_LINE(548)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel,return )

int Image_obj::getPixel32( int x,int y,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixel32",0xaeccdb6c,"lime.graphics.Image.getPixel32","lime/graphics/Image.hx",583,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(585)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(585)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(585)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(585)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(585)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(585)
	if ((tmp3)){
		HX_STACK_LINE(585)
		tmp4 = (x < (int)0);
	}
	else{
		HX_STACK_LINE(585)
		tmp4 = true;
	}
	HX_STACK_LINE(585)
	bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(585)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(585)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(585)
	if ((tmp6)){
		HX_STACK_LINE(585)
		tmp7 = (y < (int)0);
	}
	else{
		HX_STACK_LINE(585)
		tmp7 = true;
	}
	HX_STACK_LINE(585)
	bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(585)
	bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(585)
	bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(585)
	if ((tmp9)){
		HX_STACK_LINE(585)
		int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(585)
		int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(585)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(585)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(585)
		tmp10 = (tmp11 >= tmp14);
	}
	else{
		HX_STACK_LINE(585)
		tmp10 = true;
	}
	HX_STACK_LINE(585)
	bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(585)
	bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(585)
	if ((tmp11)){
		HX_STACK_LINE(585)
		int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(585)
		int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(585)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(585)
		tmp12 = (tmp13 >= tmp15);
	}
	else{
		HX_STACK_LINE(585)
		tmp12 = true;
	}
	HX_STACK_LINE(585)
	if ((tmp12)){
		HX_STACK_LINE(585)
		return (int)0;
	}
	HX_STACK_LINE(587)
	::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(587)
	::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(587)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(591)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(591)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(591)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(591)
			int tmp17 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(591)
			return tmp17;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(599)
			int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(599)
			int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(599)
			Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(599)
			int tmp17 = ::lime::graphics::utils::ImageDataUtil_obj::getPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(599)
			return tmp17;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(603)
			::lime::graphics::ImageBuffer tmp14 = this->buffer;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(603)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(603)
			int tmp16 = this->offsetX;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(603)
			int tmp17 = y;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(603)
			int tmp18 = this->offsetY;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(603)
			Dynamic tmp19 = tmp14->__srcBitmapData->__Field(HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"), hx::paccDynamic )((tmp15 + tmp16),(tmp17 + tmp18));		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(603)
			int color = tmp19;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(605)
			bool tmp20 = (format != null());		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(605)
			if ((tmp20)){
				HX_STACK_LINE(605)
				Dynamic tmp21 = format;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(605)
				switch( (int)(tmp21)){
					case (int)1: {
						HX_STACK_LINE(607)
						int tmp22 = color;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(607)
						return tmp22;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(608)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(608)
						{
							HX_STACK_LINE(608)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(608)
								tmp23 = bgra;
							}
							HX_STACK_LINE(608)
							int bgra = tmp23;		HX_STACK_VAR(bgra,"bgra");
							HX_STACK_LINE(608)
							{
								HX_STACK_LINE(608)
								int tmp24 = (int(color) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(608)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(608)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(608)
								int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(608)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(608)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(608)
								int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(608)
								int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(608)
								int tmp32 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(608)
								int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(608)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(608)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(608)
								int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(608)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(608)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(608)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(608)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(608)
								bgra = tmp40;
							}
							HX_STACK_LINE(608)
							tmp22 = bgra;
						}
						HX_STACK_LINE(608)
						int bgra = tmp22;		HX_STACK_VAR(bgra,"bgra");
						HX_STACK_LINE(608)
						int tmp23 = bgra;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(608)
						return tmp23;
					}
					;break;
					default: {
						HX_STACK_LINE(609)
						int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(609)
						{
							HX_STACK_LINE(609)
							int tmp23;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(609)
							{
								HX_STACK_LINE(609)
								int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(609)
								tmp23 = rgba;
							}
							HX_STACK_LINE(609)
							int rgba = tmp23;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(609)
							{
								HX_STACK_LINE(609)
								int tmp24 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(609)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(609)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(609)
								int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(609)
								int tmp28 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(609)
								int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(609)
								int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(609)
								int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(609)
								int tmp32 = (int(tmp27) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(609)
								int tmp33 = (int(color) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(609)
								int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(609)
								int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(609)
								int tmp36 = (int(tmp32) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(609)
								int tmp37 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(609)
								int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(609)
								int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(609)
								int tmp40 = (int(tmp36) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(609)
								rgba = tmp40;
							}
							HX_STACK_LINE(609)
							tmp22 = rgba;
						}
						HX_STACK_LINE(609)
						int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(609)
						int tmp23 = rgba;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(609)
						return tmp23;
					}
				}
			}
			else{
				HX_STACK_LINE(609)
				int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(609)
				{
					HX_STACK_LINE(609)
					int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(609)
					{
						HX_STACK_LINE(609)
						int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(609)
						tmp22 = rgba;
					}
					HX_STACK_LINE(609)
					int rgba = tmp22;		HX_STACK_VAR(rgba,"rgba");
					HX_STACK_LINE(609)
					{
						HX_STACK_LINE(609)
						int tmp23 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(609)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(609)
						int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(609)
						int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(609)
						int tmp27 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(609)
						int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(609)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(609)
						int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(609)
						int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(609)
						int tmp32 = (int(color) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(609)
						int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(609)
						int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(609)
						int tmp35 = (int(tmp31) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(609)
						int tmp36 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(609)
						int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(609)
						int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(609)
						int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(609)
						rgba = tmp39;
					}
					HX_STACK_LINE(609)
					tmp21 = rgba;
				}
				HX_STACK_LINE(609)
				int rgba = tmp21;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(609)
				int tmp22 = rgba;		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(609)
				return tmp22;
			}
		}
		;break;
		default: {
			HX_STACK_LINE(615)
			return (int)0;
		}
	}
	HX_STACK_LINE(587)
	return (int)0;
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,getPixel32,return )

::haxe::io::Bytes Image_obj::getPixels( ::lime::math::Rectangle rect,Dynamic format){
	HX_STACK_FRAME("lime.graphics.Image","getPixels",0xcd1fea46,"lime.graphics.Image.getPixels","lime/graphics/Image.hx",622,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(624)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(624)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(624)
	if ((tmp1)){
		HX_STACK_LINE(624)
		return null();
	}
	HX_STACK_LINE(626)
	::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(626)
	::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(626)
	switch( (int)(_g->__Index())){
		case (int)0: {
			HX_STACK_LINE(630)
			::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(630)
			Dynamic tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(630)
			::haxe::io::Bytes tmp5 = ::lime::graphics::utils::ImageCanvasUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(630)
			return tmp5;
		}
		;break;
		case (int)1: {
			HX_STACK_LINE(638)
			::lime::math::Rectangle tmp3 = rect;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(638)
			Dynamic tmp4 = format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(638)
			::haxe::io::Bytes tmp5 = ::lime::graphics::utils::ImageDataUtil_obj::getPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(638)
			return tmp5;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(683)
			return null();
		}
		;break;
		default: {
			HX_STACK_LINE(688)
			return null();
		}
	}
	HX_STACK_LINE(626)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,getPixels,return )

Void Image_obj::merge( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.Image","merge",0x75e8a71b,"lime.graphics.Image.merge","lime/graphics/Image.hx",695,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(697)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(697)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(697)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(697)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(697)
		if ((tmp2)){
			HX_STACK_LINE(697)
			tmp3 = (sourceImage == null());
		}
		else{
			HX_STACK_LINE(697)
			tmp3 = true;
		}
		HX_STACK_LINE(697)
		if ((tmp3)){
			HX_STACK_LINE(697)
			return null();
		}
		HX_STACK_LINE(699)
		{
			HX_STACK_LINE(699)
			::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(699)
			::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(699)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(703)
					::lime::graphics::utils::ImageCanvasUtil_obj::convertToCanvas(hx::ObjectPtr<OBJ_>(this));
					HX_STACK_LINE(704)
					::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(704)
					::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(704)
					::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(704)
					int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(704)
					int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(704)
					int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(704)
					int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(704)
					::lime::graphics::utils::ImageCanvasUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(713)
					::lime::graphics::Image tmp5 = sourceImage;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(713)
					::lime::math::Rectangle tmp6 = sourceRect;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(713)
					::lime::math::Vector2 tmp7 = destPoint;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(713)
					int tmp8 = redMultiplier;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(713)
					int tmp9 = greenMultiplier;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(713)
					int tmp10 = blueMultiplier;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(713)
					int tmp11 = alphaMultiplier;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(713)
					::lime::graphics::utils::ImageDataUtil_obj::merge(hx::ObjectPtr<OBJ_>(this),tmp5,tmp6,tmp7,tmp8,tmp9,tmp10,tmp11);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(717)
					int tmp5 = this->offsetX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(717)
					int tmp6 = this->offsetY;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(717)
					sourceRect->offset(tmp5,tmp6);
					HX_STACK_LINE(718)
					::lime::graphics::ImageBuffer tmp7 = this->buffer;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(718)
					tmp7->__srcBitmapData->__Field(HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"), hx::paccDynamic )(sourceImage->buffer->__srcBitmapData,sourceRect->__toFlashRectangle(),destPoint->__toFlashPoint(),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
				}
				;break;
				default: {
					HX_STACK_LINE(722)
					return null();
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(Image_obj,merge,(void))

Void Image_obj::resize( int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.Image","resize",0xb61d2c31,"lime.graphics.Image.resize","lime/graphics/Image.hx",729,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(731)
		{
			HX_STACK_LINE(731)
			::lime::graphics::ImageType tmp = this->type;		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(731)
			::lime::graphics::ImageType _g = tmp;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(731)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(735)
					int tmp1 = newWidth;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(735)
					int tmp2 = newHeight;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(735)
					::lime::graphics::utils::ImageCanvasUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(739)
					int tmp1 = newWidth;		HX_STACK_VAR(tmp1,"tmp1");
					HX_STACK_LINE(739)
					int tmp2 = newHeight;		HX_STACK_VAR(tmp2,"tmp2");
					HX_STACK_LINE(739)
					::lime::graphics::utils::ImageDataUtil_obj::resize(hx::ObjectPtr<OBJ_>(this),tmp1,tmp2);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
		HX_STACK_LINE(755)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(755)
		tmp->width = newWidth;
		HX_STACK_LINE(756)
		::lime::graphics::ImageBuffer tmp1 = this->buffer;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(756)
		tmp1->height = newHeight;
		HX_STACK_LINE(758)
		this->offsetX = (int)0;
		HX_STACK_LINE(759)
		this->offsetY = (int)0;
		HX_STACK_LINE(760)
		this->width = newWidth;
		HX_STACK_LINE(761)
		this->height = newHeight;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,resize,(void))

Void Image_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("lime.graphics.Image","scroll",0xf506aa4a,"lime.graphics.Image.scroll","lime/graphics/Image.hx",766,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(768)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(768)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(768)
		if ((tmp1)){
			HX_STACK_LINE(768)
			return null();
		}
		HX_STACK_LINE(770)
		{
			HX_STACK_LINE(770)
			::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(770)
			::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(770)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(774)
					int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(774)
					int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(774)
					::lime::graphics::utils::ImageCanvasUtil_obj::scroll(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(784)
					::lime::math::Rectangle tmp3 = this->get_rect();		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(784)
					::lime::math::Vector2 tmp4 = ::lime::math::Vector2_obj::__new(x,y);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(784)
					this->copyPixels(hx::ObjectPtr<OBJ_>(this),tmp3,tmp4,null(),null(),null());
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(788)
					::lime::graphics::ImageBuffer tmp3 = this->buffer;		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(788)
					int tmp4 = x;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(788)
					int tmp5 = this->offsetX;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(788)
					int tmp6 = y;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(788)
					int tmp7 = this->offsetX;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(788)
					tmp3->__srcBitmapData->__Field(HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"), hx::paccDynamic )((tmp4 + tmp5),(tmp6 + tmp7));
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,scroll,(void))

Void Image_obj::setPixel( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel",0x8840cb01,"lime.graphics.Image.setPixel","lime/graphics/Image.hx",797,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(799)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(799)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(799)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(799)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(799)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(799)
		if ((tmp3)){
			HX_STACK_LINE(799)
			tmp4 = (x < (int)0);
		}
		else{
			HX_STACK_LINE(799)
			tmp4 = true;
		}
		HX_STACK_LINE(799)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(799)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(799)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(799)
		if ((tmp6)){
			HX_STACK_LINE(799)
			tmp7 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(799)
			tmp7 = true;
		}
		HX_STACK_LINE(799)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(799)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(799)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(799)
		if ((tmp9)){
			HX_STACK_LINE(799)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(799)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(799)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(799)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(799)
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			HX_STACK_LINE(799)
			tmp10 = true;
		}
		HX_STACK_LINE(799)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(799)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(799)
		if ((tmp11)){
			HX_STACK_LINE(799)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(799)
			int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(799)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(799)
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			HX_STACK_LINE(799)
			tmp12 = true;
		}
		HX_STACK_LINE(799)
		if ((tmp12)){
			HX_STACK_LINE(799)
			return null();
		}
		HX_STACK_LINE(801)
		{
			HX_STACK_LINE(801)
			::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(801)
			::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(801)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(805)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(805)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(805)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(805)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(805)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(813)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(813)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(813)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(813)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(813)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(817)
					bool tmp14 = (format != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(817)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(817)
					if ((tmp14)){
						HX_STACK_LINE(817)
						Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(817)
						switch( (int)(tmp16)){
							case (int)1: {
								HX_STACK_LINE(819)
								tmp15 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(820)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(820)
										tmp17 = argb;
									}
									HX_STACK_LINE(820)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(820)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(820)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(820)
										int tmp21 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(820)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(820)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(820)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(820)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(820)
										int tmp26 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(820)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(820)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(820)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(820)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(820)
										int tmp31 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(820)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(820)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(820)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(820)
										argb = tmp34;
									}
									HX_STACK_LINE(820)
									tmp15 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(821)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(821)
								{
									HX_STACK_LINE(821)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(821)
									{
										HX_STACK_LINE(821)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(821)
										tmp17 = argb;
									}
									HX_STACK_LINE(821)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(821)
									{
										HX_STACK_LINE(821)
										int tmp18 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(821)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(821)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(821)
										int tmp21 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(821)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(821)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(821)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(821)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(821)
										int tmp26 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(821)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(821)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(821)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(821)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(821)
										int tmp31 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(821)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(821)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(821)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(821)
										argb = tmp34;
									}
									HX_STACK_LINE(821)
									tmp15 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(821)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(821)
						{
							HX_STACK_LINE(821)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(821)
							{
								HX_STACK_LINE(821)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(821)
								tmp16 = argb;
							}
							HX_STACK_LINE(821)
							int argb = tmp16;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(821)
							{
								HX_STACK_LINE(821)
								int tmp17 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(821)
								int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(821)
								int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(821)
								int tmp20 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(821)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(821)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(821)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(821)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(821)
								int tmp25 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(821)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(821)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(821)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(821)
								int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(821)
								int tmp30 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(821)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(821)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(821)
								int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(821)
								argb = tmp33;
							}
							HX_STACK_LINE(821)
							tmp15 = argb;
						}
					}
					HX_STACK_LINE(817)
					int argb = tmp15;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(825)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(825)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(825)
					int tmp18 = this->offsetX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(825)
					int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(825)
					int tmp20 = this->offsetX;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(825)
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel,(void))

int Image_obj::threshold( ::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("lime.graphics.Image","threshold",0xf8c3358e,"lime.graphics.Image.threshold","lime/graphics/Image.hx",833,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(835)
		::lime::graphics::Image tmp = sourceImage;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(835)
		::lime::math::Rectangle tmp1 = sourceRect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(835)
		::lime::math::Vector2 tmp2 = destPoint;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(835)
		::String tmp3 = operation;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(835)
		int tmp4 = threshold;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(835)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(835)
		int tmp6 = mask;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(835)
		bool tmp7 = copySource;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(835)
		int tmp8 = ::lime::graphics::utils::ImageDataUtil_obj::threshold(hx::ObjectPtr<OBJ_>(this),tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(835)
		return tmp8;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(Image_obj,threshold,return )

Void Image_obj::setPixel32( int x,int y,int color,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixel32",0xb24a79e0,"lime.graphics.Image.setPixel32","lime/graphics/Image.hx",840,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(842)
		::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(842)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(842)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(842)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(842)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(842)
		if ((tmp3)){
			HX_STACK_LINE(842)
			tmp4 = (x < (int)0);
		}
		else{
			HX_STACK_LINE(842)
			tmp4 = true;
		}
		HX_STACK_LINE(842)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(842)
		bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(842)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(842)
		if ((tmp6)){
			HX_STACK_LINE(842)
			tmp7 = (y < (int)0);
		}
		else{
			HX_STACK_LINE(842)
			tmp7 = true;
		}
		HX_STACK_LINE(842)
		bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(842)
		bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(842)
		bool tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(842)
		if ((tmp9)){
			HX_STACK_LINE(842)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(842)
			int tmp12 = this->width;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(842)
			int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(842)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(842)
			tmp10 = (tmp11 >= tmp14);
		}
		else{
			HX_STACK_LINE(842)
			tmp10 = true;
		}
		HX_STACK_LINE(842)
		bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(842)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(842)
		if ((tmp11)){
			HX_STACK_LINE(842)
			int tmp13 = y;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(842)
			int tmp14 = this->height;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(842)
			int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(842)
			tmp12 = (tmp13 >= tmp15);
		}
		else{
			HX_STACK_LINE(842)
			tmp12 = true;
		}
		HX_STACK_LINE(842)
		if ((tmp12)){
			HX_STACK_LINE(842)
			return null();
		}
		HX_STACK_LINE(844)
		{
			HX_STACK_LINE(844)
			::lime::graphics::ImageType tmp13 = this->type;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(844)
			::lime::graphics::ImageType _g = tmp13;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(844)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(848)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(848)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(848)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(848)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(848)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(856)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(856)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(856)
					int tmp16 = color;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(856)
					Dynamic tmp17 = format;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(856)
					::lime::graphics::utils::ImageDataUtil_obj::setPixel32(hx::ObjectPtr<OBJ_>(this),tmp14,tmp15,tmp16,tmp17);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(860)
					bool tmp14 = (format != null());		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(860)
					int tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(860)
					if ((tmp14)){
						HX_STACK_LINE(860)
						Dynamic tmp16 = format;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(860)
						switch( (int)(tmp16)){
							case (int)1: {
								HX_STACK_LINE(862)
								tmp15 = color;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(863)
								int bgra = color;		HX_STACK_VAR(bgra,"bgra");
								HX_STACK_LINE(863)
								{
									HX_STACK_LINE(863)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(863)
									{
										HX_STACK_LINE(863)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(863)
										tmp17 = argb;
									}
									HX_STACK_LINE(863)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(863)
									{
										HX_STACK_LINE(863)
										int tmp18 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(863)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(863)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(863)
										int tmp21 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(863)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(863)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(863)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(863)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(863)
										int tmp26 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(863)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(863)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(863)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(863)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(863)
										int tmp31 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(863)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(863)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(863)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(863)
										argb = tmp34;
									}
									HX_STACK_LINE(863)
									tmp15 = argb;
								}
							}
							;break;
							default: {
								HX_STACK_LINE(864)
								int rgba = color;		HX_STACK_VAR(rgba,"rgba");
								HX_STACK_LINE(864)
								{
									HX_STACK_LINE(864)
									int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(864)
									{
										HX_STACK_LINE(864)
										int argb = (int)0;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(864)
										tmp17 = argb;
									}
									HX_STACK_LINE(864)
									int argb = tmp17;		HX_STACK_VAR(argb,"argb");
									HX_STACK_LINE(864)
									{
										HX_STACK_LINE(864)
										int tmp18 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(864)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(864)
										int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(864)
										int tmp21 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(864)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(864)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(864)
										int tmp24 = (int(tmp23) << int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(864)
										int tmp25 = (int(tmp20) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(864)
										int tmp26 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(864)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(864)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(864)
										int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(864)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(864)
										int tmp31 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(864)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(864)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(864)
										int tmp34 = (int(tmp30) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(864)
										argb = tmp34;
									}
									HX_STACK_LINE(864)
									tmp15 = argb;
								}
							}
						}
					}
					else{
						HX_STACK_LINE(864)
						int rgba = color;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(864)
						{
							HX_STACK_LINE(864)
							int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(864)
							{
								HX_STACK_LINE(864)
								int argb = (int)0;		HX_STACK_VAR(argb,"argb");
								HX_STACK_LINE(864)
								tmp16 = argb;
							}
							HX_STACK_LINE(864)
							int argb = tmp16;		HX_STACK_VAR(argb,"argb");
							HX_STACK_LINE(864)
							{
								HX_STACK_LINE(864)
								int tmp17 = (int(rgba) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(864)
								int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(864)
								int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(864)
								int tmp20 = (int(rgba) >> int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(864)
								int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(864)
								int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(864)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(864)
								int tmp24 = (int(tmp19) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(864)
								int tmp25 = (int(rgba) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(864)
								int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(864)
								int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(864)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(864)
								int tmp29 = (int(tmp24) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(864)
								int tmp30 = (int(rgba) >> int((int)8));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(864)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(864)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(864)
								int tmp33 = (int(tmp29) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(864)
								argb = tmp33;
							}
							HX_STACK_LINE(864)
							tmp15 = argb;
						}
					}
					HX_STACK_LINE(860)
					int argb = tmp15;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(868)
					::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(868)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(868)
					int tmp18 = this->offsetX;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(868)
					int tmp19 = y;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(868)
					int tmp20 = this->offsetY;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(868)
					tmp16->__srcBitmapData->__Field(HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"), hx::paccDynamic )((tmp17 + tmp18),(tmp19 + tmp20),argb);
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(Image_obj,setPixel32,(void))

Void Image_obj::setPixels( ::lime::math::Rectangle rect,::haxe::io::Bytes bytes,Dynamic format){
{
		HX_STACK_FRAME("lime.graphics.Image","setPixels",0xb070d652,"lime.graphics.Image.setPixels","lime/graphics/Image.hx",877,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(879)
		::lime::math::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(879)
		::lime::math::Rectangle tmp1 = this->__clipRect(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(879)
		rect = tmp1;
		HX_STACK_LINE(880)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(880)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(880)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(880)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(880)
		if ((tmp4)){
			HX_STACK_LINE(880)
			tmp5 = (rect == null());
		}
		else{
			HX_STACK_LINE(880)
			tmp5 = true;
		}
		HX_STACK_LINE(880)
		if ((tmp5)){
			HX_STACK_LINE(880)
			return null();
		}
		HX_STACK_LINE(882)
		{
			HX_STACK_LINE(882)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(882)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(882)
			switch( (int)(_g->__Index())){
				case (int)0: {
					HX_STACK_LINE(886)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(886)
					::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(886)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(886)
					::lime::graphics::utils::ImageCanvasUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(894)
					::lime::math::Rectangle tmp7 = rect;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(894)
					::haxe::io::Bytes tmp8 = bytes;		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(894)
					Dynamic tmp9 = format;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(894)
					::lime::graphics::utils::ImageDataUtil_obj::setPixels(hx::ObjectPtr<OBJ_>(this),tmp7,tmp8,tmp9);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,setPixels,(void))

::lime::math::Rectangle Image_obj::__clipRect( ::lime::math::Rectangle r){
	HX_STACK_FRAME("lime.graphics.Image","__clipRect",0xd30737f1,"lime.graphics.Image.__clipRect","lime/graphics/Image.hx",988,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(r,"r")
	HX_STACK_LINE(990)
	bool tmp = (r == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(990)
	if ((tmp)){
		HX_STACK_LINE(990)
		return null();
	}
	HX_STACK_LINE(992)
	bool tmp1 = (r->x < (int)0);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(992)
	if ((tmp1)){
		HX_STACK_LINE(994)
		Float tmp2 = r->x;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(994)
		Float tmp3 = -(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(994)
		hx::SubEq(r->width,tmp3);
		HX_STACK_LINE(995)
		r->x = (int)0;
		HX_STACK_LINE(997)
		Float tmp4 = (r->x + r->width);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(997)
		bool tmp5 = (tmp4 <= (int)0);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(997)
		if ((tmp5)){
			HX_STACK_LINE(997)
			return null();
		}
	}
	HX_STACK_LINE(1001)
	bool tmp2 = (r->y < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1001)
	if ((tmp2)){
		HX_STACK_LINE(1003)
		Float tmp3 = r->y;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1003)
		Float tmp4 = -(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1003)
		hx::SubEq(r->height,tmp4);
		HX_STACK_LINE(1004)
		r->y = (int)0;
		HX_STACK_LINE(1006)
		Float tmp5 = (r->y + r->height);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1006)
		bool tmp6 = (tmp5 <= (int)0);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1006)
		if ((tmp6)){
			HX_STACK_LINE(1006)
			return null();
		}
	}
	HX_STACK_LINE(1010)
	Float tmp3 = (r->x + r->width);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1010)
	int tmp4 = this->width;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1010)
	bool tmp5 = (tmp3 >= tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1010)
	if ((tmp5)){
		HX_STACK_LINE(1012)
		Float tmp6 = (r->x + r->width);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1012)
		int tmp7 = this->width;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1012)
		Float tmp8 = (tmp6 - tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1012)
		hx::SubEq(r->width,tmp8);
		HX_STACK_LINE(1014)
		bool tmp9 = (r->width <= (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1014)
		if ((tmp9)){
			HX_STACK_LINE(1014)
			return null();
		}
	}
	HX_STACK_LINE(1018)
	Float tmp6 = (r->y + r->height);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1018)
	int tmp7 = this->height;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1018)
	bool tmp8 = (tmp6 >= tmp7);		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1018)
	if ((tmp8)){
		HX_STACK_LINE(1020)
		Float tmp9 = (r->y + r->height);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1020)
		int tmp10 = this->height;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1020)
		Float tmp11 = (tmp9 - tmp10);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1020)
		hx::SubEq(r->height,tmp11);
		HX_STACK_LINE(1022)
		bool tmp12 = (r->height <= (int)0);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1022)
		if ((tmp12)){
			HX_STACK_LINE(1022)
			return null();
		}
	}
	HX_STACK_LINE(1026)
	::lime::math::Rectangle tmp9 = r;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1026)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__clipRect,return )

Void Image_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBase64",0x71681bb6,"lime.graphics.Image.__fromBase64","lime/graphics/Image.hx",1031,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromBase64,(void))

Void Image_obj::__fromBytes( ::haxe::io::Bytes bytes,Dynamic onload){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromBytes",0x40972c24,"lime.graphics.Image.__fromBytes","lime/graphics/Image.hx",1062,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1094)
		Dynamic data = ((Dynamic)(::lime::graphics::Image_obj::cffi_lime_image_load.call(hx::DynamicPtr(bytes))));		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1096)
		bool tmp = (data != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1096)
		if ((tmp)){
			HX_STACK_LINE(1098)
			::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1098)
			{
				HX_STACK_LINE(1098)
				::haxe::io::Bytes tmp2 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1098)
				::haxe::io::Bytes buffer = tmp2;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(1098)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(1098)
				bool tmp3 = false;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1098)
				if ((tmp3)){
					HX_STACK_LINE(1098)
					::lime::utils::ArrayBufferView tmp4 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1098)
					this1 = tmp4;
				}
				else{
					HX_STACK_LINE(1098)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1098)
					if ((tmp4)){
						HX_STACK_LINE(1098)
						::lime::utils::ArrayBufferView tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1098)
						{
							HX_STACK_LINE(1098)
							::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1098)
							::lime::utils::ArrayBufferView _this = tmp6;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(1098)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(1098)
							int tmp7 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1098)
							_this->length = tmp7;
							HX_STACK_LINE(1098)
							int tmp8 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1098)
							_this->byteLength = tmp8;
							HX_STACK_LINE(1098)
							::haxe::io::Bytes tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1098)
							{
								HX_STACK_LINE(1098)
								::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
								HX_STACK_LINE(1098)
								int tmp10 = _this->byteLength;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1098)
								::haxe::io::Bytes tmp11 = ::haxe::io::Bytes_obj::alloc(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1098)
								this2 = tmp11;
								HX_STACK_LINE(1098)
								tmp9 = this2;
							}
							HX_STACK_LINE(1098)
							_this->buffer = tmp9;
							HX_STACK_LINE(1098)
							_this->copyFromArray(((Array< Float >)(null())),null());
							HX_STACK_LINE(1098)
							tmp5 = _this;
						}
						HX_STACK_LINE(1098)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(1098)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1098)
						if ((tmp5)){
							HX_STACK_LINE(1098)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1098)
							{
								HX_STACK_LINE(1098)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1098)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1098)
								::haxe::io::Bytes tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1098)
								::haxe::io::Bytes srcData = tmp8;		HX_STACK_VAR(srcData,"srcData");
								HX_STACK_LINE(1098)
								int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1098)
								int srcLength = tmp9;		HX_STACK_VAR(srcLength,"srcLength");
								HX_STACK_LINE(1098)
								int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1098)
								int srcByteOffset = tmp10;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
								HX_STACK_LINE(1098)
								int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(1098)
								int srcElementSize = tmp11;		HX_STACK_VAR(srcElementSize,"srcElementSize");
								HX_STACK_LINE(1098)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(1098)
								int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1098)
								int tmp13 = _this->type;		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1098)
								bool tmp14 = (tmp12 == tmp13);		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1098)
								if ((tmp14)){
									HX_STACK_LINE(1098)
									int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
									HX_STACK_LINE(1098)
									int tmp15 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1098)
									int cloneLength = tmp15;		HX_STACK_VAR(cloneLength,"cloneLength");
									HX_STACK_LINE(1098)
									::haxe::io::Bytes tmp16;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1098)
									{
										HX_STACK_LINE(1098)
										::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
										HX_STACK_LINE(1098)
										int tmp17 = cloneLength;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1098)
										::haxe::io::Bytes tmp18 = ::haxe::io::Bytes_obj::alloc(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1098)
										this2 = tmp18;
										HX_STACK_LINE(1098)
										tmp16 = this2;
									}
									HX_STACK_LINE(1098)
									_this->buffer = tmp16;
									HX_STACK_LINE(1098)
									::haxe::io::Bytes tmp17 = srcData;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1098)
									int tmp18 = srcByteOffset;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1098)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1098)
									_this->buffer->blit((int)0,tmp17,tmp18,tmp19);
								}
								else{
									HX_STACK_LINE(1098)
									HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
								}
								HX_STACK_LINE(1098)
								int tmp15 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1098)
								_this->byteLength = tmp15;
								HX_STACK_LINE(1098)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1098)
								_this->length = srcLength;
								HX_STACK_LINE(1098)
								tmp6 = _this;
							}
							HX_STACK_LINE(1098)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(1098)
							bool tmp6 = (buffer != null());		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1098)
							if ((tmp6)){
								HX_STACK_LINE(1098)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1098)
								{
									HX_STACK_LINE(1098)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1098)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1098)
									bool tmp9 = false;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1098)
									if ((tmp9)){
										HX_STACK_LINE(1098)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(1098)
									int tmp10 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1098)
									bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1098)
									if ((tmp11)){
										HX_STACK_LINE(1098)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(1098)
									int bufferByteLength = buffer->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
									HX_STACK_LINE(1098)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(1098)
									int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
									HX_STACK_LINE(1098)
									bool tmp12 = true;		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1098)
									if ((tmp12)){
										HX_STACK_LINE(1098)
										int tmp13 = bufferByteLength;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1098)
										newByteLength = tmp13;
										HX_STACK_LINE(1098)
										int tmp14 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1098)
										bool tmp15 = (tmp14 != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1098)
										if ((tmp15)){
											HX_STACK_LINE(1098)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1098)
										bool tmp16 = (newByteLength < (int)0);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1098)
										if ((tmp16)){
											HX_STACK_LINE(1098)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									else{
										HX_STACK_LINE(1098)
										int tmp13 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1098)
										newByteLength = tmp13;
										HX_STACK_LINE(1098)
										int tmp14 = newByteLength;		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1098)
										int newRange = tmp14;		HX_STACK_VAR(newRange,"newRange");
										HX_STACK_LINE(1098)
										bool tmp15 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1098)
										if ((tmp15)){
											HX_STACK_LINE(1098)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
									}
									HX_STACK_LINE(1098)
									_this->buffer = buffer;
									HX_STACK_LINE(1098)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1098)
									_this->byteLength = newByteLength;
									HX_STACK_LINE(1098)
									Float tmp13 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1098)
									int tmp14 = ::Std_obj::_int(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1098)
									_this->length = tmp14;
									HX_STACK_LINE(1098)
									tmp7 = _this;
								}
								HX_STACK_LINE(1098)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(1098)
								HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
							}
						}
					}
				}
				HX_STACK_LINE(1098)
				tmp1 = this1;
			}
			HX_STACK_LINE(1098)
			::lime::graphics::ImageBuffer tmp2 = ::lime::graphics::ImageBuffer_obj::__new(tmp1,data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),data->__Field(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1098)
			this->__fromImageBuffer(tmp2);
			HX_STACK_LINE(1100)
			bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1100)
			if ((tmp3)){
				HX_STACK_LINE(1102)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(Image_obj,__fromBytes,(void))

Void Image_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromFile",0x1c2444e3,"lime.graphics.Image.__fromFile","lime/graphics/Image.hx",1117,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1158)
		::lime::graphics::ImageBuffer buffer = null();		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(1212)
		bool tmp = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1212)
		if ((tmp)){
			HX_STACK_LINE(1214)
			Dynamic data = ((Dynamic)(::lime::graphics::Image_obj::cffi_lime_image_load.call(hx::DynamicPtr(path))));		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1216)
			bool tmp1 = (data != null());		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1216)
			if ((tmp1)){
				HX_STACK_LINE(1218)
				::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1218)
				{
					HX_STACK_LINE(1218)
					::haxe::io::Bytes tmp3 = ::haxe::io::Bytes_obj::__new(data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"), hx::paccDynamic ),data->__Field(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"), hx::paccDynamic )->__Field(HX_HCSTRING("b","\x62","\x00","\x00","\x00"), hx::paccDynamic ));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(1218)
					::haxe::io::Bytes buffer1 = tmp3;		HX_STACK_VAR(buffer1,"buffer1");
					HX_STACK_LINE(1218)
					::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
					HX_STACK_LINE(1218)
					bool tmp4 = false;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1218)
					if ((tmp4)){
						HX_STACK_LINE(1218)
						::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(null(),(int)4);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1218)
						this1 = tmp5;
					}
					else{
						HX_STACK_LINE(1218)
						bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1218)
						if ((tmp5)){
							HX_STACK_LINE(1218)
							::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1218)
							{
								HX_STACK_LINE(1218)
								::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1218)
								::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(1218)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(1218)
								int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
								HX_STACK_LINE(1218)
								_this->length = tmp8;
								HX_STACK_LINE(1218)
								int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(1218)
								_this->byteLength = tmp9;
								HX_STACK_LINE(1218)
								::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1218)
								{
									HX_STACK_LINE(1218)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(1218)
									int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1218)
									::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1218)
									this2 = tmp12;
									HX_STACK_LINE(1218)
									tmp10 = this2;
								}
								HX_STACK_LINE(1218)
								_this->buffer = tmp10;
								HX_STACK_LINE(1218)
								_this->copyFromArray(((Array< Float >)(null())),null());
								HX_STACK_LINE(1218)
								tmp6 = _this;
							}
							HX_STACK_LINE(1218)
							this1 = tmp6;
						}
						else{
							HX_STACK_LINE(1218)
							bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(1218)
							if ((tmp6)){
								HX_STACK_LINE(1218)
								::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1218)
								{
									HX_STACK_LINE(1218)
									::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1218)
									::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
									HX_STACK_LINE(1218)
									::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(1218)
									::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
									HX_STACK_LINE(1218)
									int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
									HX_STACK_LINE(1218)
									int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
									HX_STACK_LINE(1218)
									int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
									HX_STACK_LINE(1218)
									int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
									HX_STACK_LINE(1218)
									int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1218)
									int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
									HX_STACK_LINE(1218)
									int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
									HX_STACK_LINE(1218)
									int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1218)
									int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(1218)
									bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(1218)
									if ((tmp15)){
										HX_STACK_LINE(1218)
										int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
										HX_STACK_LINE(1218)
										int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
										HX_STACK_LINE(1218)
										int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
										HX_STACK_LINE(1218)
										::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
										HX_STACK_LINE(1218)
										{
											HX_STACK_LINE(1218)
											::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
											HX_STACK_LINE(1218)
											int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
											HX_STACK_LINE(1218)
											::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
											HX_STACK_LINE(1218)
											this2 = tmp19;
											HX_STACK_LINE(1218)
											tmp17 = this2;
										}
										HX_STACK_LINE(1218)
										_this->buffer = tmp17;
										HX_STACK_LINE(1218)
										::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1218)
										int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1218)
										int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1218)
										_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
									}
									else{
										HX_STACK_LINE(1218)
										HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
									}
									HX_STACK_LINE(1218)
									int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(1218)
									_this->byteLength = tmp16;
									HX_STACK_LINE(1218)
									_this->byteOffset = (int)0;
									HX_STACK_LINE(1218)
									_this->length = srcLength;
									HX_STACK_LINE(1218)
									tmp7 = _this;
								}
								HX_STACK_LINE(1218)
								this1 = tmp7;
							}
							else{
								HX_STACK_LINE(1218)
								bool tmp7 = (buffer1 != null());		HX_STACK_VAR(tmp7,"tmp7");
								HX_STACK_LINE(1218)
								if ((tmp7)){
									HX_STACK_LINE(1218)
									::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(1218)
									{
										HX_STACK_LINE(1218)
										::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
										HX_STACK_LINE(1218)
										::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
										HX_STACK_LINE(1218)
										bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
										HX_STACK_LINE(1218)
										if ((tmp10)){
											HX_STACK_LINE(1218)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1218)
										int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
										HX_STACK_LINE(1218)
										bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
										HX_STACK_LINE(1218)
										if ((tmp12)){
											HX_STACK_LINE(1218)
											HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
										}
										HX_STACK_LINE(1218)
										int bufferByteLength = buffer1->length;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
										HX_STACK_LINE(1218)
										int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
										HX_STACK_LINE(1218)
										int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
										HX_STACK_LINE(1218)
										bool tmp13 = true;		HX_STACK_VAR(tmp13,"tmp13");
										HX_STACK_LINE(1218)
										if ((tmp13)){
											HX_STACK_LINE(1218)
											int tmp14 = bufferByteLength;		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1218)
											newByteLength = tmp14;
											HX_STACK_LINE(1218)
											int tmp15 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1218)
											bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1218)
											if ((tmp16)){
												HX_STACK_LINE(1218)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
											HX_STACK_LINE(1218)
											bool tmp17 = (newByteLength < (int)0);		HX_STACK_VAR(tmp17,"tmp17");
											HX_STACK_LINE(1218)
											if ((tmp17)){
												HX_STACK_LINE(1218)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										else{
											HX_STACK_LINE(1218)
											int tmp14 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp14,"tmp14");
											HX_STACK_LINE(1218)
											newByteLength = tmp14;
											HX_STACK_LINE(1218)
											int tmp15 = newByteLength;		HX_STACK_VAR(tmp15,"tmp15");
											HX_STACK_LINE(1218)
											int newRange = tmp15;		HX_STACK_VAR(newRange,"newRange");
											HX_STACK_LINE(1218)
											bool tmp16 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp16,"tmp16");
											HX_STACK_LINE(1218)
											if ((tmp16)){
												HX_STACK_LINE(1218)
												HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
											}
										}
										HX_STACK_LINE(1218)
										_this->buffer = buffer1;
										HX_STACK_LINE(1218)
										_this->byteOffset = (int)0;
										HX_STACK_LINE(1218)
										_this->byteLength = newByteLength;
										HX_STACK_LINE(1218)
										Float tmp14 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp14,"tmp14");
										HX_STACK_LINE(1218)
										int tmp15 = ::Std_obj::_int(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
										HX_STACK_LINE(1218)
										_this->length = tmp15;
										HX_STACK_LINE(1218)
										tmp8 = _this;
									}
									HX_STACK_LINE(1218)
									this1 = tmp8;
								}
								else{
									HX_STACK_LINE(1218)
									HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
								}
							}
						}
					}
					HX_STACK_LINE(1218)
					tmp2 = this1;
				}
				HX_STACK_LINE(1218)
				::lime::utils::ArrayBufferView u8a = tmp2;		HX_STACK_VAR(u8a,"u8a");
				HX_STACK_LINE(1219)
				::lime::graphics::ImageBuffer tmp3 = ::lime::graphics::ImageBuffer_obj::__new(u8a,data->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),data->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),data->__Field(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"), hx::paccDynamic ),null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1219)
				buffer = tmp3;
			}
		}
		HX_STACK_LINE(1266)
		bool tmp1 = (buffer != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1266)
		if ((tmp1)){
			HX_STACK_LINE(1268)
			::lime::graphics::ImageBuffer tmp2 = buffer;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1268)
			this->__fromImageBuffer(tmp2);
			HX_STACK_LINE(1270)
			bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1270)
			if ((tmp3)){
				HX_STACK_LINE(1272)
				onload(hx::ObjectPtr<OBJ_>(this)).Cast< Void >();
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(Image_obj,__fromFile,(void))

Void Image_obj::__fromImageBuffer( ::lime::graphics::ImageBuffer buffer){
{
		HX_STACK_FRAME("lime.graphics.Image","__fromImageBuffer",0xe152fb34,"lime.graphics.Image.__fromImageBuffer","lime/graphics/Image.hx",1287,0xc7b862ad)
		HX_STACK_THIS(this)
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_LINE(1289)
		this->buffer = buffer;
		HX_STACK_LINE(1291)
		bool tmp = (buffer != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1291)
		if ((tmp)){
			HX_STACK_LINE(1293)
			int tmp1 = this->width;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1293)
			bool tmp2 = (tmp1 == (int)-1);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1293)
			if ((tmp2)){
				HX_STACK_LINE(1295)
				this->width = buffer->width;
			}
			HX_STACK_LINE(1299)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1299)
			bool tmp4 = (tmp3 == (int)-1);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1299)
			if ((tmp4)){
				HX_STACK_LINE(1301)
				this->height = buffer->height;
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__fromImageBuffer,(void))

::lime::utils::ArrayBufferView Image_obj::get_data( ){
	HX_STACK_FRAME("lime.graphics.Image","get_data",0x7986ad30,"lime.graphics.Image.get_data","lime/graphics/Image.hx",1344,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1346)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1346)
	::lime::utils::ArrayBufferView tmp1 = tmp->data;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1346)
	bool tmp2 = (tmp1 == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1346)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1346)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1346)
	if ((tmp3)){
		HX_STACK_LINE(1346)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1346)
		::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1346)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1346)
		int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1346)
		tmp4 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(1346)
		tmp4 = false;
	}
	HX_STACK_LINE(1346)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1346)
	if ((tmp4)){
		HX_STACK_LINE(1346)
		::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1346)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1346)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1346)
		tmp5 = (tmp8 > (int)0);
	}
	else{
		HX_STACK_LINE(1346)
		tmp5 = false;
	}
	HX_STACK_LINE(1346)
	if ((tmp5)){
	}
	HX_STACK_LINE(1363)
	::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1363)
	::lime::utils::ArrayBufferView tmp7 = tmp6->data;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1363)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_data,return )

::lime::utils::ArrayBufferView Image_obj::set_data( ::lime::utils::ArrayBufferView value){
	HX_STACK_FRAME("lime.graphics.Image","set_data",0x27e406a4,"lime.graphics.Image.set_data","lime/graphics/Image.hx",1368,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1370)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1370)
	::lime::utils::ArrayBufferView tmp1 = tmp->data = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1370)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_data,return )

int Image_obj::get_format( ){
	HX_STACK_FRAME("lime.graphics.Image","get_format",0xc57a33bd,"lime.graphics.Image.get_format","lime/graphics/Image.hx",1375,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1377)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1377)
	int tmp1 = tmp->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1377)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_format,return )

int Image_obj::set_format( int value){
	HX_STACK_FRAME("lime.graphics.Image","set_format",0xc8f7d231,"lime.graphics.Image.set_format","lime/graphics/Image.hx",1382,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1384)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1384)
	int tmp1 = tmp->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1384)
	int tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1384)
	bool tmp3 = (tmp1 != tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1384)
	if ((tmp3)){
		HX_STACK_LINE(1386)
		::lime::graphics::ImageType tmp4 = this->type;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1386)
		::lime::graphics::ImageType _g = tmp4;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1386)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1390)
				int tmp5 = value;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1390)
				::lime::graphics::utils::ImageDataUtil_obj::setFormat(hx::ObjectPtr<OBJ_>(this),tmp5);
			}
			;break;
			default: {
			}
		}
	}
	HX_STACK_LINE(1398)
	::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1398)
	int tmp5 = tmp4->format = value;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1398)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_format,return )

bool Image_obj::get_powerOfTwo( ){
	HX_STACK_FRAME("lime.graphics.Image","get_powerOfTwo",0x62ee1df6,"lime.graphics.Image.get_powerOfTwo","lime/graphics/Image.hx",1403,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1405)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1405)
	int tmp1 = tmp->width;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1405)
	bool tmp2 = (tmp1 != (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1405)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1405)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1405)
	if ((tmp3)){
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp5 = this->buffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1405)
		int tmp8 = tmp7->width;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp9 = this->buffer;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1405)
		int tmp12 = tmp11->width;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1405)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1405)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1405)
		int tmp15 = ~(int)(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1405)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1405)
		int tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1405)
		int tmp18 = (tmp17 + (int)1);		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1405)
		int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1405)
		int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1405)
		int tmp21 = (int(tmp8) & int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1405)
		int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1405)
		int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp24 = this->buffer;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1405)
		int tmp27 = tmp26->width;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1405)
		tmp4 = (tmp23 == tmp27);
	}
	else{
		HX_STACK_LINE(1405)
		tmp4 = false;
	}
	HX_STACK_LINE(1405)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1405)
	if ((tmp4)){
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1405)
		::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1405)
		int tmp8 = tmp7->height;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1405)
		bool tmp9 = (tmp8 != (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1405)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1405)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1405)
		if ((tmp11)){
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp12 = this->buffer;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1405)
			int tmp15 = tmp14->height;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp16 = this->buffer;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp17 = tmp16;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1405)
			int tmp19 = tmp18->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1405)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1405)
			int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1405)
			int tmp22 = ~(int)(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1405)
			int tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1405)
			int tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1405)
			int tmp25 = (tmp24 + (int)1);		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1405)
			int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1405)
			int tmp27 = tmp26;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1405)
			int tmp28 = (int(tmp15) & int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1405)
			int tmp29 = tmp28;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1405)
			int tmp30 = tmp29;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp31 = this->buffer;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1405)
			::lime::graphics::ImageBuffer tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1405)
			int tmp34 = tmp33->height;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1405)
			tmp5 = (tmp30 == tmp34);
		}
		else{
			HX_STACK_LINE(1405)
			tmp5 = false;
		}
	}
	else{
		HX_STACK_LINE(1405)
		tmp5 = false;
	}
	HX_STACK_LINE(1405)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_powerOfTwo,return )

bool Image_obj::set_powerOfTwo( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_powerOfTwo",0x830e066a,"lime.graphics.Image.set_powerOfTwo","lime/graphics/Image.hx",1410,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1412)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1412)
	bool tmp1 = this->get_powerOfTwo();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1412)
	bool tmp2 = (tmp != tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1412)
	if ((tmp2)){
		HX_STACK_LINE(1414)
		int newWidth = (int)1;		HX_STACK_VAR(newWidth,"newWidth");
		HX_STACK_LINE(1415)
		int newHeight = (int)1;		HX_STACK_VAR(newHeight,"newHeight");
		HX_STACK_LINE(1417)
		while((true)){
			HX_STACK_LINE(1417)
			int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1417)
			::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1417)
			int tmp5 = tmp4->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1417)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1417)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1417)
			if ((tmp7)){
				HX_STACK_LINE(1417)
				break;
			}
			HX_STACK_LINE(1419)
			hx::ShlEq(newWidth,(int)1);
		}
		HX_STACK_LINE(1423)
		while((true)){
			HX_STACK_LINE(1423)
			int tmp3 = newHeight;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1423)
			::lime::graphics::ImageBuffer tmp4 = this->buffer;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1423)
			int tmp5 = tmp4->height;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1423)
			bool tmp6 = (tmp3 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1423)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1423)
			if ((tmp7)){
				HX_STACK_LINE(1423)
				break;
			}
			HX_STACK_LINE(1425)
			hx::ShlEq(newHeight,(int)1);
		}
		HX_STACK_LINE(1429)
		{
			HX_STACK_LINE(1429)
			::lime::graphics::ImageType tmp3 = this->type;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1429)
			::lime::graphics::ImageType _g = tmp3;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1429)
			switch( (int)(_g->__Index())){
				case (int)0: {
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1437)
					int tmp4 = newWidth;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1437)
					int tmp5 = newHeight;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1437)
					::lime::graphics::utils::ImageDataUtil_obj::resizeBuffer(hx::ObjectPtr<OBJ_>(this),tmp4,tmp5);
				}
				;break;
				case (int)2: {
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1455)
	bool tmp3 = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1455)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_powerOfTwo,return )

bool Image_obj::get_premultiplied( ){
	HX_STACK_FRAME("lime.graphics.Image","get_premultiplied",0xc1478990,"lime.graphics.Image.get_premultiplied","lime/graphics/Image.hx",1460,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1462)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1462)
	bool tmp1 = tmp->premultiplied;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1462)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_premultiplied,return )

bool Image_obj::set_premultiplied( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_premultiplied",0xe4b5619c,"lime.graphics.Image.set_premultiplied","lime/graphics/Image.hx",1467,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1469)
	bool tmp = value;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1469)
	bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1469)
	if ((tmp)){
		HX_STACK_LINE(1469)
		::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1469)
		::lime::graphics::ImageBuffer tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1469)
		bool tmp4 = tmp3->premultiplied;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1469)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1469)
		tmp1 = !(tmp5);
	}
	else{
		HX_STACK_LINE(1469)
		tmp1 = false;
	}
	HX_STACK_LINE(1469)
	if ((tmp1)){
		HX_STACK_LINE(1471)
		::lime::graphics::ImageType tmp2 = this->type;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1471)
		::lime::graphics::ImageType _g = tmp2;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1471)
		switch( (int)(_g->__Index())){
			case (int)1: {
				HX_STACK_LINE(1479)
				::lime::graphics::utils::ImageDataUtil_obj::multiplyAlpha(hx::ObjectPtr<OBJ_>(this));
			}
			;break;
			default: {
			}
		}
	}
	else{
		HX_STACK_LINE(1487)
		bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1487)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1487)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1487)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1487)
		if ((tmp4)){
			HX_STACK_LINE(1487)
			::lime::graphics::ImageBuffer tmp6 = this->buffer;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1487)
			::lime::graphics::ImageBuffer tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1487)
			tmp5 = tmp7->premultiplied;
		}
		else{
			HX_STACK_LINE(1487)
			tmp5 = false;
		}
		HX_STACK_LINE(1487)
		if ((tmp5)){
			HX_STACK_LINE(1489)
			::lime::graphics::ImageType tmp6 = this->type;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1489)
			::lime::graphics::ImageType _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1489)
			switch( (int)(_g->__Index())){
				case (int)1: {
					HX_STACK_LINE(1497)
					::lime::graphics::utils::ImageDataUtil_obj::unmultiplyAlpha(hx::ObjectPtr<OBJ_>(this));
				}
				;break;
				default: {
				}
			}
		}
	}
	HX_STACK_LINE(1507)
	bool tmp2 = value;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1507)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_premultiplied,return )

::lime::math::Rectangle Image_obj::get_rect( ){
	HX_STACK_FRAME("lime.graphics.Image","get_rect",0x82caa42a,"lime.graphics.Image.get_rect","lime/graphics/Image.hx",1512,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1514)
	int tmp = this->width;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1514)
	int tmp1 = this->height;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1514)
	::lime::math::Rectangle tmp2 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,tmp,tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1514)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_rect,return )

Dynamic Image_obj::get_src( ){
	HX_STACK_FRAME("lime.graphics.Image","get_src",0x66c2929e,"lime.graphics.Image.get_src","lime/graphics/Image.hx",1519,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1529)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1529)
	Dynamic tmp1 = tmp->get_src();		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1529)
	return tmp1;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_src,return )

Dynamic Image_obj::set_src( Dynamic value){
	HX_STACK_FRAME("lime.graphics.Image","set_src",0x59c423aa,"lime.graphics.Image.set_src","lime/graphics/Image.hx",1534,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1536)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1536)
	Dynamic tmp1 = value;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1536)
	Dynamic tmp2 = tmp->set_src(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1536)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_src,return )

bool Image_obj::get_transparent( ){
	HX_STACK_FRAME("lime.graphics.Image","get_transparent",0xe1ee610c,"lime.graphics.Image.get_transparent","lime/graphics/Image.hx",1541,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_LINE(1543)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1543)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1543)
	if ((tmp1)){
		HX_STACK_LINE(1543)
		return false;
	}
	HX_STACK_LINE(1544)
	::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1544)
	bool tmp3 = tmp2->transparent;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1544)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC0(Image_obj,get_transparent,return )

bool Image_obj::set_transparent( bool value){
	HX_STACK_FRAME("lime.graphics.Image","set_transparent",0xddb9de18,"lime.graphics.Image.set_transparent","lime/graphics/Image.hx",1549,0xc7b862ad)
	HX_STACK_THIS(this)
	HX_STACK_ARG(value,"value")
	HX_STACK_LINE(1552)
	::lime::graphics::ImageBuffer tmp = this->buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1552)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1552)
	if ((tmp1)){
		HX_STACK_LINE(1552)
		return false;
	}
	HX_STACK_LINE(1553)
	::lime::graphics::ImageBuffer tmp2 = this->buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1553)
	bool tmp3 = tmp2->transparent = value;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1553)
	return tmp3;
}


HX_DEFINE_DYNAMIC_FUNC1(Image_obj,set_transparent,return )

::String Image_obj::__base64Chars;

::haxe::crypto::BaseCode Image_obj::__base64Encoder;

::lime::graphics::Image Image_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBase64",0x6fd03756,"lime.graphics.Image.fromBase64","lime/graphics/Image.hx",452,0xc7b862ad)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(454)
	bool tmp = (base64 == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(454)
	if ((tmp)){
		HX_STACK_LINE(454)
		return null();
	}
	HX_STACK_LINE(455)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(455)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(456)
	::String tmp2 = base64;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(456)
	::String tmp3 = type;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(456)
	Dynamic tmp4 = onload;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(456)
	image->__fromBase64(tmp2,tmp3,tmp4);
	HX_STACK_LINE(457)
	::lime::graphics::Image tmp5 = image;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(457)
	return tmp5;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromBase64,return )

::lime::graphics::Image Image_obj::fromBitmapData( Dynamic bitmapData){
	HX_STACK_FRAME("lime.graphics.Image","fromBitmapData",0x2e36df00,"lime.graphics.Image.fromBitmapData","lime/graphics/Image.hx",462,0xc7b862ad)
	HX_STACK_ARG(bitmapData,"bitmapData")
	HX_STACK_LINE(464)
	bool tmp = (bitmapData == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(464)
	if ((tmp)){
		HX_STACK_LINE(464)
		return null();
	}
	HX_STACK_LINE(470)
	return bitmapData->__Field(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"), hx::paccDynamic );
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromBitmapData,return )

::lime::graphics::Image Image_obj::fromBytes( ::haxe::io::Bytes bytes,Dynamic onload){
	HX_STACK_FRAME("lime.graphics.Image","fromBytes",0x36406484,"lime.graphics.Image.fromBytes","lime/graphics/Image.hx",476,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(478)
	bool tmp = (bytes == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(478)
	if ((tmp)){
		HX_STACK_LINE(478)
		return null();
	}
	HX_STACK_LINE(479)
	::lime::graphics::Image tmp1 = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(479)
	::lime::graphics::Image image = tmp1;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(480)
	::haxe::io::Bytes tmp2 = bytes;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(480)
	Dynamic tmp3 = onload;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(480)
	image->__fromBytes(tmp2,tmp3);
	HX_STACK_LINE(481)
	::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(481)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Image_obj,fromBytes,return )

::lime::graphics::Image Image_obj::fromCanvas( Dynamic canvas){
	HX_STACK_FRAME("lime.graphics.Image","fromCanvas",0xd2ea8e9f,"lime.graphics.Image.fromCanvas","lime/graphics/Image.hx",486,0xc7b862ad)
	HX_STACK_ARG(canvas,"canvas")
	HX_STACK_LINE(488)
	bool tmp = (canvas == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(488)
	if ((tmp)){
		HX_STACK_LINE(488)
		return null();
	}
	HX_STACK_LINE(489)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),canvas->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),canvas->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(489)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(490)
	Dynamic tmp2 = canvas;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(490)
	buffer->set_src(tmp2);
	HX_STACK_LINE(491)
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(491)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromCanvas,return )

::lime::graphics::Image Image_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("lime.graphics.Image","fromFile",0x58f03883,"lime.graphics.Image.fromFile","lime/graphics/Image.hx",496,0xc7b862ad)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(498)
	::lime::graphics::Image tmp = ::lime::graphics::Image_obj::__new(null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(498)
	::lime::graphics::Image image = tmp;		HX_STACK_VAR(image,"image");
	HX_STACK_LINE(499)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(499)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(499)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(499)
	image->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(500)
	::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(500)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,fromFile,return )

::lime::graphics::Image Image_obj::fromImageElement( Dynamic image){
	HX_STACK_FRAME("lime.graphics.Image","fromImageElement",0x196571a8,"lime.graphics.Image.fromImageElement","lime/graphics/Image.hx",505,0xc7b862ad)
	HX_STACK_ARG(image,"image")
	HX_STACK_LINE(507)
	bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(507)
	if ((tmp)){
		HX_STACK_LINE(507)
		return null();
	}
	HX_STACK_LINE(508)
	::lime::graphics::ImageBuffer tmp1 = ::lime::graphics::ImageBuffer_obj::__new(null(),image->__Field(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"), hx::paccDynamic ),image->__Field(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"), hx::paccDynamic ),null(),null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(508)
	::lime::graphics::ImageBuffer buffer = tmp1;		HX_STACK_VAR(buffer,"buffer");
	HX_STACK_LINE(509)
	Dynamic tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(509)
	buffer->set_src(tmp2);
	HX_STACK_LINE(510)
	::lime::graphics::Image tmp3 = ::lime::graphics::Image_obj::__new(buffer,null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(510)
	return tmp3;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,fromImageElement,return )

::String Image_obj::__base64Encode( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__base64Encode",0x6ec3d362,"lime.graphics.Image.__base64Encode","lime/graphics/Image.hx",981,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(981)
	return HX_HCSTRING("","\x00","\x00","\x00","\x00");
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__base64Encode,return )

bool Image_obj::__isJPG( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isJPG",0x6ba35b1a,"lime.graphics.Image.__isJPG","lime/graphics/Image.hx",1310,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1312)
	int tmp = bytes->b->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1312)
	bool tmp1 = (tmp == (int)255);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1312)
	bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1312)
	if ((tmp1)){
		HX_STACK_LINE(1312)
		int tmp3 = bytes->b->__get((int)1);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1312)
		int tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1312)
		tmp2 = (tmp4 == (int)216);
	}
	else{
		HX_STACK_LINE(1312)
		tmp2 = false;
	}
	HX_STACK_LINE(1312)
	return tmp2;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isJPG,return )

bool Image_obj::__isPNG( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isPNG",0x6ba7e6e2,"lime.graphics.Image.__isPNG","lime/graphics/Image.hx",1317,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1319)
	int tmp = bytes->b->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1319)
	bool tmp1 = (tmp == (int)137);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1319)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1319)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1319)
	if ((tmp2)){
		HX_STACK_LINE(1319)
		int tmp4 = bytes->b->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1319)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1319)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1319)
		tmp3 = (tmp6 == (int)80);
	}
	else{
		HX_STACK_LINE(1319)
		tmp3 = false;
	}
	HX_STACK_LINE(1319)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1319)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1319)
	if ((tmp4)){
		HX_STACK_LINE(1319)
		int tmp6 = bytes->b->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1319)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1319)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1319)
		tmp5 = (tmp8 == (int)78);
	}
	else{
		HX_STACK_LINE(1319)
		tmp5 = false;
	}
	HX_STACK_LINE(1319)
	bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1319)
	bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(1319)
	if ((tmp6)){
		HX_STACK_LINE(1319)
		int tmp8 = bytes->b->__get((int)3);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1319)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1319)
		int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1319)
		tmp7 = (tmp10 == (int)71);
	}
	else{
		HX_STACK_LINE(1319)
		tmp7 = false;
	}
	HX_STACK_LINE(1319)
	bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(1319)
	bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(1319)
	if ((tmp8)){
		HX_STACK_LINE(1319)
		int tmp10 = bytes->b->__get((int)4);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1319)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1319)
		int tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1319)
		tmp9 = (tmp12 == (int)13);
	}
	else{
		HX_STACK_LINE(1319)
		tmp9 = false;
	}
	HX_STACK_LINE(1319)
	bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
	HX_STACK_LINE(1319)
	bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
	HX_STACK_LINE(1319)
	if ((tmp10)){
		HX_STACK_LINE(1319)
		int tmp12 = bytes->b->__get((int)5);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1319)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1319)
		int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1319)
		tmp11 = (tmp14 == (int)10);
	}
	else{
		HX_STACK_LINE(1319)
		tmp11 = false;
	}
	HX_STACK_LINE(1319)
	bool tmp12 = tmp11;		HX_STACK_VAR(tmp12,"tmp12");
	HX_STACK_LINE(1319)
	bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
	HX_STACK_LINE(1319)
	if ((tmp12)){
		HX_STACK_LINE(1319)
		int tmp14 = bytes->b->__get((int)6);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1319)
		int tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1319)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1319)
		tmp13 = (tmp16 == (int)26);
	}
	else{
		HX_STACK_LINE(1319)
		tmp13 = false;
	}
	HX_STACK_LINE(1319)
	bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
	HX_STACK_LINE(1319)
	if ((tmp13)){
		HX_STACK_LINE(1319)
		int tmp15 = bytes->b->__get((int)7);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1319)
		int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1319)
		tmp14 = (tmp16 == (int)10);
	}
	else{
		HX_STACK_LINE(1319)
		tmp14 = false;
	}
	HX_STACK_LINE(1319)
	return tmp14;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isPNG,return )

bool Image_obj::__isGIF( ::haxe::io::Bytes bytes){
	HX_STACK_FRAME("lime.graphics.Image","__isGIF",0x6ba10e3d,"lime.graphics.Image.__isGIF","lime/graphics/Image.hx",1323,0xc7b862ad)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_LINE(1325)
	int tmp = bytes->b->__get((int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1325)
	bool tmp1 = (tmp == (int)71);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1325)
	bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1325)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1325)
	if ((tmp2)){
		HX_STACK_LINE(1325)
		int tmp4 = bytes->b->__get((int)1);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1325)
		int tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1325)
		int tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1325)
		tmp3 = (tmp6 == (int)73);
	}
	else{
		HX_STACK_LINE(1325)
		tmp3 = false;
	}
	HX_STACK_LINE(1325)
	bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1325)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1325)
	if ((tmp4)){
		HX_STACK_LINE(1325)
		int tmp6 = bytes->b->__get((int)2);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1325)
		int tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1325)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1325)
		tmp5 = (tmp8 == (int)70);
	}
	else{
		HX_STACK_LINE(1325)
		tmp5 = false;
	}
	HX_STACK_LINE(1325)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1325)
	if ((tmp5)){
		HX_STACK_LINE(1325)
		int tmp7 = bytes->b->__get((int)3);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1325)
		int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1325)
		tmp6 = (tmp8 == (int)56);
	}
	else{
		HX_STACK_LINE(1325)
		tmp6 = false;
	}
	HX_STACK_LINE(1325)
	if ((tmp6)){
		HX_STACK_LINE(1327)
		int tmp7 = bytes->b->__get((int)4);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1327)
		int b = tmp7;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1328)
		bool tmp8 = (b == (int)55);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1328)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1328)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1328)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1328)
		if ((tmp10)){
			HX_STACK_LINE(1328)
			tmp11 = (b == (int)57);
		}
		else{
			HX_STACK_LINE(1328)
			tmp11 = true;
		}
		HX_STACK_LINE(1328)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1328)
		if ((tmp11)){
			HX_STACK_LINE(1328)
			int tmp13 = bytes->b->__get((int)5);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1328)
			int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1328)
			tmp12 = (tmp14 == (int)97);
		}
		else{
			HX_STACK_LINE(1328)
			tmp12 = false;
		}
		HX_STACK_LINE(1328)
		return tmp12;
	}
	HX_STACK_LINE(1332)
	return false;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,__isGIF,return )

Dynamic Image_obj::lime_image_encode( Dynamic buffer,int Type,int quality){
	HX_STACK_FRAME("lime.graphics.Image","lime_image_encode",0xb2ebd547,"lime.graphics.Image.lime_image_encode","lime/graphics/Image.hx",1566,0xc7b862ad)
	HX_STACK_ARG(buffer,"buffer")
	HX_STACK_ARG(Type,"Type")
	HX_STACK_ARG(quality,"quality")
	HX_STACK_LINE(1566)
	return ::lime::graphics::Image_obj::cffi_lime_image_encode.call(hx::DynamicPtr(buffer),Type,quality);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Image_obj,lime_image_encode,return )

Dynamic Image_obj::lime_image_load( Dynamic data){
	HX_STACK_FRAME("lime.graphics.Image","lime_image_load",0x9aff9f17,"lime.graphics.Image.lime_image_load","lime/graphics/Image.hx",1567,0xc7b862ad)
	HX_STACK_ARG(data,"data")
	HX_STACK_LINE(1567)
	return ::lime::graphics::Image_obj::cffi_lime_image_load.call(hx::DynamicPtr(data));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Image_obj,lime_image_load,return )

::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > Image_obj::cffi_lime_image_encode;

::cpp::Function< ::hx::Object * ( ::hx::Object * ) > Image_obj::cffi_lime_image_load;


Image_obj::Image_obj()
{
}

void Image_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Image);
	HX_MARK_MEMBER_NAME(buffer,"buffer");
	HX_MARK_MEMBER_NAME(dirty,"dirty");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_END_CLASS();
}

void Image_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(buffer,"buffer");
	HX_VISIT_MEMBER_NAME(dirty,"dirty");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
}

Dynamic Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return x; }
		if (HX_FIELD_EQ(inName,"y") ) { return y; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return get_src(); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return get_data(); }
		if (HX_FIELD_EQ(inName,"rect") ) { return inCallProp == hx::paccAlways ? get_rect() : rect; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { return dirty; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { return buffer; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return get_format(); }
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"resize") ) { return resize_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { return offsetX; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return offsetY; }
		if (HX_FIELD_EQ(inName,"get_src") ) { return get_src_dyn(); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return set_src_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"get_data") ) { return get_data_dyn(); }
		if (HX_FIELD_EQ(inName,"set_data") ) { return set_data_dyn(); }
		if (HX_FIELD_EQ(inName,"get_rect") ) { return get_rect_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return get_powerOfTwo(); }
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__clipRect") ) { return __clipRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"get_format") ) { return get_format_dyn(); }
		if (HX_FIELD_EQ(inName,"set_format") ) { return set_format_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return get_transparent(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return get_premultiplied(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"get_powerOfTwo") ) { return get_powerOfTwo_dyn(); }
		if (HX_FIELD_EQ(inName,"set_powerOfTwo") ) { return set_powerOfTwo_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_transparent") ) { return get_transparent_dyn(); }
		if (HX_FIELD_EQ(inName,"set_transparent") ) { return set_transparent_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__fromImageBuffer") ) { return __fromImageBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"get_premultiplied") ) { return get_premultiplied_dyn(); }
		if (HX_FIELD_EQ(inName,"set_premultiplied") ) { return set_premultiplied_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

bool Image_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"__isJPG") ) { outValue = __isJPG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isPNG") ) { outValue = __isPNG_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__isGIF") ) { outValue = __isGIF_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromCanvas") ) { outValue = fromCanvas_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { outValue = __base64Chars; return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fromBitmapData") ) { outValue = fromBitmapData_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__base64Encode") ) { outValue = __base64Encode_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { outValue = __base64Encoder; return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_load") ) { outValue = lime_image_load_dyn(); return true;  }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"fromImageElement") ) { outValue = fromImageElement_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"lime_image_encode") ) { outValue = lime_image_encode_dyn(); return true;  }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_load") ) { outValue = cffi_lime_image_load; return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { outValue = cffi_lime_image_encode; return true;  }
	}
	return false;
}

Dynamic Image_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return set_src(inValue); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { if (inCallProp == hx::paccAlways) return set_data(inValue); }
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::lime::math::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::lime::graphics::ImageType >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"dirty") ) { dirty=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"buffer") ) { buffer=inValue.Cast< ::lime::graphics::ImageBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"format") ) { if (inCallProp == hx::paccAlways) return set_format(inValue); }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"powerOfTwo") ) { if (inCallProp == hx::paccAlways) return set_powerOfTwo(inValue); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { if (inCallProp == hx::paccAlways) return set_transparent(inValue); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { if (inCallProp == hx::paccAlways) return set_premultiplied(inValue); }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Image_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__base64Chars") ) { __base64Chars=ioValue.Cast< ::String >(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__base64Encoder") ) { __base64Encoder=ioValue.Cast< ::haxe::crypto::BaseCode >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_load") ) { cffi_lime_image_load=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ) > >(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_encode") ) { cffi_lime_image_encode=ioValue.Cast< ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) > >(); return true; }
	}
	return false;
}

void Image_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("powerOfTwo","\x70","\xbe","\xae","\xea"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("x","\x78","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("y","\x79","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::graphics::ImageBuffer*/ ,(int)offsetof(Image_obj,buffer),HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0")},
	{hx::fsBool,(int)offsetof(Image_obj,dirty),HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9")},
	{hx::fsInt,(int)offsetof(Image_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(Image_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Image_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsObject /*::lime::graphics::ImageType*/ ,(int)offsetof(Image_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(Image_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsFloat,(int)offsetof(Image_obj,x),HX_HCSTRING("x","\x78","\x00","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Image_obj,y),HX_HCSTRING("y","\x79","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsString,(void *) &Image_obj::__base64Chars,HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36")},
	{hx::fsObject /*::haxe::crypto::BaseCode*/ ,(void *) &Image_obj::__base64Encoder,HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >*/ ,(void *) &Image_obj::cffi_lime_image_encode,HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82")},
	{hx::fsObject /*::cpp::Function< ::hx::Object * ( ::hx::Object * ) >*/ ,(void *) &Image_obj::cffi_lime_image_load,HX_HCSTRING("cffi_lime_image_load","\x1b","\x6e","\x80","\x2d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("buffer","\x00","\xbd","\x94","\xd0"),
	HX_HCSTRING("dirty","\x12","\x50","\xd0","\xd9"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("x","\x78","\x00","\x00","\x00"),
	HX_HCSTRING("y","\x79","\x00","\x00","\x00"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("__clipRect","\x34","\x03","\xa3","\xfb"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImageBuffer","\x51","\x6e","\xca","\xca"),
	HX_HCSTRING("get_data","\xb3","\x11","\x1e","\xc2"),
	HX_HCSTRING("set_data","\x27","\x6b","\x7b","\x70"),
	HX_HCSTRING("get_format","\x00","\xff","\x15","\xee"),
	HX_HCSTRING("set_format","\x74","\x9d","\x93","\xf1"),
	HX_HCSTRING("get_powerOfTwo","\xb9","\x46","\xa4","\x60"),
	HX_HCSTRING("set_powerOfTwo","\x2d","\x2f","\xc4","\x80"),
	HX_HCSTRING("get_premultiplied","\xad","\xfc","\xbe","\xaa"),
	HX_HCSTRING("set_premultiplied","\xb9","\xd4","\x2c","\xce"),
	HX_HCSTRING("get_rect","\xad","\x08","\x62","\xcb"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_transparent","\xe9","\xe2","\x9b","\xe3"),
	HX_HCSTRING("set_transparent","\xf5","\x5f","\x67","\xdf"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_MARK_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_MARK_MEMBER_NAME(Image_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
	HX_MARK_MEMBER_NAME(Image_obj::cffi_lime_image_load,"cffi_lime_image_load");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Image_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Chars,"__base64Chars");
	HX_VISIT_MEMBER_NAME(Image_obj::__base64Encoder,"__base64Encoder");
	HX_VISIT_MEMBER_NAME(Image_obj::cffi_lime_image_encode,"cffi_lime_image_encode");
	HX_VISIT_MEMBER_NAME(Image_obj::cffi_lime_image_load,"cffi_lime_image_load");
};

#endif

hx::Class Image_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__base64Chars","\xae","\xc9","\x24","\x36"),
	HX_HCSTRING("__base64Encoder","\xad","\xa4","\x42","\x7e"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBitmapData","\xc3","\x07","\xed","\x2b"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromCanvas","\xe2","\x59","\x86","\xfb"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImageElement","\x2b","\x91","\x89","\x8f"),
	HX_HCSTRING("__base64Encode","\x25","\xfc","\x79","\x6c"),
	HX_HCSTRING("__isJPG","\xf7","\x37","\xad","\x2b"),
	HX_HCSTRING("__isPNG","\xbf","\xc3","\xb1","\x2b"),
	HX_HCSTRING("__isGIF","\x1a","\xeb","\xaa","\x2b"),
	HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),
	HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),
	HX_HCSTRING("cffi_lime_image_encode","\x4b","\x6d","\x81","\x82"),
	HX_HCSTRING("cffi_lime_image_load","\x1b","\x6e","\x80","\x2d"),
	::String(null()) };

void Image_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.Image","\x91","\x28","\xc1","\x9c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Image_obj::__GetStatic;
	__mClass->mSetStaticField = &Image_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Image_obj >;
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

void Image_obj::__boot()
{
	__base64Chars= HX_HCSTRING("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/","\x03","\x41","\x03","\x7f");
	cffi_lime_image_encode= ::cpp::Function< ::hx::Object * ( ::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_encode","\x64","\x48","\x63","\x9c"),HX_HCSTRING("oiio","\x80","\xb7","\xae","\x49"),false));
	cffi_lime_image_load= ::cpp::Function< ::hx::Object * ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_load","\xf4","\x20","\xad","\x9c"),HX_HCSTRING("oo","\x20","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
