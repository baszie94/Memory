#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_cpp_Prime
#include <cpp/Prime.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_lime_graphics_utils_ImageDataUtil
#include <lime/graphics/utils/ImageDataUtil.h>
#endif
#ifndef INCLUDED_lime_graphics_utils__ImageDataUtil_ImageDataView
#include <lime/graphics/utils/_ImageDataUtil/ImageDataView.h>
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
#ifndef INCLUDED_lime_math_color__RGBA_RGBA_Impl_
#include <lime/math/color/_RGBA/RGBA_Impl_.h>
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
namespace utils{

Void ImageDataUtil_obj::__construct()
{
	return null();
}

//ImageDataUtil_obj::~ImageDataUtil_obj() { }

Dynamic ImageDataUtil_obj::__CreateEmpty() { return  new ImageDataUtil_obj; }
hx::ObjectPtr< ImageDataUtil_obj > ImageDataUtil_obj::__new()
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Dynamic ImageDataUtil_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ImageDataUtil_obj > _result_ = new ImageDataUtil_obj();
	_result_->__construct();
	return _result_;}

Void ImageDataUtil_obj::colorTransform( ::lime::graphics::Image image,::lime::math::Rectangle rect,::lime::utils::ArrayBufferView colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","colorTransform",0x2c17e9b7,"lime.graphics.utils.ImageDataUtil.colorTransform","lime/graphics/utils/ImageDataUtil.hx",30,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(32)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(32)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(33)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(33)
		if ((tmp1)){
			HX_STACK_LINE(33)
			return null();
		}
		HX_STACK_LINE(36)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(36)
		if ((tmp2)){
			HX_STACK_LINE(36)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
		}
		else{
			HX_STACK_LINE(40)
			int tmp3 = image->buffer->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(40)
			int format = tmp3;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(41)
			bool tmp4 = image->buffer->premultiplied;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(41)
			bool premultiplied = tmp4;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(43)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(43)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp5;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp6 = colorMatrix;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView tmp7 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getAlphaTable(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(45)
			::lime::utils::ArrayBufferView alphaTable = tmp7;		HX_STACK_VAR(alphaTable,"alphaTable");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView tmp8 = colorMatrix;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView tmp9 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getRedTable(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(46)
			::lime::utils::ArrayBufferView redTable = tmp9;		HX_STACK_VAR(redTable,"redTable");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView tmp10 = colorMatrix;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView tmp11 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getGreenTable(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(47)
			::lime::utils::ArrayBufferView greenTable = tmp11;		HX_STACK_VAR(greenTable,"greenTable");
			HX_STACK_LINE(48)
			::lime::utils::ArrayBufferView tmp12 = colorMatrix;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(48)
			::lime::utils::ArrayBufferView tmp13 = ::lime::math::_ColorMatrix::ColorMatrix_Impl__obj::getBlueTable(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(48)
			::lime::utils::ArrayBufferView blueTable = tmp13;		HX_STACK_VAR(blueTable,"blueTable");
			HX_STACK_LINE(50)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(50)
			int offset;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(50)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(52)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(52)
				while((true)){
					HX_STACK_LINE(52)
					bool tmp14 = (_g1 < _g);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(52)
					bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(52)
					if ((tmp15)){
						HX_STACK_LINE(52)
						break;
					}
					HX_STACK_LINE(52)
					int tmp16 = (_g1)++;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(52)
					int y = tmp16;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(54)
					int tmp17 = dataView->offset;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(54)
					int tmp18 = (dataView->stride * y);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(54)
					int tmp19 = (tmp17 + tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(54)
					row = tmp19;
					HX_STACK_LINE(56)
					{
						HX_STACK_LINE(56)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(56)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(56)
						while((true)){
							HX_STACK_LINE(56)
							bool tmp20 = (_g3 < _g2);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(56)
							bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(56)
							if ((tmp21)){
								HX_STACK_LINE(56)
								break;
							}
							HX_STACK_LINE(56)
							int tmp22 = (_g3)++;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(56)
							int x = tmp22;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(58)
							int tmp23 = row;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(58)
							int tmp24 = (x * (int)4);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(58)
							int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(58)
							offset = tmp25;
							HX_STACK_LINE(60)
							{
								HX_STACK_LINE(60)
								int tmp26 = format;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(60)
								switch( (int)(tmp26)){
									case (int)2: {
										HX_STACK_LINE(60)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(60)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(60)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(60)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(60)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(60)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(60)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(60)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(60)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(60)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(60)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(60)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(60)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(60)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(60)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(60)
										pixel = tmp44;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(60)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(60)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(60)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(60)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(60)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(60)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(60)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(60)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(60)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(60)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(60)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(60)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(60)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(60)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(60)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(60)
										pixel = tmp44;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(60)
										int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(60)
										Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(60)
										int r = tmp28;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(60)
										int tmp29 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(60)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(60)
										int g = tmp30;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(60)
										int tmp31 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										int b = tmp32;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(60)
										int tmp33 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(60)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(60)
										int a = tmp34;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(60)
										int tmp35 = (int(r) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(60)
										int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(60)
										int tmp37 = (int(g) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(60)
										int tmp38 = (int(tmp37) << int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(60)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(60)
										int tmp40 = (int(b) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(60)
										int tmp41 = (int(tmp40) << int((int)8));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(60)
										int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(60)
										int tmp43 = (int(a) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(60)
										int tmp44 = (int(tmp42) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(60)
										pixel = tmp44;
									}
									;break;
								}
								HX_STACK_LINE(60)
								bool tmp27 = premultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(60)
								if ((tmp27)){
									HX_STACK_LINE(60)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(60)
									bool tmp29 = (tmp28 != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(60)
									bool tmp30;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(60)
									if ((tmp29)){
										HX_STACK_LINE(60)
										int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										int tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										tmp30 = (tmp32 != (int)255);
									}
									else{
										HX_STACK_LINE(60)
										tmp30 = false;
									}
									HX_STACK_LINE(60)
									if ((tmp30)){
										HX_STACK_LINE(60)
										int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(60)
										Float tmp32 = (Float(((Float)255.0)) / Float(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(60)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp32;
										HX_STACK_LINE(60)
										{
											HX_STACK_LINE(60)
											Dynamic tmp33;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(60)
											{
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView this1 = tmp34;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(60)
												int tmp35 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(60)
												int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(60)
												Float tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(60)
												Float tmp38 = (tmp36 * tmp37);		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(60)
												int tmp39 = ::Math_obj::round(tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(60)
												int idx = tmp39;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(60)
												int tmp40 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(60)
												tmp33 = (int(tmp40) & int((int)255));
											}
											HX_STACK_LINE(60)
											int r = tmp33;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(60)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(60)
											{
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(60)
												int tmp36 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(60)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(60)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(60)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(60)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(60)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(60)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(60)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(60)
											int g = tmp34;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(60)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(60)
											{
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(60)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(60)
												int tmp37 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(60)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(60)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(60)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(60)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(60)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(60)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(60)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(60)
											int b = tmp35;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(60)
											int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(60)
											int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(60)
											int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(60)
											int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(60)
											int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(60)
											int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(60)
											int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(60)
											int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(60)
											int tmp44 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(60)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(60)
											int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(60)
											pixel = tmp46;
										}
									}
								}
							}
							HX_STACK_LINE(61)
							{
								HX_STACK_LINE(61)
								int tmp26 = ::__hxcpp_memory_get_byte(redTable->buffer->b,(redTable->byteOffset + ((int((int(pixel) >> int((int)24))) & int((int)255)))));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(61)
								Dynamic tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(61)
								int r = tmp27;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(61)
								int tmp28 = ::__hxcpp_memory_get_byte(greenTable->buffer->b,(greenTable->byteOffset + ((int((int(pixel) >> int((int)16))) & int((int)255)))));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(61)
								Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(61)
								int g = tmp29;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(61)
								int tmp30 = ::__hxcpp_memory_get_byte(blueTable->buffer->b,(blueTable->byteOffset + ((int((int(pixel) >> int((int)8))) & int((int)255)))));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(61)
								Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(61)
								int b = tmp31;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(61)
								int tmp32 = ::__hxcpp_memory_get_byte(alphaTable->buffer->b,(alphaTable->byteOffset + ((int(pixel) & int((int)255)))));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(61)
								Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(61)
								int a = tmp33;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(61)
								int tmp34 = (int(r) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(61)
								int tmp35 = (int(tmp34) << int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(61)
								int tmp36 = (int(g) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(61)
								int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(61)
								int tmp38 = (int(tmp35) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(61)
								int tmp39 = (int(b) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(61)
								int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(61)
								int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
								HX_STACK_LINE(61)
								int tmp42 = (int(a) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(61)
								int tmp43 = (int(tmp41) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(61)
								pixel = tmp43;
							}
							HX_STACK_LINE(62)
							{
								HX_STACK_LINE(62)
								bool tmp26 = premultiplied;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(62)
								if ((tmp26)){
									HX_STACK_LINE(62)
									int tmp27 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(62)
									bool tmp28 = (tmp27 == (int)0);		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(62)
									if ((tmp28)){
										HX_STACK_LINE(62)
										bool tmp29 = (pixel != (int)0);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(62)
										if ((tmp29)){
											HX_STACK_LINE(62)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(62)
										int tmp29 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(62)
										bool tmp30 = (tmp29 != (int)255);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(62)
										if ((tmp30)){
											HX_STACK_LINE(62)
											Dynamic tmp31;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::lime::utils::ArrayBufferView tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(62)
												::lime::utils::ArrayBufferView this1 = tmp32;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(62)
												{
													HX_STACK_LINE(62)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(62)
													tmp31 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(62)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp31;
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												int tmp32 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(62)
												int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(62)
												int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(62)
												int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(62)
												int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(62)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(62)
												int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(62)
												int tmp39 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(62)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(62)
												int tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(62)
												int tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(62)
												int tmp43 = (int(tmp42) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(62)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(62)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(62)
												int tmp46 = (int(tmp38) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(62)
												int tmp47 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(62)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(62)
												int tmp49 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(62)
												int tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(62)
												int tmp51 = (int(tmp50) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(62)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(62)
												int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(62)
												int tmp54 = (int(tmp46) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(62)
												int tmp55 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(62)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(62)
												int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(62)
												pixel = tmp57;
											}
										}
									}
								}
								HX_STACK_LINE(62)
								int tmp27 = format;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(62)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int val = tmp28;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
										HX_STACK_LINE(62)
										{
											HX_STACK_LINE(62)
											int tmp28 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(62)
											int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(62)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(62)
											{
												HX_STACK_LINE(62)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(62)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(70)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,colorTransform,(void))

Void ImageDataUtil_obj::copyChannel( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::ImageChannel sourceChannel,::lime::graphics::ImageChannel destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyChannel",0xa41162a0,"lime.graphics.utils.ImageDataUtil.copyChannel","lime/graphics/utils/ImageDataUtil.hx",75,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(77)
		int tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(77)
		switch( (int)(destChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(79)
				tmp = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(80)
				tmp = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(81)
				tmp = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(82)
				tmp = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(77)
		int destIdx = tmp;		HX_STACK_VAR(destIdx,"destIdx");
		HX_STACK_LINE(86)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(86)
		switch( (int)(sourceChannel->__Index())){
			case (int)0: {
				HX_STACK_LINE(88)
				tmp1 = (int)0;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(89)
				tmp1 = (int)1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(90)
				tmp1 = (int)2;
			}
			;break;
			case (int)3: {
				HX_STACK_LINE(91)
				tmp1 = (int)3;
			}
			;break;
		}
		HX_STACK_LINE(86)
		int srcIdx = tmp1;		HX_STACK_VAR(srcIdx,"srcIdx");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView tmp2 = sourceImage->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(95)
		::lime::utils::ArrayBufferView srcData = tmp2;		HX_STACK_VAR(srcData,"srcData");
		HX_STACK_LINE(96)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(96)
		::lime::utils::ArrayBufferView destData = tmp3;		HX_STACK_VAR(destData,"destData");
		HX_STACK_LINE(98)
		bool tmp4 = (srcData == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(98)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(98)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(98)
		if ((tmp5)){
			HX_STACK_LINE(98)
			tmp6 = (destData == null());
		}
		else{
			HX_STACK_LINE(98)
			tmp6 = true;
		}
		HX_STACK_LINE(98)
		if ((tmp6)){
			HX_STACK_LINE(98)
			return null();
		}
		HX_STACK_LINE(101)
		bool tmp7 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(101)
		if ((tmp7)){
			HX_STACK_LINE(101)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcIdx,destIdx);
		}
		else{
			HX_STACK_LINE(105)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(105)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp8;		HX_STACK_VAR(srcView,"srcView");
			HX_STACK_LINE(106)
			::lime::graphics::Image tmp9 = image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(106)
			::lime::math::Rectangle tmp10 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,srcView->width,srcView->height);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(106)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp11 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp9,tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(106)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp11;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(108)
			int tmp12 = sourceImage->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(108)
			int srcFormat = tmp12;		HX_STACK_VAR(srcFormat,"srcFormat");
			HX_STACK_LINE(109)
			int tmp13 = image->buffer->format;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(109)
			int destFormat = tmp13;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(110)
			bool tmp14 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(110)
			bool srcPremultiplied = tmp14;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
			HX_STACK_LINE(111)
			bool tmp15 = image->buffer->premultiplied;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(111)
			bool destPremultiplied = tmp15;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(113)
			int srcPosition;		HX_STACK_VAR(srcPosition,"srcPosition");
			HX_STACK_LINE(113)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(113)
			int srcPixel;		HX_STACK_VAR(srcPixel,"srcPixel");
			HX_STACK_LINE(113)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(113)
			int value = (int)0;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(115)
			{
				HX_STACK_LINE(115)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(115)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(115)
				while((true)){
					HX_STACK_LINE(115)
					bool tmp16 = (_g1 < _g);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(115)
					bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(115)
					if ((tmp17)){
						HX_STACK_LINE(115)
						break;
					}
					HX_STACK_LINE(115)
					int tmp18 = (_g1)++;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(115)
					int y = tmp18;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(117)
					int tmp19 = srcView->offset;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(117)
					int tmp20 = (srcView->stride * y);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(117)
					int tmp21 = (tmp19 + tmp20);		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(117)
					srcPosition = tmp21;
					HX_STACK_LINE(118)
					int tmp22 = destView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(118)
					int tmp23 = (destView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(118)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(118)
					destPosition = tmp24;
					HX_STACK_LINE(120)
					{
						HX_STACK_LINE(120)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(120)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(120)
						while((true)){
							HX_STACK_LINE(120)
							bool tmp25 = (_g3 < _g2);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(120)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(120)
							if ((tmp26)){
								HX_STACK_LINE(120)
								break;
							}
							HX_STACK_LINE(120)
							int tmp27 = (_g3)++;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(120)
							int x = tmp27;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(122)
							{
								HX_STACK_LINE(122)
								int tmp28 = srcFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(122)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(122)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(122)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(122)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(122)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(122)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(122)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(122)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(122)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(122)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(122)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(122)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(122)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(122)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(122)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(122)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(122)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(122)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(122)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(122)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(122)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(122)
										srcPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(122)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(122)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(122)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(122)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(122)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(122)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(122)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(122)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(122)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(122)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(122)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(122)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(122)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(122)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(122)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(122)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(122)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(122)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(122)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(122)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(122)
										srcPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(122)
										int tmp29 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(122)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(122)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(122)
										int tmp31 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(122)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(122)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(122)
										int tmp33 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(122)
										int tmp35 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(122)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(122)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(122)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(122)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(122)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(122)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(122)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(122)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(122)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(122)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(122)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(122)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(122)
										srcPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(122)
								bool tmp29 = srcPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(122)
								if ((tmp29)){
									HX_STACK_LINE(122)
									int tmp30 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(122)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(122)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(122)
									if ((tmp31)){
										HX_STACK_LINE(122)
										int tmp33 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(122)
										tmp32 = false;
									}
									HX_STACK_LINE(122)
									if ((tmp32)){
										HX_STACK_LINE(122)
										int tmp33 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(122)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(122)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(122)
										{
											HX_STACK_LINE(122)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(122)
												int tmp37 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(122)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(122)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(122)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(122)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(122)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(122)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(122)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(122)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(122)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(122)
												int tmp38 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(122)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(122)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(122)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(122)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(122)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(122)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(122)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(122)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(122)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(122)
											{
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(122)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(122)
												int tmp39 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(122)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(122)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(122)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(122)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(122)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(122)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(122)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(122)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(122)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(122)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(122)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(122)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(122)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(122)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(122)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(122)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(122)
											int tmp46 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(122)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(122)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(122)
											srcPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(123)
							{
								HX_STACK_LINE(123)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(123)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(123)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(123)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(123)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(123)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(123)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(123)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(123)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(123)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(123)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(123)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(123)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(123)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(123)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(123)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(123)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(123)
										destPixel = tmp46;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(123)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(123)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(123)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(123)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(123)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(123)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(123)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(123)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(123)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(123)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(123)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(123)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(123)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(123)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(123)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(123)
										destPixel = tmp46;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(123)
										int tmp29 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(123)
										Dynamic tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(123)
										int r = tmp30;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(123)
										int tmp31 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(123)
										Dynamic tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(123)
										int g = tmp32;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(123)
										int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										int b = tmp34;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(123)
										int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(123)
										Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(123)
										int a = tmp36;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(123)
										int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(123)
										int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(123)
										int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(123)
										int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(123)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(123)
										int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(123)
										int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(123)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(123)
										int tmp45 = (int(a) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(123)
										int tmp46 = (int(tmp44) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(123)
										destPixel = tmp46;
									}
									;break;
								}
								HX_STACK_LINE(123)
								bool tmp29 = destPremultiplied;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(123)
								if ((tmp29)){
									HX_STACK_LINE(123)
									int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(123)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(123)
									bool tmp32;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(123)
									if ((tmp31)){
										HX_STACK_LINE(123)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										int tmp34 = tmp33;		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										tmp32 = (tmp34 != (int)255);
									}
									else{
										HX_STACK_LINE(123)
										tmp32 = false;
									}
									HX_STACK_LINE(123)
									if ((tmp32)){
										HX_STACK_LINE(123)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(123)
										Float tmp34 = (Float(((Float)255.0)) / Float(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(123)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp34;
										HX_STACK_LINE(123)
										{
											HX_STACK_LINE(123)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(123)
											{
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(123)
												int tmp37 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(123)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(123)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(123)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(123)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(123)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(123)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(123)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(123)
											int r = tmp35;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(123)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(123)
											{
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(123)
												int tmp38 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(123)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(123)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(123)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(123)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(123)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(123)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(123)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(123)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(123)
											Dynamic tmp37;		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(123)
											{
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(123)
												::lime::utils::ArrayBufferView this1 = tmp38;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(123)
												int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(123)
												int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(123)
												Float tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(123)
												Float tmp42 = (tmp40 * tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(123)
												int tmp43 = ::Math_obj::round(tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(123)
												int idx = tmp43;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(123)
												int tmp44 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(123)
												tmp37 = (int(tmp44) & int((int)255));
											}
											HX_STACK_LINE(123)
											int b = tmp37;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(123)
											int tmp38 = (int(r) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(123)
											int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(123)
											int tmp40 = (int(g) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(123)
											int tmp41 = (int(tmp40) << int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(123)
											int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(123)
											int tmp43 = (int(b) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(123)
											int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(123)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(123)
											int tmp46 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(123)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(123)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(123)
											destPixel = tmp48;
										}
									}
								}
							}
							HX_STACK_LINE(125)
							int tmp28 = srcIdx;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(125)
							switch( (int)(tmp28)){
								case (int)0: {
									HX_STACK_LINE(127)
									int tmp29 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(127)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(127)
									value = tmp30;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(128)
									int tmp29 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(128)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(128)
									value = tmp30;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(129)
									int tmp29 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(129)
									int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(129)
									value = tmp30;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(130)
									int tmp29 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(130)
									value = tmp29;
								}
								;break;
							}
							HX_STACK_LINE(134)
							int tmp29 = destIdx;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(134)
							switch( (int)(tmp29)){
								case (int)0: {
									HX_STACK_LINE(136)
									{
										HX_STACK_LINE(136)
										int tmp30 = (int(value) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(136)
										int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(136)
										int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(136)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(136)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(136)
										int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(136)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(136)
										int tmp37 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(136)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(136)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(136)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(136)
										int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(136)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(136)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(136)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(136)
										destPixel = tmp44;
									}
									HX_STACK_LINE(136)
									value;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(137)
									{
										HX_STACK_LINE(137)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(137)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(137)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(137)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(137)
										int tmp34 = (int(value) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(137)
										int tmp35 = (int(tmp34) << int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(137)
										int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(137)
										int tmp37 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(137)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(137)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(137)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(137)
										int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(137)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(137)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(137)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(137)
										destPixel = tmp44;
									}
									HX_STACK_LINE(137)
									value;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(138)
									{
										HX_STACK_LINE(138)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(138)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(138)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(138)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(138)
										int tmp34 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(138)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(138)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(138)
										int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(138)
										int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(138)
										int tmp39 = (int(value) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(138)
										int tmp40 = (int(tmp39) << int((int)8));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(138)
										int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(138)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(138)
										int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(138)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(138)
										destPixel = tmp44;
									}
									HX_STACK_LINE(138)
									value;
								}
								;break;
								case (int)3: {
									HX_STACK_LINE(139)
									{
										HX_STACK_LINE(139)
										int tmp30 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(139)
										int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(139)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(139)
										int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(139)
										int tmp34 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(139)
										int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(139)
										int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(139)
										int tmp37 = (int(tmp36) << int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(139)
										int tmp38 = (int(tmp33) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(139)
										int tmp39 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(139)
										int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(139)
										int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(139)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(139)
										int tmp43 = (int(tmp38) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(139)
										int tmp44 = (int(value) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(139)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(139)
										destPixel = tmp45;
									}
									HX_STACK_LINE(139)
									value;
								}
								;break;
							}
							HX_STACK_LINE(143)
							{
								HX_STACK_LINE(143)
								bool tmp30 = destPremultiplied;		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(143)
								if ((tmp30)){
									HX_STACK_LINE(143)
									int tmp31 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(143)
									bool tmp32 = (tmp31 == (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(143)
									if ((tmp32)){
										HX_STACK_LINE(143)
										bool tmp33 = (destPixel != (int)0);		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(143)
										if ((tmp33)){
											HX_STACK_LINE(143)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(143)
										int tmp33 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(143)
										bool tmp34 = (tmp33 != (int)255);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(143)
										if ((tmp34)){
											HX_STACK_LINE(143)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(143)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(143)
												{
													HX_STACK_LINE(143)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(143)
													tmp35 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(143)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp35;
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(143)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(143)
												int tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(143)
												int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(143)
												int tmp40 = (int(tmp39) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(143)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(143)
												int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(143)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(143)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(143)
												int tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(143)
												int tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(143)
												int tmp47 = (int(tmp46) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(143)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(143)
												int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(143)
												int tmp50 = (int(tmp42) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(143)
												int tmp51 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(143)
												int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(143)
												int tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(143)
												int tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(143)
												int tmp55 = (int(tmp54) >> int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(143)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(143)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(143)
												int tmp58 = (int(tmp50) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(143)
												int tmp59 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(143)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(143)
												int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(143)
												destPixel = tmp61;
											}
										}
									}
								}
								HX_STACK_LINE(143)
								int tmp31 = destFormat;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(143)
								switch( (int)(tmp31)){
									case (int)2: {
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int val = tmp32;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
										HX_STACK_LINE(143)
										{
											HX_STACK_LINE(143)
											int tmp32 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(143)
											int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(143)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(143)
											{
												HX_STACK_LINE(143)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(143)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(145)
							hx::AddEq(srcPosition,(int)4);
							HX_STACK_LINE(146)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(154)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,copyChannel,(void))

Void ImageDataUtil_obj::copyPixels( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::lime::graphics::Image alphaImage,::lime::math::Vector2 alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","copyPixels",0x95aa37f0,"lime.graphics.utils.ImageDataUtil.copyPixels","lime/graphics/utils/ImageDataUtil.hx",159,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaImage,"alphaImage")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(162)
		bool tmp = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(162)
		if ((tmp)){
			HX_STACK_LINE(162)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
		}
		else{
			HX_STACK_LINE(166)
			::lime::utils::ArrayBufferView tmp1 = sourceImage->buffer->data;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(166)
			::lime::utils::ArrayBufferView sourceData = tmp1;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(167)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(167)
			::lime::utils::ArrayBufferView destData = tmp2;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(169)
			bool tmp3 = (sourceData == null());		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(169)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(169)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(169)
			if ((tmp4)){
				HX_STACK_LINE(169)
				tmp5 = (destData == null());
			}
			else{
				HX_STACK_LINE(169)
				tmp5 = true;
			}
			HX_STACK_LINE(169)
			if ((tmp5)){
				HX_STACK_LINE(169)
				return null();
			}
			HX_STACK_LINE(171)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(171)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp6;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(172)
			::lime::graphics::Image tmp7 = image;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(172)
			::lime::math::Rectangle tmp8 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(172)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp9 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp7,tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(172)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp9;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(174)
			int tmp10 = sourceImage->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(174)
			int sourceFormat = tmp10;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(175)
			int tmp11 = image->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(175)
			int destFormat = tmp11;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(176)
			bool tmp12 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(176)
			bool sourcePremultiplied = tmp12;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(177)
			bool tmp13 = image->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(177)
			bool destPremultiplied = tmp13;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(179)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(179)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(179)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(181)
			bool tmp14 = mergeAlpha;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(181)
			bool tmp15 = tmp14;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(181)
			bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(181)
			bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(181)
			bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(181)
			if ((tmp17)){
				HX_STACK_LINE(181)
				bool tmp19 = sourceImage->get_transparent();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(181)
				bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(181)
				bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(181)
				tmp18 = !(tmp21);
			}
			else{
				HX_STACK_LINE(181)
				tmp18 = true;
			}
			HX_STACK_LINE(181)
			if ((tmp18)){
				HX_STACK_LINE(183)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(183)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(183)
				while((true)){
					HX_STACK_LINE(183)
					bool tmp19 = (_g1 < _g);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(183)
					bool tmp20 = !(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(183)
					if ((tmp20)){
						HX_STACK_LINE(183)
						break;
					}
					HX_STACK_LINE(183)
					int tmp21 = (_g1)++;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(183)
					int y = tmp21;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(185)
					int tmp22 = sourceView->offset;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(185)
					int tmp23 = (sourceView->stride * y);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(185)
					int tmp24 = (tmp22 + tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(185)
					sourcePosition = tmp24;
					HX_STACK_LINE(186)
					int tmp25 = destView->offset;		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(186)
					int tmp26 = (destView->stride * y);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(186)
					int tmp27 = (tmp25 + tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(186)
					destPosition = tmp27;
					HX_STACK_LINE(188)
					{
						HX_STACK_LINE(188)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(188)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(188)
						while((true)){
							HX_STACK_LINE(188)
							bool tmp28 = (_g3 < _g2);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(188)
							bool tmp29 = !(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(188)
							if ((tmp29)){
								HX_STACK_LINE(188)
								break;
							}
							HX_STACK_LINE(188)
							int tmp30 = (_g3)++;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(188)
							int x = tmp30;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(190)
							{
								HX_STACK_LINE(190)
								int tmp31 = sourceFormat;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(190)
								switch( (int)(tmp31)){
									case (int)2: {
										HX_STACK_LINE(190)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(190)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(190)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(190)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(190)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(190)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(190)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(190)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(190)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(190)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(190)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(190)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(190)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(190)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(190)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(190)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(190)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(190)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(190)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(190)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(190)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(190)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(190)
										sourcePixel = tmp49;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(190)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(190)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(190)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(190)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(190)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(190)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(190)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(190)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(190)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(190)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(190)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(190)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(190)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(190)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(190)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(190)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(190)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(190)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(190)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(190)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(190)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(190)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(190)
										sourcePixel = tmp49;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(190)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(190)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(190)
										int r = tmp33;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(190)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(190)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(190)
										int g = tmp35;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(190)
										int tmp36 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(190)
										Dynamic tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(190)
										int b = tmp37;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(190)
										int tmp38 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(190)
										Dynamic tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(190)
										int a = tmp39;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(190)
										int tmp40 = (int(r) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(190)
										int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(190)
										int tmp42 = (int(g) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(190)
										int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(190)
										int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(190)
										int tmp45 = (int(b) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(190)
										int tmp46 = (int(tmp45) << int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
										HX_STACK_LINE(190)
										int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(190)
										int tmp48 = (int(a) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(190)
										int tmp49 = (int(tmp47) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(190)
										sourcePixel = tmp49;
									}
									;break;
								}
								HX_STACK_LINE(190)
								bool tmp32 = sourcePremultiplied;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(190)
								if ((tmp32)){
									HX_STACK_LINE(190)
									int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(190)
									bool tmp34 = (tmp33 != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(190)
									bool tmp35;		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(190)
									if ((tmp34)){
										HX_STACK_LINE(190)
										int tmp36 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(190)
										int tmp37 = tmp36;		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(190)
										tmp35 = (tmp37 != (int)255);
									}
									else{
										HX_STACK_LINE(190)
										tmp35 = false;
									}
									HX_STACK_LINE(190)
									if ((tmp35)){
										HX_STACK_LINE(190)
										int tmp36 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(190)
										Float tmp37 = (Float(((Float)255.0)) / Float(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(190)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp37;
										HX_STACK_LINE(190)
										{
											HX_STACK_LINE(190)
											Dynamic tmp38;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView this1 = tmp39;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(190)
												int tmp40 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(190)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(190)
												Float tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(190)
												Float tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(190)
												int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(190)
												int idx = tmp44;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(190)
												int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(190)
												tmp38 = (int(tmp45) & int((int)255));
											}
											HX_STACK_LINE(190)
											int r = tmp38;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(190)
											Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(190)
												int tmp41 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(190)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(190)
												Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(190)
												Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(190)
												int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(190)
												int idx = tmp45;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(190)
												int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(190)
												tmp39 = (int(tmp46) & int((int)255));
											}
											HX_STACK_LINE(190)
											int g = tmp39;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(190)
											Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(190)
											{
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(190)
												::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(190)
												int tmp42 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(190)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(190)
												Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(190)
												Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(190)
												int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(190)
												int idx = tmp46;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(190)
												int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(190)
												tmp40 = (int(tmp47) & int((int)255));
											}
											HX_STACK_LINE(190)
											int b = tmp40;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(190)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(190)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(190)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(190)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(190)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(190)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(190)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(190)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(190)
											int tmp49 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(190)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(190)
											int tmp51 = (int(tmp48) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(190)
											sourcePixel = tmp51;
										}
									}
								}
							}
							HX_STACK_LINE(191)
							{
								HX_STACK_LINE(191)
								bool tmp31 = destPremultiplied;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(191)
								if ((tmp31)){
									HX_STACK_LINE(191)
									int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(191)
									bool tmp33 = (tmp32 == (int)0);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(191)
									if ((tmp33)){
										HX_STACK_LINE(191)
										bool tmp34 = (sourcePixel != (int)0);		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(191)
										if ((tmp34)){
											HX_STACK_LINE(191)
											sourcePixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(191)
										int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(191)
										bool tmp35 = (tmp34 != (int)255);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(191)
										if ((tmp35)){
											HX_STACK_LINE(191)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(191)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(191)
												{
													HX_STACK_LINE(191)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(191)
													tmp36 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(sourcePixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(191)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp36;
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												int tmp37 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(191)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(191)
												int tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(191)
												int tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(191)
												int tmp41 = (int(tmp40) >> int((int)16));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(191)
												int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(191)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(191)
												int tmp44 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(191)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(191)
												int tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(191)
												int tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(191)
												int tmp48 = (int(tmp47) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(191)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(191)
												int tmp50 = (int(tmp49) << int((int)16));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(191)
												int tmp51 = (int(tmp43) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(191)
												int tmp52 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(191)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(191)
												int tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(191)
												int tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(191)
												int tmp56 = (int(tmp55) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(191)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(191)
												int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(191)
												int tmp59 = (int(tmp51) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(191)
												int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(191)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(191)
												int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(191)
												sourcePixel = tmp62;
											}
										}
									}
								}
								HX_STACK_LINE(191)
								int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(191)
								switch( (int)(tmp32)){
									case (int)2: {
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int val = tmp33;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
										HX_STACK_LINE(191)
										{
											HX_STACK_LINE(191)
											int tmp33 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(191)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(191)
											int val = tmp34;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(191)
											{
												HX_STACK_LINE(191)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(191)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(193)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(194)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
			else{
				HX_STACK_LINE(202)
				Float sourceAlpha;		HX_STACK_VAR(sourceAlpha,"sourceAlpha");
				HX_STACK_LINE(202)
				Float destAlpha;		HX_STACK_VAR(destAlpha,"destAlpha");
				HX_STACK_LINE(202)
				Float oneMinusSourceAlpha;		HX_STACK_VAR(oneMinusSourceAlpha,"oneMinusSourceAlpha");
				HX_STACK_LINE(202)
				Float blendAlpha;		HX_STACK_VAR(blendAlpha,"blendAlpha");
				HX_STACK_LINE(203)
				int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
				HX_STACK_LINE(205)
				bool tmp19 = (alphaImage == null());		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(205)
				if ((tmp19)){
					HX_STACK_LINE(207)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					HX_STACK_LINE(207)
					int _g = destView->height;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(207)
					while((true)){
						HX_STACK_LINE(207)
						bool tmp20 = (_g1 < _g);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(207)
						bool tmp21 = !(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(207)
						if ((tmp21)){
							HX_STACK_LINE(207)
							break;
						}
						HX_STACK_LINE(207)
						int tmp22 = (_g1)++;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(207)
						int y = tmp22;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(209)
						int tmp23 = sourceView->offset;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(209)
						int tmp24 = (sourceView->stride * y);		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(209)
						int tmp25 = (tmp23 + tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(209)
						sourcePosition = tmp25;
						HX_STACK_LINE(210)
						int tmp26 = destView->offset;		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(210)
						int tmp27 = (destView->stride * y);		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(210)
						int tmp28 = (tmp26 + tmp27);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(210)
						destPosition = tmp28;
						HX_STACK_LINE(212)
						{
							HX_STACK_LINE(212)
							int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
							HX_STACK_LINE(212)
							int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(212)
							while((true)){
								HX_STACK_LINE(212)
								bool tmp29 = (_g3 < _g2);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(212)
								bool tmp30 = !(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(212)
								if ((tmp30)){
									HX_STACK_LINE(212)
									break;
								}
								HX_STACK_LINE(212)
								int tmp31 = (_g3)++;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(212)
								int x = tmp31;		HX_STACK_VAR(x,"x");
								HX_STACK_LINE(214)
								{
									HX_STACK_LINE(214)
									int tmp32 = sourceFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(214)
									switch( (int)(tmp32)){
										case (int)2: {
											HX_STACK_LINE(214)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(214)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(214)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(214)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(214)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(214)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(214)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(214)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(214)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(214)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(214)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(214)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(214)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(214)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(214)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(214)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(214)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(214)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(214)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(214)
											sourcePixel = tmp50;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(214)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(214)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(214)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(214)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(214)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(214)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(214)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(214)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(214)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(214)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(214)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(214)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(214)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(214)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(214)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(214)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(214)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(214)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(214)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(214)
											sourcePixel = tmp50;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(214)
											int tmp33 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(214)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(214)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(214)
											int tmp35 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(214)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(214)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(214)
											int tmp37 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(214)
											int tmp39 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(214)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(214)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(214)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(214)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(214)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(214)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(214)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(214)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(214)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(214)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(214)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(214)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(214)
											sourcePixel = tmp50;
										}
										;break;
									}
									HX_STACK_LINE(214)
									bool tmp33 = sourcePremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(214)
									if ((tmp33)){
										HX_STACK_LINE(214)
										int tmp34 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(214)
										bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(214)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(214)
										if ((tmp35)){
											HX_STACK_LINE(214)
											int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											tmp36 = (tmp38 != (int)255);
										}
										else{
											HX_STACK_LINE(214)
											tmp36 = false;
										}
										HX_STACK_LINE(214)
										if ((tmp36)){
											HX_STACK_LINE(214)
											int tmp37 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(214)
											Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(214)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
											HX_STACK_LINE(214)
											{
												HX_STACK_LINE(214)
												Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(214)
												{
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(214)
													int tmp41 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(214)
													int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(214)
													Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(214)
													Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(214)
													int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(214)
													int idx = tmp45;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(214)
													int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(214)
													tmp39 = (int(tmp46) & int((int)255));
												}
												HX_STACK_LINE(214)
												int r = tmp39;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(214)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(214)
												{
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(214)
													int tmp42 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(214)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(214)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(214)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(214)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(214)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(214)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(214)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(214)
												int g = tmp40;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(214)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(214)
												{
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(214)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(214)
													int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(214)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(214)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(214)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(214)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(214)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(214)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(214)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(214)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(214)
												int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(214)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(214)
												int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(214)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(214)
												int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(214)
												int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(214)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(214)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(214)
												int tmp50 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(214)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(214)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(214)
												sourcePixel = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(215)
								{
									HX_STACK_LINE(215)
									int tmp32 = destFormat;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(215)
									switch( (int)(tmp32)){
										case (int)2: {
											HX_STACK_LINE(215)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(215)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(215)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(215)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(215)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(215)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(215)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(215)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(215)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(215)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(215)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(215)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(215)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(215)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(215)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(215)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(215)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(215)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(215)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(215)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(215)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(215)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(215)
											destPixel = tmp50;
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(215)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(215)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(215)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(215)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(215)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(215)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(215)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(215)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(215)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(215)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(215)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(215)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(215)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(215)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(215)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(215)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(215)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(215)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(215)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(215)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(215)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(215)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(215)
											destPixel = tmp50;
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(215)
											int tmp33 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(215)
											Dynamic tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(215)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(215)
											int tmp35 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(215)
											Dynamic tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(215)
											int g = tmp36;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(215)
											int tmp37 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(215)
											Dynamic tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(215)
											int b = tmp38;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(215)
											int tmp39 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(215)
											Dynamic tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(215)
											int a = tmp40;		HX_STACK_VAR(a,"a");
											HX_STACK_LINE(215)
											int tmp41 = (int(r) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(215)
											int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(215)
											int tmp43 = (int(g) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(215)
											int tmp44 = (int(tmp43) << int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(215)
											int tmp45 = (int(tmp42) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(215)
											int tmp46 = (int(b) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(215)
											int tmp47 = (int(tmp46) << int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(215)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(215)
											int tmp49 = (int(a) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(215)
											int tmp50 = (int(tmp48) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(215)
											destPixel = tmp50;
										}
										;break;
									}
									HX_STACK_LINE(215)
									bool tmp33 = destPremultiplied;		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(215)
									if ((tmp33)){
										HX_STACK_LINE(215)
										int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(215)
										bool tmp35 = (tmp34 != (int)0);		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(215)
										bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(215)
										if ((tmp35)){
											HX_STACK_LINE(215)
											int tmp37 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(215)
											int tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(215)
											tmp36 = (tmp38 != (int)255);
										}
										else{
											HX_STACK_LINE(215)
											tmp36 = false;
										}
										HX_STACK_LINE(215)
										if ((tmp36)){
											HX_STACK_LINE(215)
											int tmp37 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(215)
											Float tmp38 = (Float(((Float)255.0)) / Float(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(215)
											::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp38;
											HX_STACK_LINE(215)
											{
												HX_STACK_LINE(215)
												Dynamic tmp39;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													::lime::utils::ArrayBufferView tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp40,"tmp40");
													HX_STACK_LINE(215)
													::lime::utils::ArrayBufferView this1 = tmp40;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(215)
													int tmp41 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(215)
													int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(215)
													Float tmp43 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(215)
													Float tmp44 = (tmp42 * tmp43);		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(215)
													int tmp45 = ::Math_obj::round(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(215)
													int idx = tmp45;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(215)
													int tmp46 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(215)
													tmp39 = (int(tmp46) & int((int)255));
												}
												HX_STACK_LINE(215)
												int r = tmp39;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(215)
												Dynamic tmp40;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													::lime::utils::ArrayBufferView tmp41 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp41,"tmp41");
													HX_STACK_LINE(215)
													::lime::utils::ArrayBufferView this1 = tmp41;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(215)
													int tmp42 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(215)
													int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(215)
													Float tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(215)
													Float tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(215)
													int tmp46 = ::Math_obj::round(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(215)
													int idx = tmp46;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(215)
													int tmp47 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(215)
													tmp40 = (int(tmp47) & int((int)255));
												}
												HX_STACK_LINE(215)
												int g = tmp40;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(215)
												Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(215)
												{
													HX_STACK_LINE(215)
													::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
													HX_STACK_LINE(215)
													::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(215)
													int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
													HX_STACK_LINE(215)
													int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
													HX_STACK_LINE(215)
													Float tmp45 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp45,"tmp45");
													HX_STACK_LINE(215)
													Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
													HX_STACK_LINE(215)
													int tmp47 = ::Math_obj::round(tmp46);		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(215)
													int idx = tmp47;		HX_STACK_VAR(idx,"idx");
													HX_STACK_LINE(215)
													int tmp48 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(215)
													tmp41 = (int(tmp48) & int((int)255));
												}
												HX_STACK_LINE(215)
												int b = tmp41;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(215)
												int tmp42 = (int(r) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(215)
												int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(215)
												int tmp44 = (int(g) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(215)
												int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(215)
												int tmp46 = (int(tmp43) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(215)
												int tmp47 = (int(b) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(215)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(215)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(215)
												int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(215)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(215)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(215)
												destPixel = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(217)
								int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(217)
								Float tmp33 = (Float(tmp32) / Float(((Float)255.0)));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(217)
								sourceAlpha = tmp33;
								HX_STACK_LINE(218)
								int tmp34 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(218)
								Float tmp35 = (Float(tmp34) / Float(((Float)255.0)));		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(218)
								destAlpha = tmp35;
								HX_STACK_LINE(219)
								Float tmp36 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(219)
								oneMinusSourceAlpha = tmp36;
								HX_STACK_LINE(220)
								Float tmp37 = sourceAlpha;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(220)
								Float tmp38 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp38,"tmp38");
								HX_STACK_LINE(220)
								Float tmp39 = (tmp37 + tmp38);		HX_STACK_VAR(tmp39,"tmp39");
								HX_STACK_LINE(220)
								blendAlpha = tmp39;
								HX_STACK_LINE(222)
								bool tmp40 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp40,"tmp40");
								HX_STACK_LINE(222)
								if ((tmp40)){
									HX_STACK_LINE(224)
									destPixel = (int)0;
								}
								else{
									HX_STACK_LINE(228)
									{
										HX_STACK_LINE(228)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(228)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(228)
											int tmp43 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(228)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(228)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(228)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(228)
											int tmp47 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(228)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(228)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(228)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(228)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(228)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(228)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(228)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(228)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(228)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(228)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(228)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(228)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(228)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(228)
										{
											HX_STACK_LINE(228)
											int tmp42 = (int(value) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(228)
											int tmp43 = (int(tmp42) << int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(228)
											int tmp44 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(228)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(228)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(228)
											int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(228)
											int tmp48 = (int(tmp43) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(228)
											int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(228)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(228)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(228)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(228)
											int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(228)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(228)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(228)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(228)
											destPixel = tmp56;
										}
										HX_STACK_LINE(228)
										value;
									}
									HX_STACK_LINE(229)
									{
										HX_STACK_LINE(229)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(229)
										{
											HX_STACK_LINE(229)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(229)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(229)
											int tmp43 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(229)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(229)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(229)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(229)
											int tmp47 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(229)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(229)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(229)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(229)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(229)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(229)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(229)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(229)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(229)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(229)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(229)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(229)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(229)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(229)
										{
											HX_STACK_LINE(229)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(229)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(229)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(229)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(229)
											int tmp46 = (int(value) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(229)
											int tmp47 = (int(tmp46) << int((int)16));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(229)
											int tmp48 = (int(tmp45) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(229)
											int tmp49 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(229)
											int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(229)
											int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(229)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(229)
											int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(229)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(229)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(229)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(229)
											destPixel = tmp56;
										}
										HX_STACK_LINE(229)
										value;
									}
									HX_STACK_LINE(230)
									{
										HX_STACK_LINE(230)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(230)
										{
											HX_STACK_LINE(230)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(230)
											int tmp43 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											Float tmp45 = sourceAlpha;		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											Float tmp46 = (tmp44 * tmp45);		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											int tmp47 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(230)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(230)
											Float tmp49 = destAlpha;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(230)
											Float tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(230)
											Float tmp51 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(230)
											Float tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(230)
											Float tmp53 = (tmp46 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(230)
											Float tmp54 = blendAlpha;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(230)
											Float tmp55 = (Float(tmp53) / Float(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(230)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(230)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(230)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(230)
											tmp41 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(230)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(230)
										{
											HX_STACK_LINE(230)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(230)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(230)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(230)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(230)
											int tmp46 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(230)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(230)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(230)
											int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(230)
											int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(230)
											int tmp51 = (int(value) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(230)
											int tmp52 = (int(tmp51) << int((int)8));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(230)
											int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(230)
											int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(230)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(230)
											int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(230)
											destPixel = tmp56;
										}
										HX_STACK_LINE(230)
										value;
									}
									HX_STACK_LINE(231)
									{
										HX_STACK_LINE(231)
										Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(231)
										{
											HX_STACK_LINE(231)
											::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(231)
											::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(231)
											Float tmp43 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(231)
											int tmp44 = ::Math_obj::round(tmp43);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(231)
											int idx = tmp44;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(231)
											int tmp45 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(231)
											tmp41 = (int(tmp45) & int((int)255));
										}
										HX_STACK_LINE(231)
										int value = tmp41;		HX_STACK_VAR(value,"value");
										HX_STACK_LINE(231)
										{
											HX_STACK_LINE(231)
											int tmp42 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(231)
											int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(231)
											int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(231)
											int tmp45 = (int(tmp44) << int((int)24));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(231)
											int tmp46 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(231)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(231)
											int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(231)
											int tmp49 = (int(tmp48) << int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(231)
											int tmp50 = (int(tmp45) | int(tmp49));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(231)
											int tmp51 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(231)
											int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(231)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(231)
											int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(231)
											int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(231)
											int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(231)
											int tmp57 = (int(tmp55) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(231)
											destPixel = tmp57;
										}
										HX_STACK_LINE(231)
										value;
									}
								}
								HX_STACK_LINE(235)
								{
									HX_STACK_LINE(235)
									bool tmp41 = destPremultiplied;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(235)
									if ((tmp41)){
										HX_STACK_LINE(235)
										int tmp42 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(235)
										bool tmp43 = (tmp42 == (int)0);		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(235)
										if ((tmp43)){
											HX_STACK_LINE(235)
											bool tmp44 = (destPixel != (int)0);		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(235)
											if ((tmp44)){
												HX_STACK_LINE(235)
												destPixel = (int)0;
											}
										}
										else{
											HX_STACK_LINE(235)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(235)
											bool tmp45 = (tmp44 != (int)255);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(235)
											if ((tmp45)){
												HX_STACK_LINE(235)
												Dynamic tmp46;		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::lime::utils::ArrayBufferView tmp47 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(235)
													::lime::utils::ArrayBufferView this1 = tmp47;		HX_STACK_VAR(this1,"this1");
													HX_STACK_LINE(235)
													{
														HX_STACK_LINE(235)
														bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
														HX_STACK_LINE(235)
														tmp46 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
													}
												}
												HX_STACK_LINE(235)
												::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp46;
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													int tmp47 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
													HX_STACK_LINE(235)
													int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
													HX_STACK_LINE(235)
													int tmp49 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(235)
													int tmp50 = (tmp48 * tmp49);		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(235)
													int tmp51 = (int(tmp50) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(235)
													int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(235)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(235)
													int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(235)
													int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(235)
													int tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(235)
													int tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(235)
													int tmp58 = (int(tmp57) >> int((int)16));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(235)
													int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(235)
													int tmp60 = (int(tmp59) << int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(235)
													int tmp61 = (int(tmp53) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(235)
													int tmp62 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(235)
													int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(235)
													int tmp64 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(235)
													int tmp65 = (tmp63 * tmp64);		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(235)
													int tmp66 = (int(tmp65) >> int((int)16));		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(235)
													int tmp67 = (int(tmp66) & int((int)255));		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(235)
													int tmp68 = (int(tmp67) << int((int)8));		HX_STACK_VAR(tmp68,"tmp68");
													HX_STACK_LINE(235)
													int tmp69 = (int(tmp61) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
													HX_STACK_LINE(235)
													int tmp70 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
													HX_STACK_LINE(235)
													int tmp71 = (int(tmp70) & int((int)255));		HX_STACK_VAR(tmp71,"tmp71");
													HX_STACK_LINE(235)
													int tmp72 = (int(tmp69) | int(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
													HX_STACK_LINE(235)
													destPixel = tmp72;
												}
											}
										}
									}
									HX_STACK_LINE(235)
									int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(235)
									switch( (int)(tmp42)){
										case (int)2: {
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
										}
										;break;
										case (int)0: {
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int val = tmp43;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
											HX_STACK_LINE(235)
											{
												HX_STACK_LINE(235)
												int tmp43 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(235)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(235)
												int val = tmp44;		HX_STACK_VAR(val,"val");
												HX_STACK_LINE(235)
												{
													HX_STACK_LINE(235)
													::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
													HX_STACK_LINE(235)
													val;
												}
											}
										}
										;break;
									}
								}
								HX_STACK_LINE(237)
								hx::AddEq(sourcePosition,(int)4);
								HX_STACK_LINE(238)
								hx::AddEq(destPosition,(int)4);
							}
						}
					}
				}
				else{
					HX_STACK_LINE(246)
					bool tmp20 = (alphaPoint == null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(246)
					if ((tmp20)){
						HX_STACK_LINE(246)
						::lime::math::Vector2 tmp21 = ::lime::math::Vector2_obj::__new(null(),null());		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(246)
						alphaPoint = tmp21;
					}
					HX_STACK_LINE(248)
					::lime::utils::ArrayBufferView tmp21 = alphaImage->buffer->data;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(248)
					::lime::utils::ArrayBufferView alphaData = tmp21;		HX_STACK_VAR(alphaData,"alphaData");
					HX_STACK_LINE(249)
					int tmp22 = alphaImage->buffer->format;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(249)
					int alphaFormat = tmp22;		HX_STACK_VAR(alphaFormat,"alphaFormat");
					HX_STACK_LINE(250)
					bool tmp23 = alphaImage->buffer->premultiplied;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(250)
					bool alphaPremultiplied = tmp23;		HX_STACK_VAR(alphaPremultiplied,"alphaPremultiplied");
					HX_STACK_LINE(252)
					::lime::graphics::Image tmp24 = alphaImage;		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(252)
					::lime::math::Rectangle tmp25 = ::lime::math::Rectangle_obj::__new(alphaPoint->x,alphaPoint->y,destView->width,destView->height);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(252)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp26 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp24,tmp25);		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(252)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView alphaView = tmp26;		HX_STACK_VAR(alphaView,"alphaView");
					HX_STACK_LINE(253)
					int alphaPosition;		HX_STACK_VAR(alphaPosition,"alphaPosition");
					HX_STACK_LINE(253)
					int alphaPixel;		HX_STACK_VAR(alphaPixel,"alphaPixel");
					HX_STACK_LINE(255)
					{
						HX_STACK_LINE(255)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(255)
						int _g = alphaView->height;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(255)
						while((true)){
							HX_STACK_LINE(255)
							bool tmp27 = (_g1 < _g);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(255)
							bool tmp28 = !(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(255)
							if ((tmp28)){
								HX_STACK_LINE(255)
								break;
							}
							HX_STACK_LINE(255)
							int tmp29 = (_g1)++;		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(255)
							int y = tmp29;		HX_STACK_VAR(y,"y");
							HX_STACK_LINE(257)
							int tmp30 = sourceView->offset;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(257)
							int tmp31 = (sourceView->stride * y);		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(257)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(257)
							sourcePosition = tmp32;
							HX_STACK_LINE(258)
							int tmp33 = destView->offset;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(258)
							int tmp34 = (destView->stride * y);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(258)
							int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(258)
							destPosition = tmp35;
							HX_STACK_LINE(259)
							int tmp36 = alphaView->offset;		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(259)
							int tmp37 = (alphaView->stride * y);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(259)
							int tmp38 = (tmp36 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(259)
							alphaPosition = tmp38;
							HX_STACK_LINE(261)
							{
								HX_STACK_LINE(261)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(261)
								int _g2 = alphaView->width;		HX_STACK_VAR(_g2,"_g2");
								HX_STACK_LINE(261)
								while((true)){
									HX_STACK_LINE(261)
									bool tmp39 = (_g3 < _g2);		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(261)
									bool tmp40 = !(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(261)
									if ((tmp40)){
										HX_STACK_LINE(261)
										break;
									}
									HX_STACK_LINE(261)
									int tmp41 = (_g3)++;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(261)
									int x = tmp41;		HX_STACK_VAR(x,"x");
									HX_STACK_LINE(263)
									{
										HX_STACK_LINE(263)
										int tmp42 = sourceFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(263)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(263)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(263)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(263)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(263)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(263)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(263)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(263)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(263)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(263)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(263)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(263)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(263)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(263)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(263)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(263)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(263)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(263)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(263)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(263)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(263)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(263)
												sourcePixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(263)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(263)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(263)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(263)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(263)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(263)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(263)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(263)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(263)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(263)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(263)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(263)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(263)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(263)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(263)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(263)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(263)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(263)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(263)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(263)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(263)
												sourcePixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(263)
												int tmp43 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(263)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(263)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(263)
												int tmp45 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(263)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(263)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(263)
												int tmp47 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(263)
												int tmp49 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(263)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(263)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(263)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(263)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(263)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(263)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(263)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(263)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(263)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(263)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(263)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(263)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(263)
												sourcePixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(263)
										bool tmp43 = sourcePremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(263)
										if ((tmp43)){
											HX_STACK_LINE(263)
											int tmp44 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(263)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(263)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(263)
											if ((tmp45)){
												HX_STACK_LINE(263)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(263)
												tmp46 = false;
											}
											HX_STACK_LINE(263)
											if ((tmp46)){
												HX_STACK_LINE(263)
												int tmp47 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(263)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(263)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(263)
												{
													HX_STACK_LINE(263)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(263)
														int tmp51 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(263)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(263)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(263)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(263)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(263)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(263)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(263)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(263)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(263)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(263)
														int tmp52 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(263)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(263)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(263)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(263)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(263)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(263)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(263)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(263)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(263)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(263)
													{
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(263)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(263)
														int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(263)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(263)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(263)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(263)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(263)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(263)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(263)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(263)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(263)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(263)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(263)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(263)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(263)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(263)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(263)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(263)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(263)
													int tmp60 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(263)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(263)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(263)
													sourcePixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(264)
									{
										HX_STACK_LINE(264)
										int tmp42 = destFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(264)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(264)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(264)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(264)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(264)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(264)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(264)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(264)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(264)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(264)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(264)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(264)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(264)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(264)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(264)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(264)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(264)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(264)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(264)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(264)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(264)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(264)
												destPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(264)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(264)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(264)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(264)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(264)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(264)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(264)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(264)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(264)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(264)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(264)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(264)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(264)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(264)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(264)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(264)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(264)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(264)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(264)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(264)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(264)
												destPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(264)
												int tmp43 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(264)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(264)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(264)
												int tmp45 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(264)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(264)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(264)
												int tmp47 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(264)
												int tmp49 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(264)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(264)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(264)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(264)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(264)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(264)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(264)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(264)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(264)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(264)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(264)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(264)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(264)
												destPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(264)
										bool tmp43 = destPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(264)
										if ((tmp43)){
											HX_STACK_LINE(264)
											int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(264)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(264)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(264)
											if ((tmp45)){
												HX_STACK_LINE(264)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(264)
												tmp46 = false;
											}
											HX_STACK_LINE(264)
											if ((tmp46)){
												HX_STACK_LINE(264)
												int tmp47 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(264)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(264)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(264)
												{
													HX_STACK_LINE(264)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(264)
													{
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(264)
														int tmp51 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(264)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(264)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(264)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(264)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(264)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(264)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(264)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(264)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(264)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(264)
													{
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(264)
														int tmp52 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(264)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(264)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(264)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(264)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(264)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(264)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(264)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(264)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(264)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(264)
													{
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(264)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(264)
														int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(264)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(264)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(264)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(264)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(264)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(264)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(264)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(264)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(264)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(264)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(264)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(264)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(264)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(264)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(264)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(264)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(264)
													int tmp60 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(264)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(264)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(264)
													destPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(265)
									{
										HX_STACK_LINE(265)
										int tmp42 = alphaFormat;		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(265)
										switch( (int)(tmp42)){
											case (int)2: {
												HX_STACK_LINE(265)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(265)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(265)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(265)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(265)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(265)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(265)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(265)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(265)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(265)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(265)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(265)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(265)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(265)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(265)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(265)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(265)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(265)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(265)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(265)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(265)
												alphaPixel = tmp60;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(265)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(265)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(265)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(265)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(265)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(265)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(265)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(265)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(265)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(265)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(265)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(265)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(265)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(265)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(265)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(265)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(265)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(265)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(265)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(265)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(265)
												alphaPixel = tmp60;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(265)
												int tmp43 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)1))));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(265)
												Dynamic tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(265)
												int r = tmp44;		HX_STACK_VAR(r,"r");
												HX_STACK_LINE(265)
												int tmp45 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)2))));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(265)
												Dynamic tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(265)
												int g = tmp46;		HX_STACK_VAR(g,"g");
												HX_STACK_LINE(265)
												int tmp47 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + ((alphaPosition + (int)3))));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Dynamic tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												int b = tmp48;		HX_STACK_VAR(b,"b");
												HX_STACK_LINE(265)
												int tmp49 = ::__hxcpp_memory_get_byte(alphaData->buffer->b,(alphaData->byteOffset + alphaPosition));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(265)
												Dynamic tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(265)
												int a = tmp50;		HX_STACK_VAR(a,"a");
												HX_STACK_LINE(265)
												int tmp51 = (int(r) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(265)
												int tmp52 = (int(tmp51) << int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(265)
												int tmp53 = (int(g) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(265)
												int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(265)
												int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(265)
												int tmp56 = (int(b) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(265)
												int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(265)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(265)
												int tmp59 = (int(a) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(265)
												int tmp60 = (int(tmp58) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(265)
												alphaPixel = tmp60;
											}
											;break;
										}
										HX_STACK_LINE(265)
										bool tmp43 = alphaPremultiplied;		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(265)
										if ((tmp43)){
											HX_STACK_LINE(265)
											int tmp44 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(265)
											bool tmp45 = (tmp44 != (int)0);		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(265)
											bool tmp46;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(265)
											if ((tmp45)){
												HX_STACK_LINE(265)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												int tmp48 = tmp47;		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												tmp46 = (tmp48 != (int)255);
											}
											else{
												HX_STACK_LINE(265)
												tmp46 = false;
											}
											HX_STACK_LINE(265)
											if ((tmp46)){
												HX_STACK_LINE(265)
												int tmp47 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(265)
												Float tmp48 = (Float(((Float)255.0)) / Float(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(265)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp48;
												HX_STACK_LINE(265)
												{
													HX_STACK_LINE(265)
													Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
													HX_STACK_LINE(265)
													{
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp50,"tmp50");
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(265)
														int tmp51 = (int(alphaPixel) >> int((int)24));		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(265)
														int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(265)
														Float tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(265)
														Float tmp54 = (tmp52 * tmp53);		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(265)
														int tmp55 = ::Math_obj::round(tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(265)
														int idx = tmp55;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(265)
														int tmp56 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(265)
														tmp49 = (int(tmp56) & int((int)255));
													}
													HX_STACK_LINE(265)
													int r = tmp49;		HX_STACK_VAR(r,"r");
													HX_STACK_LINE(265)
													Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
													HX_STACK_LINE(265)
													{
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(265)
														int tmp52 = (int(alphaPixel) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(265)
														int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(265)
														Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(265)
														Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(265)
														int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(265)
														int idx = tmp56;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(265)
														int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(265)
														tmp50 = (int(tmp57) & int((int)255));
													}
													HX_STACK_LINE(265)
													int g = tmp50;		HX_STACK_VAR(g,"g");
													HX_STACK_LINE(265)
													Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
													HX_STACK_LINE(265)
													{
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
														HX_STACK_LINE(265)
														::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(265)
														int tmp53 = (int(alphaPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
														HX_STACK_LINE(265)
														int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
														HX_STACK_LINE(265)
														Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(265)
														Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(265)
														int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(265)
														int idx = tmp57;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(265)
														int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(265)
														tmp51 = (int(tmp58) & int((int)255));
													}
													HX_STACK_LINE(265)
													int b = tmp51;		HX_STACK_VAR(b,"b");
													HX_STACK_LINE(265)
													int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
													HX_STACK_LINE(265)
													int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(265)
													int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(265)
													int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(265)
													int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(265)
													int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(265)
													int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(265)
													int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(265)
													int tmp60 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(265)
													int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(265)
													int tmp62 = (int(tmp59) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(265)
													alphaPixel = tmp62;
												}
											}
										}
									}
									HX_STACK_LINE(267)
									int tmp42 = (int(alphaPixel) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(267)
									Float tmp43 = (Float(tmp42) / Float((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(267)
									sourceAlpha = tmp43;
									HX_STACK_LINE(268)
									int tmp44 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(268)
									Float tmp45 = (Float(tmp44) / Float((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(268)
									destAlpha = tmp45;
									HX_STACK_LINE(269)
									Float tmp46 = ((int)1 - sourceAlpha);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(269)
									oneMinusSourceAlpha = tmp46;
									HX_STACK_LINE(270)
									Float tmp47 = sourceAlpha;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(270)
									Float tmp48 = (destAlpha * oneMinusSourceAlpha);		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(270)
									Float tmp49 = (tmp47 + tmp48);		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(270)
									blendAlpha = tmp49;
									HX_STACK_LINE(272)
									bool tmp50 = (blendAlpha == (int)0);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(272)
									if ((tmp50)){
										HX_STACK_LINE(274)
										destPixel = (int)0;
									}
									else{
										HX_STACK_LINE(278)
										{
											HX_STACK_LINE(278)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(278)
											{
												HX_STACK_LINE(278)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(278)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(278)
												int tmp53 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(278)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(278)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(278)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(278)
												int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(278)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(278)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(278)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(278)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(278)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(278)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(278)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(278)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(278)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(278)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(278)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(278)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(278)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(278)
											{
												HX_STACK_LINE(278)
												int tmp52 = (int(value) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(278)
												int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(278)
												int tmp54 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(278)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(278)
												int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(278)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(278)
												int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(278)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(278)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(278)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(278)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(278)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(278)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(278)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(278)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(278)
												destPixel = tmp66;
											}
											HX_STACK_LINE(278)
											value;
										}
										HX_STACK_LINE(279)
										{
											HX_STACK_LINE(279)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(279)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(279)
												int tmp53 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(279)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(279)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(279)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(279)
												int tmp57 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(279)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(279)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(279)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(279)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(279)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(279)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(279)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(279)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(279)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(279)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(279)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(279)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(279)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(279)
											{
												HX_STACK_LINE(279)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(279)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(279)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(279)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(279)
												int tmp56 = (int(value) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(279)
												int tmp57 = (int(tmp56) << int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(279)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(279)
												int tmp59 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(279)
												int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(279)
												int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(279)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(279)
												int tmp63 = (int(tmp58) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(279)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(279)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(279)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(279)
												destPixel = tmp66;
											}
											HX_STACK_LINE(279)
											value;
										}
										HX_STACK_LINE(280)
										{
											HX_STACK_LINE(280)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(280)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(280)
												int tmp53 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(280)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(280)
												Float tmp55 = sourceAlpha;		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(280)
												Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(280)
												int tmp57 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(280)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(280)
												Float tmp59 = destAlpha;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(280)
												Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(280)
												Float tmp61 = oneMinusSourceAlpha;		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(280)
												Float tmp62 = (tmp60 * tmp61);		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(280)
												Float tmp63 = (tmp56 + tmp62);		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(280)
												Float tmp64 = blendAlpha;		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(280)
												Float tmp65 = (Float(tmp63) / Float(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(280)
												int tmp66 = ::Math_obj::round(tmp65);		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(280)
												int idx = tmp66;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(280)
												int tmp67 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(280)
												tmp51 = (int(tmp67) & int((int)255));
											}
											HX_STACK_LINE(280)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(280)
											{
												HX_STACK_LINE(280)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(280)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(280)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(280)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(280)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(280)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(280)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(280)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(280)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(280)
												int tmp61 = (int(value) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(280)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(280)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(280)
												int tmp64 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(280)
												int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(280)
												int tmp66 = (int(tmp63) | int(tmp65));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(280)
												destPixel = tmp66;
											}
											HX_STACK_LINE(280)
											value;
										}
										HX_STACK_LINE(281)
										{
											HX_STACK_LINE(281)
											Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(281)
											{
												HX_STACK_LINE(281)
												::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(281)
												::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(281)
												Float tmp53 = (blendAlpha * ((Float)255.0));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(281)
												int tmp54 = ::Math_obj::round(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(281)
												int idx = tmp54;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(281)
												int tmp55 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(281)
												tmp51 = (int(tmp55) & int((int)255));
											}
											HX_STACK_LINE(281)
											int value = tmp51;		HX_STACK_VAR(value,"value");
											HX_STACK_LINE(281)
											{
												HX_STACK_LINE(281)
												int tmp52 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(281)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(281)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(281)
												int tmp55 = (int(tmp54) << int((int)24));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(281)
												int tmp56 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(281)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(281)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(281)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(281)
												int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(281)
												int tmp61 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(281)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(281)
												int tmp63 = (int(tmp62) & int((int)255));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(281)
												int tmp64 = (int(tmp63) << int((int)8));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(281)
												int tmp65 = (int(tmp60) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(281)
												int tmp66 = (int(value) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(281)
												int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(281)
												destPixel = tmp67;
											}
											HX_STACK_LINE(281)
											value;
										}
									}
									HX_STACK_LINE(285)
									{
										HX_STACK_LINE(285)
										bool tmp51 = destPremultiplied;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(285)
										if ((tmp51)){
											HX_STACK_LINE(285)
											int tmp52 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(285)
											bool tmp53 = (tmp52 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(285)
											if ((tmp53)){
												HX_STACK_LINE(285)
												bool tmp54 = (destPixel != (int)0);		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(285)
												if ((tmp54)){
													HX_STACK_LINE(285)
													destPixel = (int)0;
												}
											}
											else{
												HX_STACK_LINE(285)
												int tmp54 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(285)
												bool tmp55 = (tmp54 != (int)255);		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(285)
												if ((tmp55)){
													HX_STACK_LINE(285)
													Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::lime::utils::ArrayBufferView tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(285)
														::lime::utils::ArrayBufferView this1 = tmp57;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(285)
														{
															HX_STACK_LINE(285)
															bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
															HX_STACK_LINE(285)
															tmp56 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
														}
													}
													HX_STACK_LINE(285)
													::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp56;
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														int tmp57 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(285)
														int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(285)
														int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(285)
														int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(285)
														int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(285)
														int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(285)
														int tmp63 = (int(tmp62) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(285)
														int tmp64 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
														HX_STACK_LINE(285)
														int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
														HX_STACK_LINE(285)
														int tmp66 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp66,"tmp66");
														HX_STACK_LINE(285)
														int tmp67 = (tmp65 * tmp66);		HX_STACK_VAR(tmp67,"tmp67");
														HX_STACK_LINE(285)
														int tmp68 = (int(tmp67) >> int((int)16));		HX_STACK_VAR(tmp68,"tmp68");
														HX_STACK_LINE(285)
														int tmp69 = (int(tmp68) & int((int)255));		HX_STACK_VAR(tmp69,"tmp69");
														HX_STACK_LINE(285)
														int tmp70 = (int(tmp69) << int((int)16));		HX_STACK_VAR(tmp70,"tmp70");
														HX_STACK_LINE(285)
														int tmp71 = (int(tmp63) | int(tmp70));		HX_STACK_VAR(tmp71,"tmp71");
														HX_STACK_LINE(285)
														int tmp72 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp72,"tmp72");
														HX_STACK_LINE(285)
														int tmp73 = (int(tmp72) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
														HX_STACK_LINE(285)
														int tmp74 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp74,"tmp74");
														HX_STACK_LINE(285)
														int tmp75 = (tmp73 * tmp74);		HX_STACK_VAR(tmp75,"tmp75");
														HX_STACK_LINE(285)
														int tmp76 = (int(tmp75) >> int((int)16));		HX_STACK_VAR(tmp76,"tmp76");
														HX_STACK_LINE(285)
														int tmp77 = (int(tmp76) & int((int)255));		HX_STACK_VAR(tmp77,"tmp77");
														HX_STACK_LINE(285)
														int tmp78 = (int(tmp77) << int((int)8));		HX_STACK_VAR(tmp78,"tmp78");
														HX_STACK_LINE(285)
														int tmp79 = (int(tmp71) | int(tmp78));		HX_STACK_VAR(tmp79,"tmp79");
														HX_STACK_LINE(285)
														int tmp80 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
														HX_STACK_LINE(285)
														int tmp81 = (int(tmp80) & int((int)255));		HX_STACK_VAR(tmp81,"tmp81");
														HX_STACK_LINE(285)
														int tmp82 = (int(tmp79) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
														HX_STACK_LINE(285)
														destPixel = tmp82;
													}
												}
											}
										}
										HX_STACK_LINE(285)
										int tmp52 = destFormat;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(285)
										switch( (int)(tmp52)){
											case (int)2: {
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int val = tmp53;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
												HX_STACK_LINE(285)
												{
													HX_STACK_LINE(285)
													int tmp53 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
													HX_STACK_LINE(285)
													int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(285)
													int val = tmp54;		HX_STACK_VAR(val,"val");
													HX_STACK_LINE(285)
													{
														HX_STACK_LINE(285)
														::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
														HX_STACK_LINE(285)
														val;
													}
												}
											}
											;break;
										}
									}
									HX_STACK_LINE(287)
									hx::AddEq(sourcePosition,(int)4);
									HX_STACK_LINE(288)
									hx::AddEq(destPosition,(int)4);
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(300)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,copyPixels,(void))

Void ImageDataUtil_obj::fillRect( ::lime::graphics::Image image,::lime::math::Rectangle rect,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","fillRect",0x163460f5,"lime.graphics.utils.ImageDataUtil.fillRect","lime/graphics/utils/ImageDataUtil.hx",305,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(307)
		int fillColor;		HX_STACK_VAR(fillColor,"fillColor");
		HX_STACK_LINE(309)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(309)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(311)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(311)
				{
					HX_STACK_LINE(311)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(311)
					{
						HX_STACK_LINE(311)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(311)
							tmp2 = rgba;
						}
						HX_STACK_LINE(311)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(311)
						{
							HX_STACK_LINE(311)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(311)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(311)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(311)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(311)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(311)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(311)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(311)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(311)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(311)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(311)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(311)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(311)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(311)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(311)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(311)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(311)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(311)
							rgba = tmp19;
						}
						HX_STACK_LINE(311)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(311)
				fillColor = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(312)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(312)
				{
					HX_STACK_LINE(312)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(312)
					{
						HX_STACK_LINE(312)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(312)
							tmp2 = rgba;
						}
						HX_STACK_LINE(312)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(312)
						{
							HX_STACK_LINE(312)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(312)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(312)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(312)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(312)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(312)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(312)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(312)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(312)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(312)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(312)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(312)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(312)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(312)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(312)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(312)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(312)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(312)
							rgba = tmp19;
						}
						HX_STACK_LINE(312)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(312)
				fillColor = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(313)
				fillColor = color;
			}
		}
		HX_STACK_LINE(317)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(317)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(317)
		if ((tmp2)){
			HX_STACK_LINE(319)
			{
				HX_STACK_LINE(319)
				int tmp3 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(319)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(319)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(319)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(319)
				int tmp7 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(319)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(319)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(319)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(319)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(319)
				int tmp12 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(319)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(319)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(319)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(319)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(319)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(319)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(319)
				fillColor = tmp18;
			}
			HX_STACK_LINE(319)
			(int)255;
		}
		HX_STACK_LINE(323)
		::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(323)
		::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(324)
		bool tmp4 = (data == null());		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(324)
		if ((tmp4)){
			HX_STACK_LINE(324)
			return null();
		}
		HX_STACK_LINE(327)
		bool tmp5 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(327)
		if ((tmp5)){
			HX_STACK_LINE(327)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),(int((int(fillColor) >> int((int)16))) & int((int)65535)),(int(fillColor) & int((int)65535)));
		}
		else{
			HX_STACK_LINE(331)
			int tmp6 = image->buffer->format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(331)
			int format1 = tmp6;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(332)
			bool tmp7 = image->buffer->premultiplied;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(332)
			bool premultiplied = tmp7;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(334)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(334)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp8;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(335)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(337)
			{
				HX_STACK_LINE(337)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(337)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(337)
				while((true)){
					HX_STACK_LINE(337)
					bool tmp9 = (_g1 < _g);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(337)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(337)
					if ((tmp10)){
						HX_STACK_LINE(337)
						break;
					}
					HX_STACK_LINE(337)
					int tmp11 = (_g1)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(337)
					int y = tmp11;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(339)
					int tmp12 = dataView->offset;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(339)
					int tmp13 = (dataView->stride * y);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(339)
					int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(339)
					row = tmp14;
					HX_STACK_LINE(341)
					{
						HX_STACK_LINE(341)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(341)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(341)
						while((true)){
							HX_STACK_LINE(341)
							bool tmp15 = (_g3 < _g2);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(341)
							bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(341)
							if ((tmp16)){
								HX_STACK_LINE(341)
								break;
							}
							HX_STACK_LINE(341)
							int tmp17 = (_g3)++;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(341)
							int x = tmp17;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(343)
							{
								HX_STACK_LINE(343)
								int tmp18 = row;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(343)
								int tmp19 = (x * (int)4);		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(343)
								int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(343)
								int offset = tmp20;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(343)
								bool tmp21 = premultiplied;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(343)
								if ((tmp21)){
									HX_STACK_LINE(343)
									int tmp22 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(343)
									bool tmp23 = (tmp22 == (int)0);		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(343)
									if ((tmp23)){
										HX_STACK_LINE(343)
										bool tmp24 = (fillColor != (int)0);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(343)
										if ((tmp24)){
											HX_STACK_LINE(343)
											fillColor = (int)0;
										}
									}
									else{
										HX_STACK_LINE(343)
										int tmp24 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(343)
										bool tmp25 = (tmp24 != (int)255);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(343)
										if ((tmp25)){
											HX_STACK_LINE(343)
											Dynamic tmp26;		HX_STACK_VAR(tmp26,"tmp26");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::lime::utils::ArrayBufferView tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(343)
												::lime::utils::ArrayBufferView this1 = tmp27;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(343)
												{
													HX_STACK_LINE(343)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(343)
													tmp26 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(343)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp26;
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												int tmp27 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
												HX_STACK_LINE(343)
												int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
												HX_STACK_LINE(343)
												int tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp29,"tmp29");
												HX_STACK_LINE(343)
												int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
												HX_STACK_LINE(343)
												int tmp31 = (int(tmp30) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
												HX_STACK_LINE(343)
												int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
												HX_STACK_LINE(343)
												int tmp33 = (int(tmp32) << int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(343)
												int tmp34 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(343)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(343)
												int tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(343)
												int tmp37 = (tmp35 * tmp36);		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(343)
												int tmp38 = (int(tmp37) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(343)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(343)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(343)
												int tmp41 = (int(tmp33) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(343)
												int tmp42 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(343)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(343)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(343)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(343)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(343)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(343)
												int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(343)
												int tmp49 = (int(tmp41) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(343)
												int tmp50 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(343)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(343)
												int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(343)
												fillColor = tmp52;
											}
										}
									}
								}
								HX_STACK_LINE(343)
								int tmp22 = format1;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(343)
								switch( (int)(tmp22)){
									case (int)2: {
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int val = tmp23;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
										HX_STACK_LINE(343)
										{
											HX_STACK_LINE(343)
											int tmp23 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
											HX_STACK_LINE(343)
											int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
											HX_STACK_LINE(343)
											int val = tmp24;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(343)
											{
												HX_STACK_LINE(343)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(343)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(351)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,fillRect,(void))

Void ImageDataUtil_obj::floodFill( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","floodFill",0xfbc79ff3,"lime.graphics.utils.ImageDataUtil.floodFill","lime/graphics/utils/ImageDataUtil.hx",356,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(358)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(358)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(359)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(359)
		if ((tmp1)){
			HX_STACK_LINE(359)
			return null();
		}
		HX_STACK_LINE(361)
		bool tmp2 = (format == (int)1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(361)
		if ((tmp2)){
			HX_STACK_LINE(361)
			int tmp3 = (int(color) & int((int)16777215));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(361)
			int tmp4 = (int(tmp3) << int((int)8));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(361)
			int tmp5 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(361)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(361)
			int tmp7 = (int(tmp4) | int(tmp6));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(361)
			color = tmp7;
		}
		HX_STACK_LINE(364)
		bool tmp3 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(364)
		if ((tmp3)){
			HX_STACK_LINE(364)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,(int((int(color) >> int((int)16))) & int((int)65535)),(int(color) & int((int)65535)));
		}
		else{
			HX_STACK_LINE(368)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(368)
			int format1 = tmp4;		HX_STACK_VAR(format1,"format1");
			HX_STACK_LINE(369)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(369)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(371)
			int fillColor = color;		HX_STACK_VAR(fillColor,"fillColor");
			HX_STACK_LINE(373)
			int hitColor;		HX_STACK_VAR(hitColor,"hitColor");
			HX_STACK_LINE(374)
			{
				HX_STACK_LINE(374)
				int tmp6 = (y + image->offsetY);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(374)
				int tmp7 = image->buffer->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(374)
				int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(374)
				int tmp9 = (tmp6 * tmp8);		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(374)
				int tmp10 = (x + image->offsetX);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(374)
				int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(374)
				int tmp12 = (tmp9 + tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(374)
				int offset = tmp12;		HX_STACK_VAR(offset,"offset");
				HX_STACK_LINE(374)
				int tmp13 = format1;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(374)
				switch( (int)(tmp13)){
					case (int)2: {
						HX_STACK_LINE(374)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(374)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(374)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(374)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(374)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(374)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(374)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(374)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(374)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(374)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(374)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(374)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(374)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(374)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(374)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(374)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(374)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(374)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(374)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(374)
						hitColor = tmp31;
					}
					;break;
					case (int)0: {
						HX_STACK_LINE(374)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(374)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(374)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(374)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(374)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(374)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(374)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(374)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(374)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(374)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(374)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(374)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(374)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(374)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(374)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(374)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(374)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(374)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(374)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(374)
						hitColor = tmp31;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(374)
						int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(374)
						Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(374)
						int r = tmp15;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(374)
						int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(374)
						Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(374)
						int g = tmp17;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(374)
						int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(374)
						Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(374)
						int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(374)
						Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(374)
						int a = tmp21;		HX_STACK_VAR(a,"a");
						HX_STACK_LINE(374)
						int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(374)
						int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(374)
						int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(374)
						int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(374)
						int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(374)
						int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(374)
						int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(374)
						int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(374)
						int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(374)
						int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(374)
						hitColor = tmp31;
					}
					;break;
				}
				HX_STACK_LINE(374)
				bool tmp14 = premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(374)
				if ((tmp14)){
					HX_STACK_LINE(374)
					int tmp15 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(374)
					bool tmp16 = (tmp15 != (int)0);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(374)
					bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(374)
					if ((tmp16)){
						HX_STACK_LINE(374)
						int tmp18 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(374)
						int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						tmp17 = (tmp19 != (int)255);
					}
					else{
						HX_STACK_LINE(374)
						tmp17 = false;
					}
					HX_STACK_LINE(374)
					if ((tmp17)){
						HX_STACK_LINE(374)
						int tmp18 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(374)
						Float tmp19 = (Float(((Float)255.0)) / Float(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(374)
						::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp19;
						HX_STACK_LINE(374)
						{
							HX_STACK_LINE(374)
							Dynamic tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								::lime::utils::ArrayBufferView tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(374)
								::lime::utils::ArrayBufferView this1 = tmp21;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(374)
								int tmp22 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(374)
								int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(374)
								Float tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(374)
								Float tmp25 = (tmp23 * tmp24);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(374)
								int tmp26 = ::Math_obj::round(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(374)
								int idx = tmp26;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(374)
								int tmp27 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(374)
								tmp20 = (int(tmp27) & int((int)255));
							}
							HX_STACK_LINE(374)
							int r = tmp20;		HX_STACK_VAR(r,"r");
							HX_STACK_LINE(374)
							Dynamic tmp21;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								::lime::utils::ArrayBufferView tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(374)
								::lime::utils::ArrayBufferView this1 = tmp22;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(374)
								int tmp23 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(374)
								int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(374)
								Float tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(374)
								Float tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(374)
								int tmp27 = ::Math_obj::round(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(374)
								int idx = tmp27;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(374)
								int tmp28 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(374)
								tmp21 = (int(tmp28) & int((int)255));
							}
							HX_STACK_LINE(374)
							int g = tmp21;		HX_STACK_VAR(g,"g");
							HX_STACK_LINE(374)
							Dynamic tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(374)
							{
								HX_STACK_LINE(374)
								::lime::utils::ArrayBufferView tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(374)
								::lime::utils::ArrayBufferView this1 = tmp23;		HX_STACK_VAR(this1,"this1");
								HX_STACK_LINE(374)
								int tmp24 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(374)
								int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(374)
								Float tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(374)
								Float tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(374)
								int tmp28 = ::Math_obj::round(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(374)
								int idx = tmp28;		HX_STACK_VAR(idx,"idx");
								HX_STACK_LINE(374)
								int tmp29 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(374)
								tmp22 = (int(tmp29) & int((int)255));
							}
							HX_STACK_LINE(374)
							int b = tmp22;		HX_STACK_VAR(b,"b");
							HX_STACK_LINE(374)
							int tmp23 = (int(r) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(374)
							int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(374)
							int tmp25 = (int(g) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(374)
							int tmp26 = (int(tmp25) << int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(374)
							int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(374)
							int tmp28 = (int(b) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(374)
							int tmp29 = (int(tmp28) << int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(374)
							int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(374)
							int tmp31 = (int(hitColor) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(374)
							int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(374)
							int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(374)
							hitColor = tmp33;
						}
					}
				}
			}
			HX_STACK_LINE(376)
			bool tmp6 = image->get_transparent();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(376)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(376)
			if ((tmp7)){
				HX_STACK_LINE(378)
				{
					HX_STACK_LINE(378)
					{
						HX_STACK_LINE(378)
						int tmp8 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(378)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(378)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(378)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(378)
						int tmp12 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(378)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(378)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(378)
						int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(378)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(378)
						int tmp17 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(378)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(378)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(378)
						int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(378)
						int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(378)
						int tmp22 = (int)255;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(378)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(378)
						fillColor = tmp23;
					}
					HX_STACK_LINE(378)
					(int)255;
				}
				HX_STACK_LINE(379)
				{
					HX_STACK_LINE(379)
					{
						HX_STACK_LINE(379)
						int tmp8 = (int(hitColor) >> int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(379)
						int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(379)
						int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(379)
						int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(379)
						int tmp12 = (int(hitColor) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(379)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(379)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(379)
						int tmp15 = (int(tmp14) << int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(379)
						int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(379)
						int tmp17 = (int(hitColor) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(379)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(379)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(379)
						int tmp20 = (int(tmp19) << int((int)8));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(379)
						int tmp21 = (int(tmp16) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(379)
						int tmp22 = (int)255;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(379)
						int tmp23 = (int(tmp21) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(379)
						hitColor = tmp23;
					}
					HX_STACK_LINE(379)
					(int)255;
				}
			}
			HX_STACK_LINE(383)
			bool tmp8 = (fillColor == hitColor);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(383)
			if ((tmp8)){
				HX_STACK_LINE(383)
				return null();
			}
			HX_STACK_LINE(385)
			Array< int > dx = Array_obj< int >::__new().Add((int)0).Add((int)-1).Add((int)1).Add((int)0);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(386)
			Array< int > dy = Array_obj< int >::__new().Add((int)-1).Add((int)0).Add((int)0).Add((int)1);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(388)
			int tmp9 = image->offsetX;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(388)
			int tmp10 = -(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(388)
			int minX = tmp10;		HX_STACK_VAR(minX,"minX");
			HX_STACK_LINE(389)
			int tmp11 = image->offsetY;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(389)
			int tmp12 = -(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(389)
			int minY = tmp12;		HX_STACK_VAR(minY,"minY");
			HX_STACK_LINE(390)
			int tmp13 = (minX + image->width);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(390)
			int maxX = tmp13;		HX_STACK_VAR(maxX,"maxX");
			HX_STACK_LINE(391)
			int tmp14 = (minY + image->height);		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(391)
			int maxY = tmp14;		HX_STACK_VAR(maxY,"maxY");
			HX_STACK_LINE(393)
			Array< int > queue = Array_obj< int >::__new();		HX_STACK_VAR(queue,"queue");
			HX_STACK_LINE(394)
			int tmp15 = x;		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(394)
			queue->push(tmp15);
			HX_STACK_LINE(395)
			int tmp16 = y;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(395)
			queue->push(tmp16);
			HX_STACK_LINE(397)
			Dynamic curPointX;		HX_STACK_VAR(curPointX,"curPointX");
			HX_STACK_LINE(397)
			Dynamic curPointY;		HX_STACK_VAR(curPointY,"curPointY");
			HX_STACK_LINE(397)
			int nextPointX;		HX_STACK_VAR(nextPointX,"nextPointX");
			HX_STACK_LINE(397)
			int nextPointY;		HX_STACK_VAR(nextPointY,"nextPointY");
			HX_STACK_LINE(397)
			int nextPointOffset;		HX_STACK_VAR(nextPointOffset,"nextPointOffset");
			HX_STACK_LINE(397)
			int readColor;		HX_STACK_VAR(readColor,"readColor");
			HX_STACK_LINE(399)
			while((true)){
				HX_STACK_LINE(399)
				bool tmp17 = (queue->length > (int)0);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(399)
				bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(399)
				if ((tmp18)){
					HX_STACK_LINE(399)
					break;
				}
				HX_STACK_LINE(401)
				Dynamic tmp19 = queue->pop();		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(401)
				curPointY = tmp19;
				HX_STACK_LINE(402)
				Dynamic tmp20 = queue->pop();		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(402)
				curPointX = tmp20;
				HX_STACK_LINE(404)
				{
					HX_STACK_LINE(404)
					int _g = (int)0;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(404)
					while((true)){
						HX_STACK_LINE(404)
						bool tmp21 = (_g < (int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(404)
						bool tmp22 = !(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(404)
						if ((tmp22)){
							HX_STACK_LINE(404)
							break;
						}
						HX_STACK_LINE(404)
						int tmp23 = (_g)++;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(404)
						int i = tmp23;		HX_STACK_VAR(i,"i");
						HX_STACK_LINE(406)
						Dynamic tmp24 = curPointX;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(406)
						int tmp25 = dx->__get(i);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(406)
						int tmp26 = (tmp24 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(406)
						nextPointX = tmp26;
						HX_STACK_LINE(407)
						Dynamic tmp27 = curPointY;		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(407)
						int tmp28 = dy->__get(i);		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(407)
						int tmp29 = (tmp27 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(407)
						nextPointY = tmp29;
						HX_STACK_LINE(409)
						bool tmp30 = (nextPointX < minX);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(409)
						bool tmp31 = !(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(409)
						bool tmp32 = tmp31;		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(409)
						bool tmp33;		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(409)
						if ((tmp32)){
							HX_STACK_LINE(409)
							tmp33 = (nextPointY < minY);
						}
						else{
							HX_STACK_LINE(409)
							tmp33 = true;
						}
						HX_STACK_LINE(409)
						bool tmp34 = !(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(409)
						bool tmp35 = tmp34;		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(409)
						bool tmp36;		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(409)
						if ((tmp35)){
							HX_STACK_LINE(409)
							tmp36 = (nextPointX >= maxX);
						}
						else{
							HX_STACK_LINE(409)
							tmp36 = true;
						}
						HX_STACK_LINE(409)
						bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(409)
						bool tmp38;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(409)
						if ((tmp37)){
							HX_STACK_LINE(409)
							tmp38 = (nextPointY >= maxY);
						}
						else{
							HX_STACK_LINE(409)
							tmp38 = true;
						}
						HX_STACK_LINE(409)
						if ((tmp38)){
							HX_STACK_LINE(411)
							continue;
						}
						HX_STACK_LINE(415)
						int tmp39 = (nextPointY * image->width);		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(415)
						int tmp40 = nextPointX;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(415)
						int tmp41 = (tmp39 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
						HX_STACK_LINE(415)
						int tmp42 = (tmp41 * (int)4);		HX_STACK_VAR(tmp42,"tmp42");
						HX_STACK_LINE(415)
						nextPointOffset = tmp42;
						HX_STACK_LINE(416)
						{
							HX_STACK_LINE(416)
							int tmp43 = format1;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(416)
							switch( (int)(tmp43)){
								case (int)2: {
									HX_STACK_LINE(416)
									int tmp44 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(416)
									Dynamic tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(416)
									int r = tmp45;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(416)
									int tmp46 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(416)
									Dynamic tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(416)
									int g = tmp47;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(416)
									int tmp48 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(416)
									Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(416)
									int b = tmp49;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(416)
									int tmp50 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(416)
									Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(416)
									int a = tmp51;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(416)
									int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(416)
									int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(416)
									int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(416)
									int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(416)
									int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(416)
									int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(416)
									int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(416)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(416)
									int tmp60 = (int(a) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(416)
									int tmp61 = (int(tmp59) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(416)
									readColor = tmp61;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(416)
									int tmp44 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(416)
									Dynamic tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(416)
									int r = tmp45;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(416)
									int tmp46 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(416)
									Dynamic tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(416)
									int g = tmp47;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(416)
									int tmp48 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(416)
									Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(416)
									int b = tmp49;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(416)
									int tmp50 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(416)
									Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(416)
									int a = tmp51;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(416)
									int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(416)
									int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(416)
									int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(416)
									int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(416)
									int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(416)
									int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(416)
									int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(416)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(416)
									int tmp60 = (int(a) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(416)
									int tmp61 = (int(tmp59) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(416)
									readColor = tmp61;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(416)
									int tmp44 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(416)
									Dynamic tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(416)
									int r = tmp45;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(416)
									int tmp46 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(416)
									Dynamic tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(416)
									int g = tmp47;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(416)
									int tmp48 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(416)
									Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(416)
									int b = tmp49;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(416)
									int tmp50 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + nextPointOffset));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(416)
									Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(416)
									int a = tmp51;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(416)
									int tmp52 = (int(r) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(416)
									int tmp53 = (int(tmp52) << int((int)24));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(416)
									int tmp54 = (int(g) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(416)
									int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(416)
									int tmp56 = (int(tmp53) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(416)
									int tmp57 = (int(b) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(416)
									int tmp58 = (int(tmp57) << int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(416)
									int tmp59 = (int(tmp56) | int(tmp58));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(416)
									int tmp60 = (int(a) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(416)
									int tmp61 = (int(tmp59) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(416)
									readColor = tmp61;
								}
								;break;
							}
							HX_STACK_LINE(416)
							bool tmp44 = premultiplied;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(416)
							if ((tmp44)){
								HX_STACK_LINE(416)
								int tmp45 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(416)
								bool tmp46 = (tmp45 != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(416)
								bool tmp47;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(416)
								if ((tmp46)){
									HX_STACK_LINE(416)
									int tmp48 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(416)
									int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(416)
									tmp47 = (tmp49 != (int)255);
								}
								else{
									HX_STACK_LINE(416)
									tmp47 = false;
								}
								HX_STACK_LINE(416)
								if ((tmp47)){
									HX_STACK_LINE(416)
									int tmp48 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(416)
									Float tmp49 = (Float(((Float)255.0)) / Float(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(416)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp49;
									HX_STACK_LINE(416)
									{
										HX_STACK_LINE(416)
										Dynamic tmp50;		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											::lime::utils::ArrayBufferView tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(416)
											::lime::utils::ArrayBufferView this1 = tmp51;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(416)
											int tmp52 = (int(readColor) >> int((int)24));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(416)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											Float tmp54 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											Float tmp55 = (tmp53 * tmp54);		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(416)
											int tmp56 = ::Math_obj::round(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(416)
											int idx = tmp56;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(416)
											int tmp57 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(416)
											tmp50 = (int(tmp57) & int((int)255));
										}
										HX_STACK_LINE(416)
										int r = tmp50;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(416)
										Dynamic tmp51;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											::lime::utils::ArrayBufferView tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(416)
											::lime::utils::ArrayBufferView this1 = tmp52;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(416)
											int tmp53 = (int(readColor) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											Float tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(416)
											Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(416)
											int tmp57 = ::Math_obj::round(tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(416)
											int idx = tmp57;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(416)
											int tmp58 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(416)
											tmp51 = (int(tmp58) & int((int)255));
										}
										HX_STACK_LINE(416)
										int g = tmp51;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(416)
										Dynamic tmp52;		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(416)
										{
											HX_STACK_LINE(416)
											::lime::utils::ArrayBufferView tmp53 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(416)
											::lime::utils::ArrayBufferView this1 = tmp53;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(416)
											int tmp54 = (int(readColor) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(416)
											int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(416)
											Float tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(416)
											Float tmp57 = (tmp55 * tmp56);		HX_STACK_VAR(tmp57,"tmp57");
											HX_STACK_LINE(416)
											int tmp58 = ::Math_obj::round(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
											HX_STACK_LINE(416)
											int idx = tmp58;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(416)
											int tmp59 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp59,"tmp59");
											HX_STACK_LINE(416)
											tmp52 = (int(tmp59) & int((int)255));
										}
										HX_STACK_LINE(416)
										int b = tmp52;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(416)
										int tmp53 = (int(r) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(416)
										int tmp54 = (int(tmp53) << int((int)24));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(416)
										int tmp55 = (int(g) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(416)
										int tmp56 = (int(tmp55) << int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(416)
										int tmp57 = (int(tmp54) | int(tmp56));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(416)
										int tmp58 = (int(b) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(416)
										int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(416)
										int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(416)
										int tmp61 = (int(readColor) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(416)
										int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(416)
										int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
										HX_STACK_LINE(416)
										readColor = tmp63;
									}
								}
							}
						}
						HX_STACK_LINE(418)
						bool tmp43 = (readColor == hitColor);		HX_STACK_VAR(tmp43,"tmp43");
						HX_STACK_LINE(418)
						if ((tmp43)){
							HX_STACK_LINE(420)
							{
								HX_STACK_LINE(420)
								bool tmp44 = premultiplied;		HX_STACK_VAR(tmp44,"tmp44");
								HX_STACK_LINE(420)
								if ((tmp44)){
									HX_STACK_LINE(420)
									int tmp45 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(420)
									bool tmp46 = (tmp45 == (int)0);		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(420)
									if ((tmp46)){
										HX_STACK_LINE(420)
										bool tmp47 = (fillColor != (int)0);		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(420)
										if ((tmp47)){
											HX_STACK_LINE(420)
											fillColor = (int)0;
										}
									}
									else{
										HX_STACK_LINE(420)
										int tmp47 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(420)
										bool tmp48 = (tmp47 != (int)255);		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(420)
										if ((tmp48)){
											HX_STACK_LINE(420)
											Dynamic tmp49;		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::lime::utils::ArrayBufferView tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(420)
												::lime::utils::ArrayBufferView this1 = tmp50;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(420)
												{
													HX_STACK_LINE(420)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(420)
													tmp49 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(fillColor) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(420)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp49;
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												int tmp50 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(420)
												int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(420)
												int tmp52 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(420)
												int tmp53 = (tmp51 * tmp52);		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(420)
												int tmp54 = (int(tmp53) >> int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(420)
												int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(420)
												int tmp56 = (int(tmp55) << int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(420)
												int tmp57 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(420)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(420)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(420)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(420)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(420)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(420)
												int tmp63 = (int(tmp62) << int((int)16));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(420)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(420)
												int tmp65 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(420)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(420)
												int tmp67 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(420)
												int tmp68 = (tmp66 * tmp67);		HX_STACK_VAR(tmp68,"tmp68");
												HX_STACK_LINE(420)
												int tmp69 = (int(tmp68) >> int((int)16));		HX_STACK_VAR(tmp69,"tmp69");
												HX_STACK_LINE(420)
												int tmp70 = (int(tmp69) & int((int)255));		HX_STACK_VAR(tmp70,"tmp70");
												HX_STACK_LINE(420)
												int tmp71 = (int(tmp70) << int((int)8));		HX_STACK_VAR(tmp71,"tmp71");
												HX_STACK_LINE(420)
												int tmp72 = (int(tmp64) | int(tmp71));		HX_STACK_VAR(tmp72,"tmp72");
												HX_STACK_LINE(420)
												int tmp73 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp73,"tmp73");
												HX_STACK_LINE(420)
												int tmp74 = (int(tmp73) & int((int)255));		HX_STACK_VAR(tmp74,"tmp74");
												HX_STACK_LINE(420)
												int tmp75 = (int(tmp72) | int(tmp74));		HX_STACK_VAR(tmp75,"tmp75");
												HX_STACK_LINE(420)
												fillColor = tmp75;
											}
										}
									}
								}
								HX_STACK_LINE(420)
								int tmp45 = format1;		HX_STACK_VAR(tmp45,"tmp45");
								HX_STACK_LINE(420)
								switch( (int)(tmp45)){
									case (int)2: {
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int val = tmp46;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + nextPointOffset),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)1))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)2))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
										HX_STACK_LINE(420)
										{
											HX_STACK_LINE(420)
											int tmp46 = (int(fillColor) >> int((int)8));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(420)
											int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(420)
											int val = tmp47;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(420)
											{
												HX_STACK_LINE(420)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((nextPointOffset + (int)3))),val);
												HX_STACK_LINE(420)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(422)
							int tmp44 = nextPointX;		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(422)
							queue->push(tmp44);
							HX_STACK_LINE(423)
							int tmp45 = nextPointY;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(423)
							queue->push(tmp45);
						}
					}
				}
			}
		}
		HX_STACK_LINE(433)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,floodFill,(void))

::lime::math::Rectangle ImageDataUtil_obj::getColorBoundsRect( ::lime::graphics::Image image,int mask,int color,hx::Null< bool >  __o_findColor,int format){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getColorBoundsRect",0xfea06eb4,"lime.graphics.utils.ImageDataUtil.getColorBoundsRect","lime/graphics/utils/ImageDataUtil.hx",438,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
	HX_STACK_ARG(format,"format")
{
		HX_STACK_LINE(440)
		int tmp = (image->width + (int)1);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(440)
		int left = tmp;		HX_STACK_VAR(left,"left");
		HX_STACK_LINE(441)
		int right = (int)0;		HX_STACK_VAR(right,"right");
		HX_STACK_LINE(442)
		int tmp1 = (image->height + (int)1);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(442)
		int top = tmp1;		HX_STACK_VAR(top,"top");
		HX_STACK_LINE(443)
		int bottom = (int)0;		HX_STACK_VAR(bottom,"bottom");
		HX_STACK_LINE(445)
		int _color;		HX_STACK_VAR(_color,"_color");
		HX_STACK_LINE(445)
		int _mask;		HX_STACK_VAR(_mask,"_mask");
		HX_STACK_LINE(447)
		int tmp2 = format;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(447)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(451)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(451)
				{
					HX_STACK_LINE(451)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(451)
					{
						HX_STACK_LINE(451)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(451)
							tmp4 = rgba;
						}
						HX_STACK_LINE(451)
						int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(451)
						{
							HX_STACK_LINE(451)
							int tmp5 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(451)
							int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(451)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(451)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(451)
							int tmp9 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(451)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(451)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(451)
							int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(451)
							int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(451)
							int tmp14 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(451)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(451)
							int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(451)
							int tmp17 = (int(tmp13) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(451)
							int tmp18 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(451)
							int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(451)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(451)
							int tmp21 = (int(tmp17) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(451)
							rgba = tmp21;
						}
						HX_STACK_LINE(451)
						tmp3 = rgba;
					}
				}
				HX_STACK_LINE(451)
				_color = tmp3;
				HX_STACK_LINE(452)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(452)
				{
					HX_STACK_LINE(452)
					int argb = mask;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(452)
					{
						HX_STACK_LINE(452)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(452)
						{
							HX_STACK_LINE(452)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(452)
							tmp5 = rgba;
						}
						HX_STACK_LINE(452)
						int rgba = tmp5;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(452)
						{
							HX_STACK_LINE(452)
							int tmp6 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(452)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(452)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(452)
							int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(452)
							int tmp10 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(452)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(452)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(452)
							int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(452)
							int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(452)
							int tmp15 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(452)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(452)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(452)
							int tmp18 = (int(tmp14) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(452)
							int tmp19 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(452)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(452)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(452)
							int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(452)
							rgba = tmp22;
						}
						HX_STACK_LINE(452)
						tmp4 = rgba;
					}
				}
				HX_STACK_LINE(452)
				_mask = tmp4;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(456)
				int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(456)
				{
					HX_STACK_LINE(456)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(456)
					{
						HX_STACK_LINE(456)
						int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(456)
							tmp4 = rgba;
						}
						HX_STACK_LINE(456)
						int rgba = tmp4;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(456)
						{
							HX_STACK_LINE(456)
							int tmp5 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(456)
							int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(456)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(456)
							int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(456)
							int tmp9 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(456)
							int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(456)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(456)
							int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(456)
							int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(456)
							int tmp14 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(456)
							int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(456)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(456)
							int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(456)
							int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(456)
							int tmp19 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(456)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(456)
							int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(456)
							rgba = tmp21;
						}
						HX_STACK_LINE(456)
						tmp3 = rgba;
					}
				}
				HX_STACK_LINE(456)
				_color = tmp3;
				HX_STACK_LINE(457)
				int tmp4;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(457)
				{
					HX_STACK_LINE(457)
					int bgra = mask;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(457)
					{
						HX_STACK_LINE(457)
						int tmp5;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(457)
							tmp5 = rgba;
						}
						HX_STACK_LINE(457)
						int rgba = tmp5;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(457)
						{
							HX_STACK_LINE(457)
							int tmp6 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(457)
							int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(457)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(457)
							int tmp9 = (int(tmp8) << int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(457)
							int tmp10 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(457)
							int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(457)
							int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(457)
							int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(457)
							int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(457)
							int tmp15 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(457)
							int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(457)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(457)
							int tmp18 = (int(tmp17) << int((int)8));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(457)
							int tmp19 = (int(tmp14) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(457)
							int tmp20 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(457)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(457)
							int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(457)
							rgba = tmp22;
						}
						HX_STACK_LINE(457)
						tmp4 = rgba;
					}
				}
				HX_STACK_LINE(457)
				_mask = tmp4;
			}
			;break;
			default: {
				HX_STACK_LINE(461)
				_color = color;
				HX_STACK_LINE(462)
				_mask = mask;
			}
		}
		HX_STACK_LINE(466)
		bool tmp3 = image->get_transparent();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(466)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(466)
		if ((tmp4)){
			HX_STACK_LINE(468)
			{
				HX_STACK_LINE(468)
				{
					HX_STACK_LINE(468)
					int tmp5 = (int(_color) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(468)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(468)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(468)
					int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(468)
					int tmp9 = (int(_color) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(468)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(468)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(468)
					int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(468)
					int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(468)
					int tmp14 = (int(_color) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(468)
					int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(468)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(468)
					int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(468)
					int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(468)
					int tmp19 = (int)255;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(468)
					int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(468)
					_color = tmp20;
				}
				HX_STACK_LINE(468)
				(int)255;
			}
			HX_STACK_LINE(469)
			{
				HX_STACK_LINE(469)
				{
					HX_STACK_LINE(469)
					int tmp5 = (int(_mask) >> int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(469)
					int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(469)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(469)
					int tmp8 = (int(tmp7) << int((int)24));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(469)
					int tmp9 = (int(_mask) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(469)
					int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(469)
					int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(469)
					int tmp12 = (int(tmp11) << int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(469)
					int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(469)
					int tmp14 = (int(_mask) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(469)
					int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(469)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(469)
					int tmp17 = (int(tmp16) << int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(469)
					int tmp18 = (int(tmp13) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(469)
					int tmp19 = (int)255;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(469)
					int tmp20 = (int(tmp18) | int(tmp19));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(469)
					_mask = tmp20;
				}
				HX_STACK_LINE(469)
				(int)255;
			}
		}
		HX_STACK_LINE(473)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(473)
		bool hit;		HX_STACK_VAR(hit,"hit");
		HX_STACK_LINE(475)
		{
			HX_STACK_LINE(475)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(475)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(475)
			while((true)){
				HX_STACK_LINE(475)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(475)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(475)
				if ((tmp6)){
					HX_STACK_LINE(475)
					break;
				}
				HX_STACK_LINE(475)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(475)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(477)
				hit = false;
				HX_STACK_LINE(479)
				{
					HX_STACK_LINE(479)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(479)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(479)
					while((true)){
						HX_STACK_LINE(479)
						bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(479)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(479)
						if ((tmp9)){
							HX_STACK_LINE(479)
							break;
						}
						HX_STACK_LINE(479)
						int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(479)
						int y = tmp10;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(481)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(481)
						int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(481)
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(481)
						pixel = tmp13;
						HX_STACK_LINE(482)
						bool tmp14 = findColor;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(482)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(482)
						if ((tmp14)){
							HX_STACK_LINE(482)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(482)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(482)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(482)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(482)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(482)
							tmp15 = (tmp16 != tmp17);
						}
						HX_STACK_LINE(482)
						hit = tmp15;
						HX_STACK_LINE(484)
						bool tmp16 = hit;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(484)
						if ((tmp16)){
							HX_STACK_LINE(486)
							bool tmp17 = (x < left);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(486)
							if ((tmp17)){
								HX_STACK_LINE(486)
								left = x;
							}
							HX_STACK_LINE(487)
							break;
						}
					}
				}
				HX_STACK_LINE(493)
				bool tmp8 = hit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(493)
				if ((tmp8)){
					HX_STACK_LINE(495)
					break;
				}
			}
		}
		HX_STACK_LINE(501)
		int ix;		HX_STACK_VAR(ix,"ix");
		HX_STACK_LINE(503)
		{
			HX_STACK_LINE(503)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(503)
			int _g = image->width;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(503)
			while((true)){
				HX_STACK_LINE(503)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(503)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(503)
				if ((tmp6)){
					HX_STACK_LINE(503)
					break;
				}
				HX_STACK_LINE(503)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(503)
				int x = tmp7;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(505)
				int tmp8 = (image->width - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(505)
				int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(505)
				int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(505)
				ix = tmp10;
				HX_STACK_LINE(506)
				hit = false;
				HX_STACK_LINE(508)
				{
					HX_STACK_LINE(508)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(508)
					int _g2 = image->height;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(508)
					while((true)){
						HX_STACK_LINE(508)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(508)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(508)
						if ((tmp12)){
							HX_STACK_LINE(508)
							break;
						}
						HX_STACK_LINE(508)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(508)
						int y = tmp13;		HX_STACK_VAR(y,"y");
						HX_STACK_LINE(510)
						int tmp14 = ix;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(510)
						int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(510)
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(510)
						pixel = tmp16;
						HX_STACK_LINE(511)
						bool tmp17 = findColor;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(511)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(511)
						if ((tmp17)){
							HX_STACK_LINE(511)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(511)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(511)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(511)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(511)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(511)
							tmp18 = (tmp19 != tmp20);
						}
						HX_STACK_LINE(511)
						hit = tmp18;
						HX_STACK_LINE(513)
						bool tmp19 = hit;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(513)
						if ((tmp19)){
							HX_STACK_LINE(515)
							bool tmp20 = (ix > right);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(515)
							if ((tmp20)){
								HX_STACK_LINE(515)
								right = ix;
							}
							HX_STACK_LINE(516)
							break;
						}
					}
				}
				HX_STACK_LINE(522)
				bool tmp11 = hit;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(522)
				if ((tmp11)){
					HX_STACK_LINE(524)
					break;
				}
			}
		}
		HX_STACK_LINE(530)
		{
			HX_STACK_LINE(530)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(530)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(530)
			while((true)){
				HX_STACK_LINE(530)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(530)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(530)
				if ((tmp6)){
					HX_STACK_LINE(530)
					break;
				}
				HX_STACK_LINE(530)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(530)
				int y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(532)
				hit = false;
				HX_STACK_LINE(534)
				{
					HX_STACK_LINE(534)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(534)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(534)
					while((true)){
						HX_STACK_LINE(534)
						bool tmp8 = (_g3 < _g2);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(534)
						bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(534)
						if ((tmp9)){
							HX_STACK_LINE(534)
							break;
						}
						HX_STACK_LINE(534)
						int tmp10 = (_g3)++;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(534)
						int x = tmp10;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(536)
						int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(536)
						int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(536)
						int tmp13 = image->getPixel32(tmp11,tmp12,(int)0);		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(536)
						pixel = tmp13;
						HX_STACK_LINE(537)
						bool tmp14 = findColor;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(537)
						bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(537)
						if ((tmp14)){
							HX_STACK_LINE(537)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(537)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(537)
							tmp15 = (tmp16 == tmp17);
						}
						else{
							HX_STACK_LINE(537)
							int tmp16 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(537)
							int tmp17 = _color;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(537)
							tmp15 = (tmp16 != tmp17);
						}
						HX_STACK_LINE(537)
						hit = tmp15;
						HX_STACK_LINE(539)
						bool tmp16 = hit;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(539)
						if ((tmp16)){
							HX_STACK_LINE(541)
							bool tmp17 = (y < top);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(541)
							if ((tmp17)){
								HX_STACK_LINE(541)
								top = y;
							}
							HX_STACK_LINE(542)
							break;
						}
					}
				}
				HX_STACK_LINE(548)
				bool tmp8 = hit;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(548)
				if ((tmp8)){
					HX_STACK_LINE(550)
					break;
				}
			}
		}
		HX_STACK_LINE(556)
		int iy;		HX_STACK_VAR(iy,"iy");
		HX_STACK_LINE(558)
		{
			HX_STACK_LINE(558)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(558)
			int _g = image->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(558)
			while((true)){
				HX_STACK_LINE(558)
				bool tmp5 = (_g1 < _g);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(558)
				bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(558)
				if ((tmp6)){
					HX_STACK_LINE(558)
					break;
				}
				HX_STACK_LINE(558)
				int tmp7 = (_g1)++;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(558)
				int y = tmp7;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(560)
				int tmp8 = (image->height - (int)1);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(560)
				int tmp9 = y;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(560)
				int tmp10 = (tmp8 - tmp9);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(560)
				iy = tmp10;
				HX_STACK_LINE(561)
				hit = false;
				HX_STACK_LINE(563)
				{
					HX_STACK_LINE(563)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(563)
					int _g2 = image->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(563)
					while((true)){
						HX_STACK_LINE(563)
						bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(563)
						bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(563)
						if ((tmp12)){
							HX_STACK_LINE(563)
							break;
						}
						HX_STACK_LINE(563)
						int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(563)
						int x = tmp13;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(565)
						int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(565)
						int tmp15 = iy;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(565)
						int tmp16 = image->getPixel32(tmp14,tmp15,(int)0);		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(565)
						pixel = tmp16;
						HX_STACK_LINE(566)
						bool tmp17 = findColor;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(566)
						bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(566)
						if ((tmp17)){
							HX_STACK_LINE(566)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(566)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(566)
							tmp18 = (tmp19 == tmp20);
						}
						else{
							HX_STACK_LINE(566)
							int tmp19 = (int(pixel) & int(_mask));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(566)
							int tmp20 = _color;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(566)
							tmp18 = (tmp19 != tmp20);
						}
						HX_STACK_LINE(566)
						hit = tmp18;
						HX_STACK_LINE(568)
						bool tmp19 = hit;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(568)
						if ((tmp19)){
							HX_STACK_LINE(570)
							bool tmp20 = (iy > bottom);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(570)
							if ((tmp20)){
								HX_STACK_LINE(570)
								bottom = iy;
							}
							HX_STACK_LINE(571)
							break;
						}
					}
				}
				HX_STACK_LINE(577)
				bool tmp11 = hit;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(577)
				if ((tmp11)){
					HX_STACK_LINE(579)
					break;
				}
			}
		}
		HX_STACK_LINE(585)
		int tmp5 = (right - left);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(585)
		int w = tmp5;		HX_STACK_VAR(w,"w");
		HX_STACK_LINE(586)
		int tmp6 = (bottom - top);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(586)
		int h = tmp6;		HX_STACK_VAR(h,"h");
		HX_STACK_LINE(588)
		bool tmp7 = (w > (int)0);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(588)
		if ((tmp7)){
			HX_STACK_LINE(588)
			(w)++;
		}
		HX_STACK_LINE(589)
		bool tmp8 = (h > (int)0);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(589)
		if ((tmp8)){
			HX_STACK_LINE(589)
			(h)++;
		}
		HX_STACK_LINE(591)
		bool tmp9 = (w < (int)0);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(591)
		if ((tmp9)){
			HX_STACK_LINE(591)
			w = (int)0;
		}
		HX_STACK_LINE(592)
		bool tmp10 = (h < (int)0);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(592)
		if ((tmp10)){
			HX_STACK_LINE(592)
			h = (int)0;
		}
		HX_STACK_LINE(594)
		bool tmp11 = (left == right);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(594)
		if ((tmp11)){
			HX_STACK_LINE(594)
			w = (int)1;
		}
		HX_STACK_LINE(595)
		bool tmp12 = (top == bottom);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(595)
		if ((tmp12)){
			HX_STACK_LINE(595)
			h = (int)1;
		}
		HX_STACK_LINE(597)
		bool tmp13 = (left > image->width);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(597)
		if ((tmp13)){
			HX_STACK_LINE(597)
			left = (int)0;
		}
		HX_STACK_LINE(598)
		bool tmp14 = (top > image->height);		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(598)
		if ((tmp14)){
			HX_STACK_LINE(598)
			top = (int)0;
		}
		HX_STACK_LINE(600)
		::lime::math::Rectangle tmp15 = ::lime::math::Rectangle_obj::__new(left,top,w,h);		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(600)
		return tmp15;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,getColorBoundsRect,return )

int ImageDataUtil_obj::getPixel( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel",0xcbf5f1be,"lime.graphics.utils.ImageDataUtil.getPixel","lime/graphics/utils/ImageDataUtil.hx",605,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(607)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(609)
	{
		HX_STACK_LINE(609)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(609)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(609)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(609)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(609)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(609)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(609)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(609)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(609)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(609)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(609)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(609)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(609)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(609)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(609)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(609)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(609)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(609)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(609)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(609)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(609)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(609)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(609)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(609)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(609)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(609)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(609)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(609)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(609)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(609)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(609)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(609)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(609)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(609)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(609)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(609)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(609)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(609)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(609)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(609)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(609)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(609)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(609)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(609)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(609)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(609)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(609)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(609)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(609)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(609)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(609)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(609)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(609)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(609)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(609)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(609)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(609)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(609)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(609)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(609)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(609)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(609)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(609)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(609)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(609)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(609)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(609)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(609)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(609)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(609)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(609)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(609)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(609)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(609)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(609)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(609)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(609)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(609)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(609)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(609)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(609)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(609)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(609)
		if ((tmp9)){
			HX_STACK_LINE(609)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(609)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(609)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(609)
			if ((tmp11)){
				HX_STACK_LINE(609)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(609)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(609)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(609)
				tmp12 = false;
			}
			HX_STACK_LINE(609)
			if ((tmp12)){
				HX_STACK_LINE(609)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(609)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(609)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(609)
				{
					HX_STACK_LINE(609)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(609)
					{
						HX_STACK_LINE(609)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(609)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(609)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(609)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(609)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(609)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(609)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(609)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(609)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(609)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(609)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(609)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(609)
					{
						HX_STACK_LINE(609)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(609)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(609)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(609)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(609)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(609)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(609)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(609)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(609)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(609)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(609)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(609)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(609)
					{
						HX_STACK_LINE(609)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(609)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(609)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(609)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(609)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(609)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(609)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(609)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(609)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(609)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(609)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(609)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(609)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(609)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(609)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(609)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(609)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(609)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(609)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(609)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(609)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(609)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(609)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(610)
	{
		HX_STACK_LINE(610)
		{
			HX_STACK_LINE(610)
			int tmp = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
			HX_STACK_LINE(610)
			int tmp1 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(610)
			int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(610)
			int tmp3 = (int(tmp2) << int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(610)
			int tmp4 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(610)
			int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(610)
			int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(610)
			int tmp7 = (int(tmp6) << int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(610)
			int tmp8 = (int(tmp3) | int(tmp7));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(610)
			int tmp9 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(610)
			int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(610)
			int tmp11 = (int(tmp10) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(610)
			int tmp12 = (int(tmp11) << int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(610)
			int tmp13 = (int(tmp8) | int(tmp12));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(610)
			int tmp14 = (int)0;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(610)
			int tmp15 = (int(tmp13) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(610)
			pixel = tmp15;
		}
		HX_STACK_LINE(610)
		(int)0;
	}
	HX_STACK_LINE(612)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(612)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(614)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(614)
			{
				HX_STACK_LINE(614)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(614)
					tmp2 = argb;
				}
				HX_STACK_LINE(614)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(614)
				{
					HX_STACK_LINE(614)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(614)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(614)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(614)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(614)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(614)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(614)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(614)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(614)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(614)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(614)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(614)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(614)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(614)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(614)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(614)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(614)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(614)
					argb = tmp19;
				}
				HX_STACK_LINE(614)
				tmp1 = argb;
			}
			HX_STACK_LINE(614)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(614)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(615)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(615)
			{
				HX_STACK_LINE(615)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(615)
				{
					HX_STACK_LINE(615)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(615)
					tmp2 = bgra;
				}
				HX_STACK_LINE(615)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(615)
				{
					HX_STACK_LINE(615)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(615)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(615)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(615)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(615)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(615)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(615)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(615)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(615)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(615)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(615)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(615)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(615)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(615)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(615)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(615)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(615)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(615)
					bgra = tmp19;
				}
				HX_STACK_LINE(615)
				tmp1 = bgra;
			}
			HX_STACK_LINE(615)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(615)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(616)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(616)
			return tmp1;
		}
	}
	HX_STACK_LINE(612)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel,return )

int ImageDataUtil_obj::getPixel32( ::lime::graphics::Image image,int x,int y,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixel32",0x2aa489dd,"lime.graphics.utils.ImageDataUtil.getPixel32","lime/graphics/utils/ImageDataUtil.hx",623,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(625)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(627)
	{
		HX_STACK_LINE(627)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(627)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(627)
		int tmp1 = (y + image->offsetY);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(627)
		int tmp2 = ((int)4 * tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(627)
		int tmp3 = image->buffer->width;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(627)
		int tmp4 = (tmp2 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(627)
		int tmp5 = (x + image->offsetX);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(627)
		int tmp6 = (tmp5 * (int)4);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(627)
		int tmp7 = (tmp4 + tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(627)
		int offset = tmp7;		HX_STACK_VAR(offset,"offset");
		HX_STACK_LINE(627)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(627)
		switch( (int)(tmp8)){
			case (int)2: {
				HX_STACK_LINE(627)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(627)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(627)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(627)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(627)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(627)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(627)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(627)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(627)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(627)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(627)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(627)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(627)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(627)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(627)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(627)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(627)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(627)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(627)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(627)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(627)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(627)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(627)
				pixel = tmp26;
			}
			;break;
			case (int)0: {
				HX_STACK_LINE(627)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(627)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(627)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(627)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(627)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(627)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(627)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(627)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(627)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(627)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(627)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(627)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(627)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(627)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(627)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(627)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(627)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(627)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(627)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(627)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(627)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(627)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(627)
				pixel = tmp26;
			}
			;break;
			case (int)1: {
				HX_STACK_LINE(627)
				int tmp9 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(627)
				Dynamic tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(627)
				int r = tmp10;		HX_STACK_VAR(r,"r");
				HX_STACK_LINE(627)
				int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(627)
				Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(627)
				int g = tmp12;		HX_STACK_VAR(g,"g");
				HX_STACK_LINE(627)
				int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(627)
				Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(627)
				int b = tmp14;		HX_STACK_VAR(b,"b");
				HX_STACK_LINE(627)
				int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(627)
				Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(627)
				int a = tmp16;		HX_STACK_VAR(a,"a");
				HX_STACK_LINE(627)
				int tmp17 = (int(r) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(627)
				int tmp18 = (int(tmp17) << int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(627)
				int tmp19 = (int(g) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(627)
				int tmp20 = (int(tmp19) << int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(627)
				int tmp21 = (int(tmp18) | int(tmp20));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(627)
				int tmp22 = (int(b) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(627)
				int tmp23 = (int(tmp22) << int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(627)
				int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(627)
				int tmp25 = (int(a) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(627)
				int tmp26 = (int(tmp24) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(627)
				pixel = tmp26;
			}
			;break;
		}
		HX_STACK_LINE(627)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(627)
		if ((tmp9)){
			HX_STACK_LINE(627)
			int tmp10 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(627)
			bool tmp11 = (tmp10 != (int)0);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(627)
			bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(627)
			if ((tmp11)){
				HX_STACK_LINE(627)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(627)
				int tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(627)
				tmp12 = (tmp14 != (int)255);
			}
			else{
				HX_STACK_LINE(627)
				tmp12 = false;
			}
			HX_STACK_LINE(627)
			if ((tmp12)){
				HX_STACK_LINE(627)
				int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(627)
				Float tmp14 = (Float(((Float)255.0)) / Float(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(627)
				::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp14;
				HX_STACK_LINE(627)
				{
					HX_STACK_LINE(627)
					Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(627)
					{
						HX_STACK_LINE(627)
						::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(627)
						::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(627)
						int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(627)
						int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(627)
						Float tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(627)
						Float tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(627)
						int tmp21 = ::Math_obj::round(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(627)
						int idx = tmp21;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(627)
						int tmp22 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(627)
						tmp15 = (int(tmp22) & int((int)255));
					}
					HX_STACK_LINE(627)
					int r = tmp15;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(627)
					Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(627)
					{
						HX_STACK_LINE(627)
						::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(627)
						::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(627)
						int tmp18 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(627)
						int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(627)
						Float tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(627)
						Float tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(627)
						int tmp22 = ::Math_obj::round(tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(627)
						int idx = tmp22;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(627)
						int tmp23 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(627)
						tmp16 = (int(tmp23) & int((int)255));
					}
					HX_STACK_LINE(627)
					int g = tmp16;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(627)
					Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(627)
					{
						HX_STACK_LINE(627)
						::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(627)
						::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
						HX_STACK_LINE(627)
						int tmp19 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(627)
						int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(627)
						Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(627)
						Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(627)
						int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(627)
						int idx = tmp23;		HX_STACK_VAR(idx,"idx");
						HX_STACK_LINE(627)
						int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(627)
						tmp17 = (int(tmp24) & int((int)255));
					}
					HX_STACK_LINE(627)
					int b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(627)
					int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(627)
					int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(627)
					int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(627)
					int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(627)
					int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(627)
					int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(627)
					int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(627)
					int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(627)
					int tmp26 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(627)
					int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(627)
					int tmp28 = (int(tmp25) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(627)
					pixel = tmp28;
				}
			}
		}
	}
	HX_STACK_LINE(629)
	int tmp = format;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(629)
	switch( (int)(tmp)){
		case (int)1: {
			HX_STACK_LINE(631)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(631)
			{
				HX_STACK_LINE(631)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(631)
				{
					HX_STACK_LINE(631)
					int argb = (int)0;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(631)
					tmp2 = argb;
				}
				HX_STACK_LINE(631)
				int argb = tmp2;		HX_STACK_VAR(argb,"argb");
				HX_STACK_LINE(631)
				{
					HX_STACK_LINE(631)
					int tmp3 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(631)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(631)
					int tmp5 = (int(tmp4) << int((int)24));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(631)
					int tmp6 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(631)
					int tmp7 = (int(tmp6) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(631)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(631)
					int tmp9 = (int(tmp8) << int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(631)
					int tmp10 = (int(tmp5) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(631)
					int tmp11 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(631)
					int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(631)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(631)
					int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(631)
					int tmp15 = (int(tmp10) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(631)
					int tmp16 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(631)
					int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(631)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(631)
					int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(631)
					argb = tmp19;
				}
				HX_STACK_LINE(631)
				tmp1 = argb;
			}
			HX_STACK_LINE(631)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(631)
			return tmp2;
		}
		;break;
		case (int)2: {
			HX_STACK_LINE(632)
			int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(632)
			{
				HX_STACK_LINE(632)
				int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(632)
				{
					HX_STACK_LINE(632)
					int bgra = (int)0;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(632)
					tmp2 = bgra;
				}
				HX_STACK_LINE(632)
				int bgra = tmp2;		HX_STACK_VAR(bgra,"bgra");
				HX_STACK_LINE(632)
				{
					HX_STACK_LINE(632)
					int tmp3 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
					HX_STACK_LINE(632)
					int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(632)
					int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(632)
					int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(632)
					int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(632)
					int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(632)
					int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(632)
					int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(632)
					int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(632)
					int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(632)
					int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(632)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(632)
					int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(632)
					int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(632)
					int tmp17 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(632)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(632)
					int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(632)
					bgra = tmp19;
				}
				HX_STACK_LINE(632)
				tmp1 = bgra;
			}
			HX_STACK_LINE(632)
			int tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(632)
			return tmp2;
		}
		;break;
		default: {
			HX_STACK_LINE(633)
			int tmp1 = pixel;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(633)
			return tmp1;
		}
	}
	HX_STACK_LINE(629)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,getPixel32,return )

::haxe::io::Bytes ImageDataUtil_obj::getPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,int format){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","getPixels",0xab3d94f5,"lime.graphics.utils.ImageDataUtil.getPixels","lime/graphics/utils/ImageDataUtil.hx",640,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(format,"format")
	HX_STACK_LINE(642)
	::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(642)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(642)
	if ((tmp1)){
		HX_STACK_LINE(642)
		return null();
	}
	HX_STACK_LINE(644)
	Float tmp2 = (rect->width * rect->height);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(644)
	int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(644)
	int length = tmp3;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(645)
	int tmp4 = (length * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(645)
	::haxe::io::Bytes tmp5 = ::haxe::io::Bytes_obj::alloc(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(645)
	::haxe::io::Bytes bytes = tmp5;		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(648)
	bool tmp6 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(648)
	if ((tmp6)){
		HX_STACK_LINE(648)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
	else{
		HX_STACK_LINE(652)
		::lime::utils::ArrayBufferView tmp7 = image->buffer->data;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(652)
		::lime::utils::ArrayBufferView data = tmp7;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(653)
		int tmp8 = image->buffer->format;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(653)
		int sourceFormat = tmp8;		HX_STACK_VAR(sourceFormat,"sourceFormat");
		HX_STACK_LINE(654)
		bool tmp9 = image->buffer->premultiplied;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(654)
		bool premultiplied = tmp9;		HX_STACK_VAR(premultiplied,"premultiplied");
		HX_STACK_LINE(656)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp10 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(656)
		::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp10;		HX_STACK_VAR(dataView,"dataView");
		HX_STACK_LINE(657)
		int position;		HX_STACK_VAR(position,"position");
		HX_STACK_LINE(657)
		int argb;		HX_STACK_VAR(argb,"argb");
		HX_STACK_LINE(657)
		int bgra;		HX_STACK_VAR(bgra,"bgra");
		HX_STACK_LINE(657)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(658)
		int destPosition = (int)0;		HX_STACK_VAR(destPosition,"destPosition");
		HX_STACK_LINE(660)
		{
			HX_STACK_LINE(660)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(660)
			int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(660)
			while((true)){
				HX_STACK_LINE(660)
				bool tmp11 = (_g1 < _g);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(660)
				bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(660)
				if ((tmp12)){
					HX_STACK_LINE(660)
					break;
				}
				HX_STACK_LINE(660)
				int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(660)
				int y = tmp13;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(662)
				int tmp14 = dataView->offset;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(662)
				int tmp15 = (dataView->stride * y);		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(662)
				int tmp16 = (tmp14 + tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(662)
				position = tmp16;
				HX_STACK_LINE(664)
				{
					HX_STACK_LINE(664)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(664)
					int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(664)
					while((true)){
						HX_STACK_LINE(664)
						bool tmp17 = (_g3 < _g2);		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(664)
						bool tmp18 = !(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(664)
						if ((tmp18)){
							HX_STACK_LINE(664)
							break;
						}
						HX_STACK_LINE(664)
						int tmp19 = (_g3)++;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(664)
						int x = tmp19;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(666)
						{
							HX_STACK_LINE(666)
							int tmp20 = sourceFormat;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(666)
							switch( (int)(tmp20)){
								case (int)2: {
									HX_STACK_LINE(666)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(666)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(666)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(666)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(666)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(666)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(666)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(666)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(666)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(666)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(666)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(666)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(666)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(666)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(666)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(666)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(666)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(666)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(666)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(666)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(666)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(666)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(666)
									pixel = tmp38;
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(666)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(666)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(666)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(666)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(666)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(666)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(666)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(666)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(666)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(666)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(666)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(666)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(666)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(666)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(666)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(666)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(666)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(666)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(666)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(666)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(666)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(666)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(666)
									pixel = tmp38;
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(666)
									int tmp21 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)1))));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(666)
									Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(666)
									int r = tmp22;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(666)
									int tmp23 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)2))));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(666)
									Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(666)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(666)
									int tmp25 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((position + (int)3))));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(666)
									Dynamic tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(666)
									int b = tmp26;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(666)
									int tmp27 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + position));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(666)
									Dynamic tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(666)
									int a = tmp28;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(666)
									int tmp29 = (int(r) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(666)
									int tmp30 = (int(tmp29) << int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(666)
									int tmp31 = (int(g) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(666)
									int tmp32 = (int(tmp31) << int((int)16));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(666)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(666)
									int tmp34 = (int(b) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(666)
									int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(666)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(666)
									int tmp37 = (int(a) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(666)
									int tmp38 = (int(tmp36) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(666)
									pixel = tmp38;
								}
								;break;
							}
							HX_STACK_LINE(666)
							bool tmp21 = premultiplied;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(666)
							if ((tmp21)){
								HX_STACK_LINE(666)
								int tmp22 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(666)
								bool tmp23 = (tmp22 != (int)0);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(666)
								bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(666)
								if ((tmp23)){
									HX_STACK_LINE(666)
									int tmp25 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(666)
									int tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(666)
									tmp24 = (tmp26 != (int)255);
								}
								else{
									HX_STACK_LINE(666)
									tmp24 = false;
								}
								HX_STACK_LINE(666)
								if ((tmp24)){
									HX_STACK_LINE(666)
									int tmp25 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(666)
									Float tmp26 = (Float(((Float)255.0)) / Float(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(666)
									::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp26;
									HX_STACK_LINE(666)
									{
										HX_STACK_LINE(666)
										Dynamic tmp27;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(666)
										{
											HX_STACK_LINE(666)
											::lime::utils::ArrayBufferView tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp28,"tmp28");
											HX_STACK_LINE(666)
											::lime::utils::ArrayBufferView this1 = tmp28;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(666)
											int tmp29 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(666)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(666)
											Float tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(666)
											Float tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(666)
											int tmp33 = ::Math_obj::round(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(666)
											int idx = tmp33;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(666)
											int tmp34 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(666)
											tmp27 = (int(tmp34) & int((int)255));
										}
										HX_STACK_LINE(666)
										int r = tmp27;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(666)
										Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(666)
										{
											HX_STACK_LINE(666)
											::lime::utils::ArrayBufferView tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(666)
											::lime::utils::ArrayBufferView this1 = tmp29;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(666)
											int tmp30 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(666)
											int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(666)
											Float tmp32 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(666)
											Float tmp33 = (tmp31 * tmp32);		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(666)
											int tmp34 = ::Math_obj::round(tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(666)
											int idx = tmp34;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(666)
											int tmp35 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(666)
											tmp28 = (int(tmp35) & int((int)255));
										}
										HX_STACK_LINE(666)
										int g = tmp28;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(666)
										Dynamic tmp29;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(666)
										{
											HX_STACK_LINE(666)
											::lime::utils::ArrayBufferView tmp30 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(666)
											::lime::utils::ArrayBufferView this1 = tmp30;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(666)
											int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(666)
											int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(666)
											Float tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(666)
											Float tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(666)
											int tmp35 = ::Math_obj::round(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(666)
											int idx = tmp35;		HX_STACK_VAR(idx,"idx");
											HX_STACK_LINE(666)
											int tmp36 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(666)
											tmp29 = (int(tmp36) & int((int)255));
										}
										HX_STACK_LINE(666)
										int b = tmp29;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(666)
										int tmp30 = (int(r) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(666)
										int tmp31 = (int(tmp30) << int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(666)
										int tmp32 = (int(g) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(666)
										int tmp33 = (int(tmp32) << int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(666)
										int tmp34 = (int(tmp31) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(666)
										int tmp35 = (int(b) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(666)
										int tmp36 = (int(tmp35) << int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(666)
										int tmp37 = (int(tmp34) | int(tmp36));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(666)
										int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(666)
										int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(666)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(666)
										pixel = tmp40;
									}
								}
							}
						}
						HX_STACK_LINE(668)
						int tmp20 = format;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(668)
						switch( (int)(tmp20)){
							case (int)1: {
								HX_STACK_LINE(670)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(670)
								{
									HX_STACK_LINE(670)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(670)
									{
										HX_STACK_LINE(670)
										int argb1 = (int)0;		HX_STACK_VAR(argb1,"argb1");
										HX_STACK_LINE(670)
										tmp22 = argb1;
									}
									HX_STACK_LINE(670)
									int argb1 = tmp22;		HX_STACK_VAR(argb1,"argb1");
									HX_STACK_LINE(670)
									{
										HX_STACK_LINE(670)
										int tmp23 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(670)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(670)
										int tmp25 = (int(tmp24) << int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(670)
										int tmp26 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(670)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(670)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(670)
										int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(670)
										int tmp30 = (int(tmp25) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(670)
										int tmp31 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(670)
										int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(670)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(670)
										int tmp34 = (int(tmp33) << int((int)8));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(670)
										int tmp35 = (int(tmp30) | int(tmp34));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(670)
										int tmp36 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(670)
										int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(670)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(670)
										int tmp39 = (int(tmp35) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(670)
										argb1 = tmp39;
									}
									HX_STACK_LINE(670)
									tmp21 = argb1;
								}
								HX_STACK_LINE(670)
								argb = tmp21;
								HX_STACK_LINE(670)
								pixel = argb;
							}
							;break;
							case (int)2: {
								HX_STACK_LINE(671)
								int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(671)
								{
									HX_STACK_LINE(671)
									int tmp22;		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(671)
									{
										HX_STACK_LINE(671)
										int bgra1 = (int)0;		HX_STACK_VAR(bgra1,"bgra1");
										HX_STACK_LINE(671)
										tmp22 = bgra1;
									}
									HX_STACK_LINE(671)
									int bgra1 = tmp22;		HX_STACK_VAR(bgra1,"bgra1");
									HX_STACK_LINE(671)
									{
										HX_STACK_LINE(671)
										int tmp23 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(671)
										int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(671)
										int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(671)
										int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(671)
										int tmp27 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(671)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(671)
										int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(671)
										int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(671)
										int tmp31 = (int(tmp26) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(671)
										int tmp32 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(671)
										int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(671)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(671)
										int tmp35 = (int(tmp34) << int((int)8));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(671)
										int tmp36 = (int(tmp31) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(671)
										int tmp37 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(671)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(671)
										int tmp39 = (int(tmp36) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(671)
										bgra1 = tmp39;
									}
									HX_STACK_LINE(671)
									tmp21 = bgra1;
								}
								HX_STACK_LINE(671)
								bgra = tmp21;
								HX_STACK_LINE(671)
								pixel = bgra;
							}
							;break;
							default: {
							}
						}
						HX_STACK_LINE(676)
						{
							HX_STACK_LINE(676)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(676)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(676)
							int tmp22 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(676)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(676)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(677)
						{
							HX_STACK_LINE(677)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(677)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(677)
							int tmp22 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(677)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(677)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(678)
						{
							HX_STACK_LINE(678)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(678)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(678)
							int tmp22 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(678)
							int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(678)
							bytes->b[pos] = tmp23;
						}
						HX_STACK_LINE(679)
						{
							HX_STACK_LINE(679)
							int tmp21 = (destPosition)++;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(679)
							int pos = tmp21;		HX_STACK_VAR(pos,"pos");
							HX_STACK_LINE(679)
							int tmp22 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(679)
							bytes->b[pos] = tmp22;
						}
						HX_STACK_LINE(681)
						hx::AddEq(position,(int)4);
					}
				}
			}
		}
	}
	HX_STACK_LINE(689)
	::haxe::io::Bytes tmp7 = bytes;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(689)
	return tmp7;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,getPixels,return )

Void ImageDataUtil_obj::merge( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","merge",0xf0318e4a,"lime.graphics.utils.ImageDataUtil.merge","lime/graphics/utils/ImageDataUtil.hx",694,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(696)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(696)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(696)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(696)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(696)
		if ((tmp2)){
			HX_STACK_LINE(696)
			::lime::utils::ArrayBufferView tmp4 = sourceImage->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(696)
			::lime::utils::ArrayBufferView tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(696)
			tmp3 = (tmp5 == null());
		}
		else{
			HX_STACK_LINE(696)
			tmp3 = true;
		}
		HX_STACK_LINE(696)
		if ((tmp3)){
			HX_STACK_LINE(696)
			return null();
		}
		HX_STACK_LINE(699)
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(699)
		if ((tmp4)){
			HX_STACK_LINE(699)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
		}
		else{
			HX_STACK_LINE(703)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp5 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(703)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView sourceView = tmp5;		HX_STACK_VAR(sourceView,"sourceView");
			HX_STACK_LINE(704)
			::lime::graphics::Image tmp6 = image;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(704)
			::lime::math::Rectangle tmp7 = ::lime::math::Rectangle_obj::__new(destPoint->x,destPoint->y,sourceView->width,sourceView->height);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(704)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp8 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(tmp6,tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(704)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView destView = tmp8;		HX_STACK_VAR(destView,"destView");
			HX_STACK_LINE(706)
			::lime::utils::ArrayBufferView tmp9 = sourceImage->buffer->data;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(706)
			::lime::utils::ArrayBufferView sourceData = tmp9;		HX_STACK_VAR(sourceData,"sourceData");
			HX_STACK_LINE(707)
			::lime::utils::ArrayBufferView tmp10 = image->buffer->data;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(707)
			::lime::utils::ArrayBufferView destData = tmp10;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(708)
			int tmp11 = sourceImage->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(708)
			int sourceFormat = tmp11;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(709)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(709)
			int destFormat = tmp12;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(710)
			bool tmp13 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(710)
			bool sourcePremultiplied = tmp13;		HX_STACK_VAR(sourcePremultiplied,"sourcePremultiplied");
			HX_STACK_LINE(711)
			bool tmp14 = image->buffer->premultiplied;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(711)
			bool destPremultiplied = tmp14;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(713)
			int sourcePosition;		HX_STACK_VAR(sourcePosition,"sourcePosition");
			HX_STACK_LINE(713)
			int destPosition;		HX_STACK_VAR(destPosition,"destPosition");
			HX_STACK_LINE(713)
			int sourcePixel;		HX_STACK_VAR(sourcePixel,"sourcePixel");
			HX_STACK_LINE(713)
			int destPixel;		HX_STACK_VAR(destPixel,"destPixel");
			HX_STACK_LINE(715)
			{
				HX_STACK_LINE(715)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(715)
				int _g = destView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(715)
				while((true)){
					HX_STACK_LINE(715)
					bool tmp15 = (_g1 < _g);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(715)
					bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(715)
					if ((tmp16)){
						HX_STACK_LINE(715)
						break;
					}
					HX_STACK_LINE(715)
					int tmp17 = (_g1)++;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(715)
					int y = tmp17;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(717)
					int tmp18 = sourceView->offset;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(717)
					int tmp19 = (sourceView->stride * y);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(717)
					int tmp20 = (tmp18 + tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(717)
					sourcePosition = tmp20;
					HX_STACK_LINE(718)
					int tmp21 = destView->offset;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(718)
					int tmp22 = (destView->stride * y);		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(718)
					int tmp23 = (tmp21 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(718)
					destPosition = tmp23;
					HX_STACK_LINE(720)
					{
						HX_STACK_LINE(720)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(720)
						int _g2 = destView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(720)
						while((true)){
							HX_STACK_LINE(720)
							bool tmp24 = (_g3 < _g2);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(720)
							bool tmp25 = !(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(720)
							if ((tmp25)){
								HX_STACK_LINE(720)
								break;
							}
							HX_STACK_LINE(720)
							int tmp26 = (_g3)++;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(720)
							int x = tmp26;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(722)
							{
								HX_STACK_LINE(722)
								int tmp27 = sourceFormat;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(722)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(722)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(722)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(722)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(722)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(722)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(722)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(722)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(722)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(722)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(722)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(722)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(722)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(722)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(722)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(722)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(722)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(722)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(722)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(722)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(722)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(722)
										sourcePixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(722)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(722)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(722)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(722)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(722)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(722)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(722)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(722)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(722)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(722)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(722)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(722)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(722)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(722)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(722)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(722)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(722)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(722)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(722)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(722)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(722)
										sourcePixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(722)
										int tmp28 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(722)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(722)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(722)
										int tmp30 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(722)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(722)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(722)
										int tmp32 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + ((sourcePosition + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(722)
										int tmp34 = ::__hxcpp_memory_get_byte(sourceData->buffer->b,(sourceData->byteOffset + sourcePosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(722)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(722)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(722)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(722)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(722)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(722)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(722)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(722)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(722)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(722)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(722)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(722)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(722)
										sourcePixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(722)
								bool tmp28 = sourcePremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(722)
								if ((tmp28)){
									HX_STACK_LINE(722)
									int tmp29 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(722)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(722)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(722)
									if ((tmp30)){
										HX_STACK_LINE(722)
										int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(722)
										tmp31 = false;
									}
									HX_STACK_LINE(722)
									if ((tmp31)){
										HX_STACK_LINE(722)
										int tmp32 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(722)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(722)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(722)
										{
											HX_STACK_LINE(722)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(722)
											{
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(722)
												int tmp36 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(722)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(722)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(722)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(722)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(722)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(722)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(722)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(722)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(722)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(722)
											{
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(722)
												int tmp37 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(722)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(722)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(722)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(722)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(722)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(722)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(722)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(722)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(722)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(722)
											{
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(722)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(722)
												int tmp38 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(722)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(722)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(722)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(722)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(722)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(722)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(722)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(722)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(722)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(722)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(722)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(722)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(722)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(722)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(722)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(722)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(722)
											int tmp45 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(722)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(722)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(722)
											sourcePixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(723)
							{
								HX_STACK_LINE(723)
								int tmp27 = destFormat;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(723)
								switch( (int)(tmp27)){
									case (int)2: {
										HX_STACK_LINE(723)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(723)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(723)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(723)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(723)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(723)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(723)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(723)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(723)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(723)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(723)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(723)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(723)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(723)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(723)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(723)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(723)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(723)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(723)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(723)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(723)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(723)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(723)
										destPixel = tmp45;
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(723)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(723)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(723)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(723)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(723)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(723)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(723)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(723)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(723)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(723)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(723)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(723)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(723)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(723)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(723)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(723)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(723)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(723)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(723)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(723)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(723)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(723)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(723)
										destPixel = tmp45;
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(723)
										int tmp28 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(723)
										Dynamic tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(723)
										int r = tmp29;		HX_STACK_VAR(r,"r");
										HX_STACK_LINE(723)
										int tmp30 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(723)
										Dynamic tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(723)
										int g = tmp31;		HX_STACK_VAR(g,"g");
										HX_STACK_LINE(723)
										int tmp32 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(723)
										Dynamic tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(723)
										int b = tmp33;		HX_STACK_VAR(b,"b");
										HX_STACK_LINE(723)
										int tmp34 = ::__hxcpp_memory_get_byte(destData->buffer->b,(destData->byteOffset + destPosition));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(723)
										Dynamic tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(723)
										int a = tmp35;		HX_STACK_VAR(a,"a");
										HX_STACK_LINE(723)
										int tmp36 = (int(r) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(723)
										int tmp37 = (int(tmp36) << int((int)24));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(723)
										int tmp38 = (int(g) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(723)
										int tmp39 = (int(tmp38) << int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(723)
										int tmp40 = (int(tmp37) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(723)
										int tmp41 = (int(b) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(723)
										int tmp42 = (int(tmp41) << int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(723)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(723)
										int tmp44 = (int(a) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
										HX_STACK_LINE(723)
										int tmp45 = (int(tmp43) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
										HX_STACK_LINE(723)
										destPixel = tmp45;
									}
									;break;
								}
								HX_STACK_LINE(723)
								bool tmp28 = destPremultiplied;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(723)
								if ((tmp28)){
									HX_STACK_LINE(723)
									int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(723)
									bool tmp30 = (tmp29 != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(723)
									bool tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(723)
									if ((tmp30)){
										HX_STACK_LINE(723)
										int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(723)
										int tmp33 = tmp32;		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(723)
										tmp31 = (tmp33 != (int)255);
									}
									else{
										HX_STACK_LINE(723)
										tmp31 = false;
									}
									HX_STACK_LINE(723)
									if ((tmp31)){
										HX_STACK_LINE(723)
										int tmp32 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(723)
										Float tmp33 = (Float(((Float)255.0)) / Float(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(723)
										::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp33;
										HX_STACK_LINE(723)
										{
											HX_STACK_LINE(723)
											Dynamic tmp34;		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(723)
											{
												HX_STACK_LINE(723)
												::lime::utils::ArrayBufferView tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(723)
												::lime::utils::ArrayBufferView this1 = tmp35;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(723)
												int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(723)
												int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(723)
												Float tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(723)
												Float tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(723)
												int tmp40 = ::Math_obj::round(tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(723)
												int idx = tmp40;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(723)
												int tmp41 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(723)
												tmp34 = (int(tmp41) & int((int)255));
											}
											HX_STACK_LINE(723)
											int r = tmp34;		HX_STACK_VAR(r,"r");
											HX_STACK_LINE(723)
											Dynamic tmp35;		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(723)
											{
												HX_STACK_LINE(723)
												::lime::utils::ArrayBufferView tmp36 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(723)
												::lime::utils::ArrayBufferView this1 = tmp36;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(723)
												int tmp37 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(723)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(723)
												Float tmp39 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(723)
												Float tmp40 = (tmp38 * tmp39);		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(723)
												int tmp41 = ::Math_obj::round(tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(723)
												int idx = tmp41;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(723)
												int tmp42 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(723)
												tmp35 = (int(tmp42) & int((int)255));
											}
											HX_STACK_LINE(723)
											int g = tmp35;		HX_STACK_VAR(g,"g");
											HX_STACK_LINE(723)
											Dynamic tmp36;		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(723)
											{
												HX_STACK_LINE(723)
												::lime::utils::ArrayBufferView tmp37 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(723)
												::lime::utils::ArrayBufferView this1 = tmp37;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(723)
												int tmp38 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(723)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(723)
												Float tmp40 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(723)
												Float tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(723)
												int tmp42 = ::Math_obj::round(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(723)
												int idx = tmp42;		HX_STACK_VAR(idx,"idx");
												HX_STACK_LINE(723)
												int tmp43 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(723)
												tmp36 = (int(tmp43) & int((int)255));
											}
											HX_STACK_LINE(723)
											int b = tmp36;		HX_STACK_VAR(b,"b");
											HX_STACK_LINE(723)
											int tmp37 = (int(r) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(723)
											int tmp38 = (int(tmp37) << int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(723)
											int tmp39 = (int(g) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(723)
											int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(723)
											int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(723)
											int tmp42 = (int(b) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(723)
											int tmp43 = (int(tmp42) << int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(723)
											int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(723)
											int tmp45 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(723)
											int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(723)
											int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(723)
											destPixel = tmp47;
										}
									}
								}
							}
							HX_STACK_LINE(725)
							{
								HX_STACK_LINE(725)
								int tmp27 = (int(sourcePixel) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(725)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(725)
								int tmp29 = redMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(725)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(725)
								int tmp31 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(725)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(725)
								int tmp33 = ((int)256 - redMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(725)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(725)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(725)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(725)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(725)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(725)
								{
									HX_STACK_LINE(725)
									int tmp38 = (int(value) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(725)
									int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(725)
									int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(725)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(725)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(725)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(725)
									int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(725)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(725)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(725)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(725)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(725)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(725)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(725)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(725)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(725)
									destPixel = tmp52;
								}
								HX_STACK_LINE(725)
								value;
							}
							HX_STACK_LINE(726)
							{
								HX_STACK_LINE(726)
								int tmp27 = (int(sourcePixel) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(726)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(726)
								int tmp29 = greenMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(726)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(726)
								int tmp31 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(726)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(726)
								int tmp33 = ((int)256 - greenMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(726)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(726)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(726)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(726)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(726)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(726)
								{
									HX_STACK_LINE(726)
									int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(726)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(726)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(726)
									int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(726)
									int tmp42 = (int(value) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(726)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(726)
									int tmp44 = (int(tmp41) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(726)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(726)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(726)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(726)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(726)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(726)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(726)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(726)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(726)
									destPixel = tmp52;
								}
								HX_STACK_LINE(726)
								value;
							}
							HX_STACK_LINE(727)
							{
								HX_STACK_LINE(727)
								int tmp27 = (int(sourcePixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(727)
								int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(727)
								int tmp29 = blueMultiplier;		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(727)
								int tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(727)
								int tmp31 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(727)
								int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(727)
								int tmp33 = ((int)256 - blueMultiplier);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(727)
								int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(727)
								int tmp35 = (tmp30 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(727)
								Float tmp36 = (Float(tmp35) / Float((int)256));		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(727)
								int tmp37 = ::Std_obj::_int(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(727)
								int value = tmp37;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(727)
								{
									HX_STACK_LINE(727)
									int tmp38 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(727)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(727)
									int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(727)
									int tmp41 = (int(tmp40) << int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(727)
									int tmp42 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(727)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(727)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(727)
									int tmp45 = (int(tmp44) << int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(727)
									int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(727)
									int tmp47 = (int(value) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(727)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(727)
									int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(727)
									int tmp50 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(727)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(727)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(727)
									destPixel = tmp52;
								}
								HX_STACK_LINE(727)
								value;
							}
							HX_STACK_LINE(728)
							{
								HX_STACK_LINE(728)
								int tmp27 = (int(sourcePixel) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(728)
								int tmp28 = alphaMultiplier;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(728)
								int tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(728)
								int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(728)
								int tmp31 = ((int)256 - alphaMultiplier);		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(728)
								int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(728)
								int tmp33 = (tmp29 + tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(728)
								Float tmp34 = (Float(tmp33) / Float((int)256));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(728)
								int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(728)
								int value = tmp35;		HX_STACK_VAR(value,"value");
								HX_STACK_LINE(728)
								{
									HX_STACK_LINE(728)
									int tmp36 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(728)
									int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(728)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(728)
									int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(728)
									int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(728)
									int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(728)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(728)
									int tmp43 = (int(tmp42) << int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(728)
									int tmp44 = (int(tmp39) | int(tmp43));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(728)
									int tmp45 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(728)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(728)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(728)
									int tmp48 = (int(tmp47) << int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(728)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(728)
									int tmp50 = (int(value) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(728)
									int tmp51 = (int(tmp49) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(728)
									destPixel = tmp51;
								}
								HX_STACK_LINE(728)
								value;
							}
							HX_STACK_LINE(730)
							{
								HX_STACK_LINE(730)
								bool tmp27 = destPremultiplied;		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(730)
								if ((tmp27)){
									HX_STACK_LINE(730)
									int tmp28 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(730)
									bool tmp29 = (tmp28 == (int)0);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(730)
									if ((tmp29)){
										HX_STACK_LINE(730)
										bool tmp30 = (destPixel != (int)0);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(730)
										if ((tmp30)){
											HX_STACK_LINE(730)
											destPixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(730)
										int tmp30 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(730)
										bool tmp31 = (tmp30 != (int)255);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(730)
										if ((tmp31)){
											HX_STACK_LINE(730)
											Dynamic tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(730)
												::lime::utils::ArrayBufferView this1 = tmp33;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(730)
												{
													HX_STACK_LINE(730)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(730)
													tmp32 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(destPixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(730)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp32;
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												int tmp33 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(730)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(730)
												int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(730)
												int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(730)
												int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(730)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(730)
												int tmp39 = (int(tmp38) << int((int)24));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(730)
												int tmp40 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(730)
												int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(730)
												int tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(730)
												int tmp43 = (tmp41 * tmp42);		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(730)
												int tmp44 = (int(tmp43) >> int((int)16));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(730)
												int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(730)
												int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(730)
												int tmp47 = (int(tmp39) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(730)
												int tmp48 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(730)
												int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(730)
												int tmp50 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(730)
												int tmp51 = (tmp49 * tmp50);		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(730)
												int tmp52 = (int(tmp51) >> int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(730)
												int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(730)
												int tmp54 = (int(tmp53) << int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(730)
												int tmp55 = (int(tmp47) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(730)
												int tmp56 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(730)
												int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(730)
												int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(730)
												destPixel = tmp58;
											}
										}
									}
								}
								HX_STACK_LINE(730)
								int tmp28 = destFormat;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(730)
								switch( (int)(tmp28)){
									case (int)2: {
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int val = tmp29;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + destPosition),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)1))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)2))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
										HX_STACK_LINE(730)
										{
											HX_STACK_LINE(730)
											int tmp29 = (int(destPixel) >> int((int)8));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(730)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(730)
											int val = tmp30;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(730)
											{
												HX_STACK_LINE(730)
												::__hxcpp_memory_set_byte(destData->buffer->b,(destData->byteOffset + ((destPosition + (int)3))),val);
												HX_STACK_LINE(730)
												val;
											}
										}
									}
									;break;
								}
							}
							HX_STACK_LINE(732)
							hx::AddEq(sourcePosition,(int)4);
							HX_STACK_LINE(733)
							hx::AddEq(destPosition,(int)4);
						}
					}
				}
			}
		}
		HX_STACK_LINE(741)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,merge,(void))

Void ImageDataUtil_obj::multiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","multiplyAlpha",0xb898c02c,"lime.graphics.utils.ImageDataUtil.multiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",746,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(748)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(748)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(749)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(749)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(749)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(749)
		if ((tmp2)){
			HX_STACK_LINE(749)
			bool tmp4 = image->buffer->transparent;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(749)
			bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(749)
			bool tmp6 = tmp5;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(749)
			tmp3 = !(tmp6);
		}
		else{
			HX_STACK_LINE(749)
			tmp3 = true;
		}
		HX_STACK_LINE(749)
		if ((tmp3)){
			HX_STACK_LINE(749)
			return null();
		}
		HX_STACK_LINE(752)
		bool tmp4 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(752)
		if ((tmp4)){
			HX_STACK_LINE(752)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			HX_STACK_LINE(756)
			int tmp5 = image->buffer->format;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(756)
			int format = tmp5;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(757)
			int tmp6 = data->length;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(757)
			Float tmp7 = (Float(tmp6) / Float((int)4));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(757)
			int tmp8 = ::Std_obj::_int(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(757)
			int length = tmp8;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(758)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(760)
			{
				HX_STACK_LINE(760)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(760)
				while((true)){
					HX_STACK_LINE(760)
					bool tmp9 = (_g < length);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(760)
					bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(760)
					if ((tmp10)){
						HX_STACK_LINE(760)
						break;
					}
					HX_STACK_LINE(760)
					int tmp11 = (_g)++;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(760)
					int i = tmp11;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(762)
					{
						HX_STACK_LINE(762)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(762)
						int offset = tmp12;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(762)
						int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(762)
						switch( (int)(tmp13)){
							case (int)2: {
								HX_STACK_LINE(762)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(762)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(762)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(762)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(762)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(762)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(762)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(762)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(762)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(762)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(762)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(762)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(762)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(762)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(762)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(762)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(762)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(762)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(762)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(762)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(762)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(762)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(762)
								pixel = tmp31;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(762)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(762)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(762)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(762)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(762)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(762)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(762)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(762)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(762)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(762)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(762)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(762)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(762)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(762)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(762)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(762)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(762)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(762)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(762)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(762)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(762)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(762)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(762)
								pixel = tmp31;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(762)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(762)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(762)
								int r = tmp15;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(762)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(762)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(762)
								int g = tmp17;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(762)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(762)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(762)
								int b = tmp19;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(762)
								int tmp20 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(762)
								Dynamic tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(762)
								int a = tmp21;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(762)
								int tmp22 = (int(r) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(762)
								int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(762)
								int tmp24 = (int(g) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(762)
								int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(762)
								int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(762)
								int tmp27 = (int(b) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(762)
								int tmp28 = (int(tmp27) << int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(762)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(762)
								int tmp30 = (int(a) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(762)
								int tmp31 = (int(tmp29) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(762)
								pixel = tmp31;
							}
							;break;
						}
						HX_STACK_LINE(762)
						{
						}
					}
					HX_STACK_LINE(763)
					{
						HX_STACK_LINE(763)
						int tmp12 = (i * (int)4);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(763)
						int offset = tmp12;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(763)
						{
							HX_STACK_LINE(763)
							int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(763)
							bool tmp14 = (tmp13 == (int)0);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(763)
							if ((tmp14)){
								HX_STACK_LINE(763)
								bool tmp15 = (pixel != (int)0);		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(763)
								if ((tmp15)){
									HX_STACK_LINE(763)
									pixel = (int)0;
								}
							}
							else{
								HX_STACK_LINE(763)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(763)
								bool tmp16 = (tmp15 != (int)255);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(763)
								if ((tmp16)){
									HX_STACK_LINE(763)
									Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(763)
										::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(763)
										{
											HX_STACK_LINE(763)
											bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
											HX_STACK_LINE(763)
											tmp17 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
										}
									}
									HX_STACK_LINE(763)
									::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp17;
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										int tmp18 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(763)
										int tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(763)
										int tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(763)
										int tmp21 = (tmp19 * tmp20);		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(763)
										int tmp22 = (int(tmp21) >> int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(763)
										int tmp23 = (int(tmp22) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(763)
										int tmp24 = (int(tmp23) << int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(763)
										int tmp25 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(763)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(763)
										int tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(763)
										int tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(763)
										int tmp29 = (int(tmp28) >> int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(763)
										int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(763)
										int tmp31 = (int(tmp30) << int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(763)
										int tmp32 = (int(tmp24) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(763)
										int tmp33 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
										HX_STACK_LINE(763)
										int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
										HX_STACK_LINE(763)
										int tmp35 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp35,"tmp35");
										HX_STACK_LINE(763)
										int tmp36 = (tmp34 * tmp35);		HX_STACK_VAR(tmp36,"tmp36");
										HX_STACK_LINE(763)
										int tmp37 = (int(tmp36) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
										HX_STACK_LINE(763)
										int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
										HX_STACK_LINE(763)
										int tmp39 = (int(tmp38) << int((int)8));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(763)
										int tmp40 = (int(tmp32) | int(tmp39));		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(763)
										int tmp41 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
										HX_STACK_LINE(763)
										int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
										HX_STACK_LINE(763)
										int tmp43 = (int(tmp40) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
										HX_STACK_LINE(763)
										pixel = tmp43;
									}
								}
							}
						}
						HX_STACK_LINE(763)
						int tmp13 = format;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(763)
						switch( (int)(tmp13)){
							case (int)2: {
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int val = tmp14;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
								HX_STACK_LINE(763)
								{
									HX_STACK_LINE(763)
									int tmp14 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
									HX_STACK_LINE(763)
									int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(763)
									int val = tmp15;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(763)
									{
										HX_STACK_LINE(763)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(763)
										val;
									}
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(769)
		image->buffer->premultiplied = true;
		HX_STACK_LINE(770)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,multiplyAlpha,(void))

Void ImageDataUtil_obj::resize( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resize",0x3b9e8e22,"lime.graphics.utils.ImageDataUtil.resize","lime/graphics/utils/ImageDataUtil.hx",775,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(777)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(778)
		bool tmp = (buffer->width == newWidth);		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(778)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(778)
		if ((tmp)){
			HX_STACK_LINE(778)
			tmp1 = (buffer->height == newHeight);
		}
		else{
			HX_STACK_LINE(778)
			tmp1 = false;
		}
		HX_STACK_LINE(778)
		if ((tmp1)){
			HX_STACK_LINE(778)
			return null();
		}
		HX_STACK_LINE(779)
		::lime::utils::ArrayBufferView tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(779)
		{
			HX_STACK_LINE(779)
			int tmp3 = (newWidth * newHeight);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(779)
			int tmp4 = (tmp3 * (int)4);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(779)
			Dynamic elements = tmp4;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(779)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(779)
			bool tmp5 = (elements != null());		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(779)
			if ((tmp5)){
				HX_STACK_LINE(779)
				::lime::utils::ArrayBufferView tmp6 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(779)
				this1 = tmp6;
			}
			else{
				HX_STACK_LINE(779)
				bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(779)
				if ((tmp6)){
					HX_STACK_LINE(779)
					::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(779)
					{
						HX_STACK_LINE(779)
						::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(779)
						::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(779)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(779)
						int tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(779)
						_this->length = tmp9;
						HX_STACK_LINE(779)
						int tmp10 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(779)
						_this->byteLength = tmp10;
						HX_STACK_LINE(779)
						::haxe::io::Bytes tmp11;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(779)
						{
							HX_STACK_LINE(779)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(779)
							int tmp12 = _this->byteLength;		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(779)
							::haxe::io::Bytes tmp13 = ::haxe::io::Bytes_obj::alloc(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(779)
							this2 = tmp13;
							HX_STACK_LINE(779)
							tmp11 = this2;
						}
						HX_STACK_LINE(779)
						_this->buffer = tmp11;
						HX_STACK_LINE(779)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(779)
						tmp7 = _this;
					}
					HX_STACK_LINE(779)
					this1 = tmp7;
				}
				else{
					HX_STACK_LINE(779)
					bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(779)
					if ((tmp7)){
						HX_STACK_LINE(779)
						::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(779)
						{
							HX_STACK_LINE(779)
							::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(779)
							::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(779)
							::haxe::io::Bytes tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(779)
							::haxe::io::Bytes srcData = tmp10;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(779)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(779)
							int srcLength = tmp11;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(779)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(779)
							int srcByteOffset = tmp12;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(779)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(779)
							int srcElementSize = tmp13;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(779)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(779)
							int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(779)
							int tmp15 = _this->type;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(779)
							bool tmp16 = (tmp14 == tmp15);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(779)
							if ((tmp16)){
								HX_STACK_LINE(779)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(779)
								int tmp17 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(779)
								int cloneLength = tmp17;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(779)
								::haxe::io::Bytes tmp18;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(779)
								{
									HX_STACK_LINE(779)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(779)
									int tmp19 = cloneLength;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(779)
									::haxe::io::Bytes tmp20 = ::haxe::io::Bytes_obj::alloc(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(779)
									this2 = tmp20;
									HX_STACK_LINE(779)
									tmp18 = this2;
								}
								HX_STACK_LINE(779)
								_this->buffer = tmp18;
								HX_STACK_LINE(779)
								::haxe::io::Bytes tmp19 = srcData;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(779)
								int tmp20 = srcByteOffset;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(779)
								int tmp21 = cloneLength;		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(779)
								_this->buffer->blit((int)0,tmp19,tmp20,tmp21);
							}
							else{
								HX_STACK_LINE(779)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(779)
							int tmp17 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(779)
							_this->byteLength = tmp17;
							HX_STACK_LINE(779)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(779)
							_this->length = srcLength;
							HX_STACK_LINE(779)
							tmp8 = _this;
						}
						HX_STACK_LINE(779)
						this1 = tmp8;
					}
					else{
						HX_STACK_LINE(779)
						bool tmp8 = false;		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(779)
						if ((tmp8)){
							HX_STACK_LINE(779)
							::lime::utils::ArrayBufferView tmp9;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(779)
							{
								HX_STACK_LINE(779)
								::lime::utils::ArrayBufferView tmp10 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(779)
								::lime::utils::ArrayBufferView _this = tmp10;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(779)
								bool tmp11 = false;		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(779)
								if ((tmp11)){
									HX_STACK_LINE(779)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(779)
								int tmp12 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(779)
								bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(779)
								if ((tmp13)){
									HX_STACK_LINE(779)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(779)
								int tmp14 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(779)
								int bufferByteLength = tmp14;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(779)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(779)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(779)
								bool tmp15 = true;		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(779)
								if ((tmp15)){
									HX_STACK_LINE(779)
									int tmp16 = bufferByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(779)
									newByteLength = tmp16;
									HX_STACK_LINE(779)
									int tmp17 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(779)
									bool tmp18 = (tmp17 != (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(779)
									if ((tmp18)){
										HX_STACK_LINE(779)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(779)
									bool tmp19 = (newByteLength < (int)0);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(779)
									if ((tmp19)){
										HX_STACK_LINE(779)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(779)
									int tmp16 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(779)
									newByteLength = tmp16;
									HX_STACK_LINE(779)
									int tmp17 = newByteLength;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(779)
									int newRange = tmp17;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(779)
									bool tmp18 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(779)
									if ((tmp18)){
										HX_STACK_LINE(779)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(779)
								_this->buffer = null();
								HX_STACK_LINE(779)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(779)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(779)
								Float tmp16 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(779)
								int tmp17 = ::Std_obj::_int(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(779)
								_this->length = tmp17;
								HX_STACK_LINE(779)
								tmp9 = _this;
							}
							HX_STACK_LINE(779)
							this1 = tmp9;
						}
						else{
							HX_STACK_LINE(779)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(779)
			tmp2 = this1;
		}
		HX_STACK_LINE(779)
		int tmp3 = newWidth;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(779)
		int tmp4 = newHeight;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(779)
		::lime::graphics::ImageBuffer tmp5 = ::lime::graphics::ImageBuffer_obj::__new(tmp2,tmp3,tmp4,null(),null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(779)
		::lime::graphics::ImageBuffer newBuffer = tmp5;		HX_STACK_VAR(newBuffer,"newBuffer");
		HX_STACK_LINE(782)
		bool tmp6 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(782)
		if ((tmp6)){
			HX_STACK_LINE(782)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(newBuffer),newWidth,newHeight);
		}
		else{
			HX_STACK_LINE(786)
			int imageWidth = image->width;		HX_STACK_VAR(imageWidth,"imageWidth");
			HX_STACK_LINE(787)
			int imageHeight = image->height;		HX_STACK_VAR(imageHeight,"imageHeight");
			HX_STACK_LINE(789)
			::lime::utils::ArrayBufferView tmp7 = image->get_data();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(789)
			::lime::utils::ArrayBufferView data = tmp7;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(790)
			::lime::utils::ArrayBufferView newData = newBuffer->data;		HX_STACK_VAR(newData,"newData");
			HX_STACK_LINE(791)
			int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
			HX_STACK_LINE(791)
			int sourceIndexX;		HX_STACK_VAR(sourceIndexX,"sourceIndexX");
			HX_STACK_LINE(791)
			int sourceIndexY;		HX_STACK_VAR(sourceIndexY,"sourceIndexY");
			HX_STACK_LINE(791)
			int sourceIndexXY;		HX_STACK_VAR(sourceIndexXY,"sourceIndexXY");
			HX_STACK_LINE(791)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(792)
			int sourceX;		HX_STACK_VAR(sourceX,"sourceX");
			HX_STACK_LINE(792)
			int sourceY;		HX_STACK_VAR(sourceY,"sourceY");
			HX_STACK_LINE(793)
			Float u;		HX_STACK_VAR(u,"u");
			HX_STACK_LINE(793)
			Float v;		HX_STACK_VAR(v,"v");
			HX_STACK_LINE(793)
			Float uRatio;		HX_STACK_VAR(uRatio,"uRatio");
			HX_STACK_LINE(793)
			Float vRatio;		HX_STACK_VAR(vRatio,"vRatio");
			HX_STACK_LINE(793)
			Float uOpposite;		HX_STACK_VAR(uOpposite,"uOpposite");
			HX_STACK_LINE(793)
			Float vOpposite;		HX_STACK_VAR(vOpposite,"vOpposite");
			HX_STACK_LINE(795)
			{
				HX_STACK_LINE(795)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(795)
				while((true)){
					HX_STACK_LINE(795)
					bool tmp8 = (_g < newHeight);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(795)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(795)
					if ((tmp9)){
						HX_STACK_LINE(795)
						break;
					}
					HX_STACK_LINE(795)
					int tmp10 = (_g)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(795)
					int y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(797)
					{
						HX_STACK_LINE(797)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(797)
						while((true)){
							HX_STACK_LINE(797)
							bool tmp11 = (_g1 < newWidth);		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(797)
							bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(797)
							if ((tmp12)){
								HX_STACK_LINE(797)
								break;
							}
							HX_STACK_LINE(797)
							int tmp13 = (_g1)++;		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(797)
							int x = tmp13;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(801)
							Float tmp14 = (x + ((Float)0.5));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(801)
							int tmp15 = newWidth;		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(801)
							Float tmp16 = (Float(tmp14) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(801)
							int tmp17 = imageWidth;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(801)
							Float tmp18 = (tmp16 * tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(801)
							Float tmp19 = (tmp18 - ((Float)0.5));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(801)
							u = tmp19;
							HX_STACK_LINE(802)
							Float tmp20 = (y + ((Float)0.5));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(802)
							int tmp21 = newHeight;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(802)
							Float tmp22 = (Float(tmp20) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(802)
							int tmp23 = imageHeight;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(802)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(802)
							Float tmp25 = (tmp24 - ((Float)0.5));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(802)
							v = tmp25;
							HX_STACK_LINE(804)
							Float tmp26 = u;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(804)
							int tmp27 = ::Std_obj::_int(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(804)
							sourceX = tmp27;
							HX_STACK_LINE(805)
							Float tmp28 = v;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(805)
							int tmp29 = ::Std_obj::_int(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(805)
							sourceY = tmp29;
							HX_STACK_LINE(807)
							int tmp30 = (sourceY * imageWidth);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(807)
							int tmp31 = sourceX;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(807)
							int tmp32 = (tmp30 + tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(807)
							int tmp33 = (tmp32 * (int)4);		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(807)
							sourceIndex = tmp33;
							HX_STACK_LINE(808)
							int tmp34 = sourceX;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(808)
							int tmp35 = (imageWidth - (int)1);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(808)
							bool tmp36 = (tmp34 < tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(808)
							int tmp37;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(808)
							if ((tmp36)){
								HX_STACK_LINE(808)
								tmp37 = (sourceIndex + (int)4);
							}
							else{
								HX_STACK_LINE(808)
								tmp37 = sourceIndex;
							}
							HX_STACK_LINE(808)
							sourceIndexX = tmp37;
							HX_STACK_LINE(809)
							int tmp38 = sourceY;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(809)
							int tmp39 = (imageHeight - (int)1);		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(809)
							bool tmp40 = (tmp38 < tmp39);		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(809)
							int tmp41;		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(809)
							if ((tmp40)){
								HX_STACK_LINE(809)
								int tmp42 = sourceIndex;		HX_STACK_VAR(tmp42,"tmp42");
								HX_STACK_LINE(809)
								int tmp43 = (imageWidth * (int)4);		HX_STACK_VAR(tmp43,"tmp43");
								HX_STACK_LINE(809)
								tmp41 = (tmp42 + tmp43);
							}
							else{
								HX_STACK_LINE(809)
								tmp41 = sourceIndex;
							}
							HX_STACK_LINE(809)
							sourceIndexY = tmp41;
							HX_STACK_LINE(810)
							bool tmp42 = (sourceIndexX != sourceIndex);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(810)
							int tmp43;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(810)
							if ((tmp42)){
								HX_STACK_LINE(810)
								tmp43 = (sourceIndexY + (int)4);
							}
							else{
								HX_STACK_LINE(810)
								tmp43 = sourceIndexY;
							}
							HX_STACK_LINE(810)
							sourceIndexXY = tmp43;
							HX_STACK_LINE(812)
							int tmp44 = (y * newWidth);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(812)
							int tmp45 = x;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(812)
							int tmp46 = (tmp44 + tmp45);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(812)
							int tmp47 = (tmp46 * (int)4);		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(812)
							index = tmp47;
							HX_STACK_LINE(814)
							Float tmp48 = (u - sourceX);		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(814)
							uRatio = tmp48;
							HX_STACK_LINE(815)
							Float tmp49 = (v - sourceY);		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(815)
							vRatio = tmp49;
							HX_STACK_LINE(816)
							Float tmp50 = ((int)1 - uRatio);		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(816)
							uOpposite = tmp50;
							HX_STACK_LINE(817)
							Float tmp51 = ((int)1 - vRatio);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(817)
							vOpposite = tmp51;
							HX_STACK_LINE(819)
							{
								HX_STACK_LINE(819)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(819)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(819)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(819)
										if ((tmp56)){
											HX_STACK_LINE(819)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(819)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(819)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexX));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(819)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(819)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(819)
										if ((tmp57)){
											HX_STACK_LINE(819)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(819)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(819)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(819)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(819)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(819)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexY));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(819)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(819)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(819)
										if ((tmp61)){
											HX_STACK_LINE(819)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(819)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(819)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndexXY));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(819)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(819)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(819)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(819)
									{
										HX_STACK_LINE(819)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(819)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(819)
										if ((tmp62)){
											HX_STACK_LINE(819)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(819)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(819)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(819)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(819)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(819)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(819)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(819)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(819)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(819)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(819)
								{
									HX_STACK_LINE(819)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
									HX_STACK_LINE(819)
									val;
								}
							}
							HX_STACK_LINE(820)
							{
								HX_STACK_LINE(820)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(820)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(820)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(820)
										if ((tmp56)){
											HX_STACK_LINE(820)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(820)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(820)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)1))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(820)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(820)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(820)
										if ((tmp57)){
											HX_STACK_LINE(820)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(820)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(820)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(820)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(820)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(820)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)1))));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(820)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(820)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(820)
										if ((tmp61)){
											HX_STACK_LINE(820)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(820)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(820)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)1))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(820)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(820)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(820)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(820)
									{
										HX_STACK_LINE(820)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(820)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(820)
										if ((tmp62)){
											HX_STACK_LINE(820)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(820)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(820)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(820)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(820)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(820)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(820)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(820)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(820)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(820)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(820)
								{
									HX_STACK_LINE(820)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
									HX_STACK_LINE(820)
									val;
								}
							}
							HX_STACK_LINE(821)
							{
								HX_STACK_LINE(821)
								Float tmp52;		HX_STACK_VAR(tmp52,"tmp52");
								HX_STACK_LINE(821)
								{
									HX_STACK_LINE(821)
									int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(821)
									Dynamic tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(821)
									int a = tmp54;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(821)
									Float tmp55;		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(821)
									{
										HX_STACK_LINE(821)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(821)
										bool tmp56 = (_int < (int)0);		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(821)
										if ((tmp56)){
											HX_STACK_LINE(821)
											tmp55 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(821)
											tmp55 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(821)
									Float tmp56 = uOpposite;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(821)
									tmp52 = (tmp55 * tmp56);
								}
								HX_STACK_LINE(821)
								Float tmp53;		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(821)
								{
									HX_STACK_LINE(821)
									int tmp54 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)2))));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(821)
									Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(821)
									int a = tmp55;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(821)
									Float tmp56;		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(821)
									{
										HX_STACK_LINE(821)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(821)
										bool tmp57 = (_int < (int)0);		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(821)
										if ((tmp57)){
											HX_STACK_LINE(821)
											tmp56 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(821)
											tmp56 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(821)
									Float tmp57 = uRatio;		HX_STACK_VAR(tmp57,"tmp57");
									HX_STACK_LINE(821)
									tmp53 = (tmp56 * tmp57);
								}
								HX_STACK_LINE(821)
								Float tmp54 = (tmp52 + tmp53);		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(821)
								Float tmp55 = vOpposite;		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(821)
								Float tmp56 = (tmp54 * tmp55);		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(821)
								Float tmp57;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(821)
								{
									HX_STACK_LINE(821)
									int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)2))));		HX_STACK_VAR(tmp58,"tmp58");
									HX_STACK_LINE(821)
									Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(821)
									int a = tmp59;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(821)
									Float tmp60;		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(821)
									{
										HX_STACK_LINE(821)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(821)
										bool tmp61 = (_int < (int)0);		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(821)
										if ((tmp61)){
											HX_STACK_LINE(821)
											tmp60 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(821)
											tmp60 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(821)
									Float tmp61 = uOpposite;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(821)
									tmp57 = (tmp60 * tmp61);
								}
								HX_STACK_LINE(821)
								Float tmp58;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(821)
								{
									HX_STACK_LINE(821)
									int tmp59 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)2))));		HX_STACK_VAR(tmp59,"tmp59");
									HX_STACK_LINE(821)
									Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
									HX_STACK_LINE(821)
									int a = tmp60;		HX_STACK_VAR(a,"a");
									HX_STACK_LINE(821)
									Float tmp61;		HX_STACK_VAR(tmp61,"tmp61");
									HX_STACK_LINE(821)
									{
										HX_STACK_LINE(821)
										int _int = a;		HX_STACK_VAR(_int,"int");
										HX_STACK_LINE(821)
										bool tmp62 = (_int < (int)0);		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(821)
										if ((tmp62)){
											HX_STACK_LINE(821)
											tmp61 = (((Float)4294967296.0) + _int);
										}
										else{
											HX_STACK_LINE(821)
											tmp61 = (_int + ((Float)0.0));
										}
									}
									HX_STACK_LINE(821)
									Float tmp62 = uRatio;		HX_STACK_VAR(tmp62,"tmp62");
									HX_STACK_LINE(821)
									tmp58 = (tmp61 * tmp62);
								}
								HX_STACK_LINE(821)
								Float tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(821)
								Float tmp60 = vRatio;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(821)
								Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(821)
								Float tmp62 = (tmp56 + tmp61);		HX_STACK_VAR(tmp62,"tmp62");
								HX_STACK_LINE(821)
								int tmp63 = ::Std_obj::_int(tmp62);		HX_STACK_VAR(tmp63,"tmp63");
								HX_STACK_LINE(821)
								int val = tmp63;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(821)
								{
									HX_STACK_LINE(821)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
									HX_STACK_LINE(821)
									val;
								}
							}
							HX_STACK_LINE(825)
							bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(825)
							{
								HX_STACK_LINE(825)
								int tmp53 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexX + (int)3))));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(825)
								int tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
								HX_STACK_LINE(825)
								Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
								HX_STACK_LINE(825)
								Dynamic tmp56 = tmp55;		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(825)
								int a = tmp56;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(825)
								tmp52 = (a == (int)0);
							}
							HX_STACK_LINE(825)
							bool tmp53 = !(tmp52);		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(825)
							bool tmp54 = tmp53;		HX_STACK_VAR(tmp54,"tmp54");
							HX_STACK_LINE(825)
							bool tmp55;		HX_STACK_VAR(tmp55,"tmp55");
							HX_STACK_LINE(825)
							if ((tmp54)){
								HX_STACK_LINE(825)
								int tmp56 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexY + (int)3))));		HX_STACK_VAR(tmp56,"tmp56");
								HX_STACK_LINE(825)
								int tmp57 = tmp56;		HX_STACK_VAR(tmp57,"tmp57");
								HX_STACK_LINE(825)
								int tmp58 = tmp57;		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(825)
								Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(825)
								Dynamic tmp60 = tmp59;		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(825)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(825)
								int a = tmp61;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(825)
								tmp55 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(825)
								tmp55 = true;
							}
							HX_STACK_LINE(825)
							bool tmp56 = !(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
							HX_STACK_LINE(825)
							bool tmp57;		HX_STACK_VAR(tmp57,"tmp57");
							HX_STACK_LINE(825)
							if ((tmp56)){
								HX_STACK_LINE(825)
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndexXY + (int)3))));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(825)
								int tmp59 = tmp58;		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(825)
								Dynamic tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
								HX_STACK_LINE(825)
								Dynamic tmp61 = tmp60;		HX_STACK_VAR(tmp61,"tmp61");
								HX_STACK_LINE(825)
								int a = tmp61;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(825)
								tmp57 = (a == (int)0);
							}
							else{
								HX_STACK_LINE(825)
								tmp57 = true;
							}
							HX_STACK_LINE(825)
							if ((tmp57)){
								HX_STACK_LINE(827)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),(int)0);
								HX_STACK_LINE(827)
								(int)0;
							}
							else{
								HX_STACK_LINE(831)
								int tmp58 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp58,"tmp58");
								HX_STACK_LINE(831)
								Dynamic tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
								HX_STACK_LINE(831)
								int val = tmp59;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(831)
								{
									HX_STACK_LINE(831)
									::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
									HX_STACK_LINE(831)
									val;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(841)
		buffer->data = newBuffer->data;
		HX_STACK_LINE(842)
		buffer->width = newWidth;
		HX_STACK_LINE(843)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resize,(void))

Void ImageDataUtil_obj::resizeBuffer( ::lime::graphics::Image image,int newWidth,int newHeight){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","resizeBuffer",0x390004c2,"lime.graphics.utils.ImageDataUtil.resizeBuffer","lime/graphics/utils/ImageDataUtil.hx",848,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(newWidth,"newWidth")
		HX_STACK_ARG(newHeight,"newHeight")
		HX_STACK_LINE(850)
		::lime::graphics::ImageBuffer buffer = image->buffer;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(851)
		::lime::utils::ArrayBufferView tmp = image->get_data();		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(851)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(852)
		::lime::utils::ArrayBufferView tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(852)
		{
			HX_STACK_LINE(852)
			int tmp2 = (newWidth * newHeight);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(852)
			int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(852)
			Dynamic elements = tmp3;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(852)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(852)
			bool tmp4 = (elements != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(852)
			if ((tmp4)){
				HX_STACK_LINE(852)
				::lime::utils::ArrayBufferView tmp5 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(852)
				this1 = tmp5;
			}
			else{
				HX_STACK_LINE(852)
				bool tmp5 = false;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(852)
				if ((tmp5)){
					HX_STACK_LINE(852)
					::lime::utils::ArrayBufferView tmp6;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(852)
					{
						HX_STACK_LINE(852)
						::lime::utils::ArrayBufferView tmp7 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(852)
						::lime::utils::ArrayBufferView _this = tmp7;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(852)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(852)
						int tmp8 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(852)
						_this->length = tmp8;
						HX_STACK_LINE(852)
						int tmp9 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(852)
						_this->byteLength = tmp9;
						HX_STACK_LINE(852)
						::haxe::io::Bytes tmp10;		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(852)
						{
							HX_STACK_LINE(852)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(852)
							int tmp11 = _this->byteLength;		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(852)
							::haxe::io::Bytes tmp12 = ::haxe::io::Bytes_obj::alloc(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(852)
							this2 = tmp12;
							HX_STACK_LINE(852)
							tmp10 = this2;
						}
						HX_STACK_LINE(852)
						_this->buffer = tmp10;
						HX_STACK_LINE(852)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(852)
						tmp6 = _this;
					}
					HX_STACK_LINE(852)
					this1 = tmp6;
				}
				else{
					HX_STACK_LINE(852)
					bool tmp6 = false;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(852)
					if ((tmp6)){
						HX_STACK_LINE(852)
						::lime::utils::ArrayBufferView tmp7;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(852)
						{
							HX_STACK_LINE(852)
							::lime::utils::ArrayBufferView tmp8 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(852)
							::lime::utils::ArrayBufferView _this = tmp8;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(852)
							::haxe::io::Bytes tmp9 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(852)
							::haxe::io::Bytes srcData = tmp9;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(852)
							int tmp10 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(852)
							int srcLength = tmp10;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(852)
							int tmp11 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(852)
							int srcByteOffset = tmp11;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(852)
							int tmp12 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(852)
							int srcElementSize = tmp12;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(852)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(852)
							int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(852)
							int tmp14 = _this->type;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(852)
							bool tmp15 = (tmp13 == tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(852)
							if ((tmp15)){
								HX_STACK_LINE(852)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(852)
								int tmp16 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(852)
								int cloneLength = tmp16;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(852)
								::haxe::io::Bytes tmp17;		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(852)
								{
									HX_STACK_LINE(852)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(852)
									int tmp18 = cloneLength;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(852)
									::haxe::io::Bytes tmp19 = ::haxe::io::Bytes_obj::alloc(tmp18);		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(852)
									this2 = tmp19;
									HX_STACK_LINE(852)
									tmp17 = this2;
								}
								HX_STACK_LINE(852)
								_this->buffer = tmp17;
								HX_STACK_LINE(852)
								::haxe::io::Bytes tmp18 = srcData;		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(852)
								int tmp19 = srcByteOffset;		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(852)
								int tmp20 = cloneLength;		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(852)
								_this->buffer->blit((int)0,tmp18,tmp19,tmp20);
							}
							else{
								HX_STACK_LINE(852)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(852)
							int tmp16 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(852)
							_this->byteLength = tmp16;
							HX_STACK_LINE(852)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(852)
							_this->length = srcLength;
							HX_STACK_LINE(852)
							tmp7 = _this;
						}
						HX_STACK_LINE(852)
						this1 = tmp7;
					}
					else{
						HX_STACK_LINE(852)
						bool tmp7 = false;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(852)
						if ((tmp7)){
							HX_STACK_LINE(852)
							::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(852)
							{
								HX_STACK_LINE(852)
								::lime::utils::ArrayBufferView tmp9 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
								HX_STACK_LINE(852)
								::lime::utils::ArrayBufferView _this = tmp9;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(852)
								bool tmp10 = false;		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(852)
								if ((tmp10)){
									HX_STACK_LINE(852)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(852)
								int tmp11 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(852)
								bool tmp12 = (tmp11 != (int)0);		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(852)
								if ((tmp12)){
									HX_STACK_LINE(852)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(852)
								int tmp13 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(852)
								int bufferByteLength = tmp13;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(852)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(852)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(852)
								bool tmp14 = true;		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(852)
								if ((tmp14)){
									HX_STACK_LINE(852)
									int tmp15 = bufferByteLength;		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(852)
									newByteLength = tmp15;
									HX_STACK_LINE(852)
									int tmp16 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(852)
									bool tmp17 = (tmp16 != (int)0);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(852)
									if ((tmp17)){
										HX_STACK_LINE(852)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(852)
									bool tmp18 = (newByteLength < (int)0);		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(852)
									if ((tmp18)){
										HX_STACK_LINE(852)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(852)
									int tmp15 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp15,"tmp15");
									HX_STACK_LINE(852)
									newByteLength = tmp15;
									HX_STACK_LINE(852)
									int tmp16 = newByteLength;		HX_STACK_VAR(tmp16,"tmp16");
									HX_STACK_LINE(852)
									int newRange = tmp16;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(852)
									bool tmp17 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(852)
									if ((tmp17)){
										HX_STACK_LINE(852)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(852)
								_this->buffer = null();
								HX_STACK_LINE(852)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(852)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(852)
								Float tmp15 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(852)
								int tmp16 = ::Std_obj::_int(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(852)
								_this->length = tmp16;
								HX_STACK_LINE(852)
								tmp8 = _this;
							}
							HX_STACK_LINE(852)
							this1 = tmp8;
						}
						else{
							HX_STACK_LINE(852)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(852)
			tmp1 = this1;
		}
		HX_STACK_LINE(852)
		::lime::utils::ArrayBufferView newData = tmp1;		HX_STACK_VAR(newData,"newData");
		HX_STACK_LINE(853)
		int sourceIndex;		HX_STACK_VAR(sourceIndex,"sourceIndex");
		HX_STACK_LINE(853)
		int index;		HX_STACK_VAR(index,"index");
		HX_STACK_LINE(855)
		{
			HX_STACK_LINE(855)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(855)
			int _g = buffer->height;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(855)
			while((true)){
				HX_STACK_LINE(855)
				bool tmp2 = (_g1 < _g);		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(855)
				bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(855)
				if ((tmp3)){
					HX_STACK_LINE(855)
					break;
				}
				HX_STACK_LINE(855)
				int tmp4 = (_g1)++;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(855)
				int y = tmp4;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(857)
				{
					HX_STACK_LINE(857)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(857)
					int _g2 = buffer->width;		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(857)
					while((true)){
						HX_STACK_LINE(857)
						bool tmp5 = (_g3 < _g2);		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(857)
						bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(857)
						if ((tmp6)){
							HX_STACK_LINE(857)
							break;
						}
						HX_STACK_LINE(857)
						int tmp7 = (_g3)++;		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(857)
						int x = tmp7;		HX_STACK_VAR(x,"x");
						HX_STACK_LINE(859)
						int tmp8 = (y * buffer->width);		HX_STACK_VAR(tmp8,"tmp8");
						HX_STACK_LINE(859)
						int tmp9 = x;		HX_STACK_VAR(tmp9,"tmp9");
						HX_STACK_LINE(859)
						int tmp10 = (tmp8 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(859)
						int tmp11 = (tmp10 * (int)4);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(859)
						sourceIndex = tmp11;
						HX_STACK_LINE(860)
						int tmp12 = (y * newWidth);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(860)
						int tmp13 = x;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(860)
						int tmp14 = (tmp12 + tmp13);		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(860)
						int tmp15 = (tmp14 * (int)4);		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(860)
						index = tmp15;
						HX_STACK_LINE(862)
						{
							HX_STACK_LINE(862)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + sourceIndex));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(862)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(862)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(862)
							{
								HX_STACK_LINE(862)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + index),val);
								HX_STACK_LINE(862)
								val;
							}
						}
						HX_STACK_LINE(863)
						{
							HX_STACK_LINE(863)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)1))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(863)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(863)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(863)
							{
								HX_STACK_LINE(863)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)1))),val);
								HX_STACK_LINE(863)
								val;
							}
						}
						HX_STACK_LINE(864)
						{
							HX_STACK_LINE(864)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(864)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(864)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(864)
							{
								HX_STACK_LINE(864)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)2))),val);
								HX_STACK_LINE(864)
								val;
							}
						}
						HX_STACK_LINE(865)
						{
							HX_STACK_LINE(865)
							int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((sourceIndex + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(865)
							Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(865)
							int val = tmp17;		HX_STACK_VAR(val,"val");
							HX_STACK_LINE(865)
							{
								HX_STACK_LINE(865)
								::__hxcpp_memory_set_byte(newData->buffer->b,(newData->byteOffset + ((index + (int)3))),val);
								HX_STACK_LINE(865)
								val;
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(871)
		buffer->data = newData;
		HX_STACK_LINE(872)
		buffer->width = newWidth;
		HX_STACK_LINE(873)
		buffer->height = newHeight;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,resizeBuffer,(void))

Void ImageDataUtil_obj::setFormat( ::lime::graphics::Image image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setFormat",0xff73210b,"lime.graphics.utils.ImageDataUtil.setFormat","lime/graphics/utils/ImageDataUtil.hx",878,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(880)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(880)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(881)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(881)
		if ((tmp1)){
			HX_STACK_LINE(881)
			return null();
		}
		HX_STACK_LINE(884)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(884)
		if ((tmp2)){
			HX_STACK_LINE(884)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
		}
		else{
			HX_STACK_LINE(888)
			int index;		HX_STACK_VAR(index,"index");
			HX_STACK_LINE(888)
			Dynamic a16;		HX_STACK_VAR(a16,"a16");
			HX_STACK_LINE(889)
			int tmp3 = data->length;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(889)
			Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(889)
			int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(889)
			int length = tmp5;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(890)
			int r1;		HX_STACK_VAR(r1,"r1");
			HX_STACK_LINE(890)
			int g1;		HX_STACK_VAR(g1,"g1");
			HX_STACK_LINE(890)
			int b1;		HX_STACK_VAR(b1,"b1");
			HX_STACK_LINE(890)
			int a1;		HX_STACK_VAR(a1,"a1");
			HX_STACK_LINE(890)
			int r2;		HX_STACK_VAR(r2,"r2");
			HX_STACK_LINE(890)
			int g2;		HX_STACK_VAR(g2,"g2");
			HX_STACK_LINE(890)
			int b2;		HX_STACK_VAR(b2,"b2");
			HX_STACK_LINE(890)
			int a2;		HX_STACK_VAR(a2,"a2");
			HX_STACK_LINE(891)
			Dynamic r;		HX_STACK_VAR(r,"r");
			HX_STACK_LINE(891)
			Dynamic g;		HX_STACK_VAR(g,"g");
			HX_STACK_LINE(891)
			Dynamic b;		HX_STACK_VAR(b,"b");
			HX_STACK_LINE(891)
			Dynamic a;		HX_STACK_VAR(a,"a");
			HX_STACK_LINE(893)
			{
				HX_STACK_LINE(893)
				int tmp6 = image->get_format();		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(893)
				int _g = tmp6;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(893)
				int tmp7 = _g;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(893)
				switch( (int)(tmp7)){
					case (int)0: {
						HX_STACK_LINE(897)
						r1 = (int)0;
						HX_STACK_LINE(898)
						g1 = (int)1;
						HX_STACK_LINE(899)
						b1 = (int)2;
						HX_STACK_LINE(900)
						a1 = (int)3;
					}
					;break;
					case (int)1: {
						HX_STACK_LINE(904)
						r1 = (int)1;
						HX_STACK_LINE(905)
						g1 = (int)2;
						HX_STACK_LINE(906)
						b1 = (int)3;
						HX_STACK_LINE(907)
						a1 = (int)0;
					}
					;break;
					case (int)2: {
						HX_STACK_LINE(911)
						r1 = (int)2;
						HX_STACK_LINE(912)
						g1 = (int)1;
						HX_STACK_LINE(913)
						b1 = (int)0;
						HX_STACK_LINE(914)
						a1 = (int)3;
					}
					;break;
				}
			}
			HX_STACK_LINE(918)
			int tmp6 = format;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(918)
			switch( (int)(tmp6)){
				case (int)0: {
					HX_STACK_LINE(922)
					r2 = (int)0;
					HX_STACK_LINE(923)
					g2 = (int)1;
					HX_STACK_LINE(924)
					b2 = (int)2;
					HX_STACK_LINE(925)
					a2 = (int)3;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(929)
					r2 = (int)1;
					HX_STACK_LINE(930)
					g2 = (int)2;
					HX_STACK_LINE(931)
					b2 = (int)3;
					HX_STACK_LINE(932)
					a2 = (int)0;
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(936)
					r2 = (int)2;
					HX_STACK_LINE(937)
					g2 = (int)1;
					HX_STACK_LINE(938)
					b2 = (int)0;
					HX_STACK_LINE(939)
					a2 = (int)3;
				}
				;break;
			}
			HX_STACK_LINE(943)
			{
				HX_STACK_LINE(943)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(943)
				while((true)){
					HX_STACK_LINE(943)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(943)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(943)
					if ((tmp8)){
						HX_STACK_LINE(943)
						break;
					}
					HX_STACK_LINE(943)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(943)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(945)
					int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(945)
					index = tmp10;
					HX_STACK_LINE(947)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + r1))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(947)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(947)
					r = tmp12;
					HX_STACK_LINE(948)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + g1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(948)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(948)
					g = tmp14;
					HX_STACK_LINE(949)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + b1))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(949)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(949)
					b = tmp16;
					HX_STACK_LINE(950)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((index + a1))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(950)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(950)
					a = tmp18;
					HX_STACK_LINE(952)
					{
						HX_STACK_LINE(952)
						int val = r;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(952)
						{
							HX_STACK_LINE(952)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + r2))),val);
							HX_STACK_LINE(952)
							val;
						}
					}
					HX_STACK_LINE(953)
					{
						HX_STACK_LINE(953)
						int val = g;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(953)
						{
							HX_STACK_LINE(953)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + g2))),val);
							HX_STACK_LINE(953)
							val;
						}
					}
					HX_STACK_LINE(954)
					{
						HX_STACK_LINE(954)
						int val = b;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(954)
						{
							HX_STACK_LINE(954)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + b2))),val);
							HX_STACK_LINE(954)
							val;
						}
					}
					HX_STACK_LINE(955)
					{
						HX_STACK_LINE(955)
						int val = a;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(955)
						{
							HX_STACK_LINE(955)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((index + a2))),val);
							HX_STACK_LINE(955)
							val;
						}
					}
				}
			}
		}
		HX_STACK_LINE(961)
		image->buffer->format = format;
		HX_STACK_LINE(962)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,setFormat,(void))

Void ImageDataUtil_obj::setPixel( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel",0x7a534b32,"lime.graphics.utils.ImageDataUtil.setPixel","lime/graphics/utils/ImageDataUtil.hx",967,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(969)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(971)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(971)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(973)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(973)
				{
					HX_STACK_LINE(973)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(973)
					{
						HX_STACK_LINE(973)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(973)
						{
							HX_STACK_LINE(973)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(973)
							tmp2 = rgba;
						}
						HX_STACK_LINE(973)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(973)
						{
							HX_STACK_LINE(973)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(973)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(973)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(973)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(973)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(973)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(973)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(973)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(973)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(973)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(973)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(973)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(973)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(973)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(973)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(973)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(973)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(973)
							rgba = tmp19;
						}
						HX_STACK_LINE(973)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(973)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(974)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(974)
				{
					HX_STACK_LINE(974)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(974)
					{
						HX_STACK_LINE(974)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(974)
						{
							HX_STACK_LINE(974)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(974)
							tmp2 = rgba;
						}
						HX_STACK_LINE(974)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(974)
						{
							HX_STACK_LINE(974)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(974)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(974)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(974)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(974)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(974)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(974)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(974)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(974)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(974)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(974)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(974)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(974)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(974)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(974)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(974)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(974)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(974)
							rgba = tmp19;
						}
						HX_STACK_LINE(974)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(974)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(975)
				pixel = color;
			}
		}
		HX_STACK_LINE(981)
		int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(981)
		{
			HX_STACK_LINE(981)
			int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(981)
			tmp1 = rgba;
		}
		HX_STACK_LINE(981)
		int source = tmp1;		HX_STACK_VAR(source,"source");
		HX_STACK_LINE(982)
		{
			HX_STACK_LINE(982)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(982)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(982)
			int tmp3 = (y + image->offsetY);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(982)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(982)
			int tmp5 = image->buffer->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(982)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(982)
			int tmp7 = (x + image->offsetX);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(982)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(982)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(982)
			int offset = tmp9;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(982)
			int tmp10 = image->buffer->format;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(982)
			switch( (int)(tmp10)){
				case (int)2: {
					HX_STACK_LINE(982)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(982)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(982)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(982)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(982)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(982)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(982)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(982)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(982)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(982)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(982)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(982)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(982)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(982)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(982)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(982)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(982)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(982)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(982)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(982)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(982)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(982)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(982)
					source = tmp28;
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(982)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(982)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(982)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(982)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(982)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(982)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(982)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(982)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(982)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(982)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(982)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(982)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(982)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(982)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(982)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(982)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(982)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(982)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(982)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(982)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(982)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(982)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(982)
					source = tmp28;
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(982)
					int tmp11 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(982)
					Dynamic tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(982)
					int r = tmp12;		HX_STACK_VAR(r,"r");
					HX_STACK_LINE(982)
					int tmp13 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(982)
					Dynamic tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(982)
					int g = tmp14;		HX_STACK_VAR(g,"g");
					HX_STACK_LINE(982)
					int tmp15 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(982)
					Dynamic tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(982)
					int b = tmp16;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(982)
					int tmp17 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(982)
					Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(982)
					int a = tmp18;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(982)
					int tmp19 = (int(r) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(982)
					int tmp20 = (int(tmp19) << int((int)24));		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(982)
					int tmp21 = (int(g) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(982)
					int tmp22 = (int(tmp21) << int((int)16));		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(982)
					int tmp23 = (int(tmp20) | int(tmp22));		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(982)
					int tmp24 = (int(b) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(982)
					int tmp25 = (int(tmp24) << int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(982)
					int tmp26 = (int(tmp23) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(982)
					int tmp27 = (int(a) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(982)
					int tmp28 = (int(tmp26) | int(tmp27));		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(982)
					source = tmp28;
				}
				;break;
			}
			HX_STACK_LINE(982)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(982)
			if ((tmp11)){
				HX_STACK_LINE(982)
				int tmp12 = (int(source) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(982)
				bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(982)
				bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(982)
				if ((tmp13)){
					HX_STACK_LINE(982)
					int tmp15 = (int(source) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(982)
					int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(982)
					tmp14 = (tmp16 != (int)255);
				}
				else{
					HX_STACK_LINE(982)
					tmp14 = false;
				}
				HX_STACK_LINE(982)
				if ((tmp14)){
					HX_STACK_LINE(982)
					int tmp15 = (int(source) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(982)
					Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(982)
					::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
					HX_STACK_LINE(982)
					{
						HX_STACK_LINE(982)
						Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(982)
						{
							HX_STACK_LINE(982)
							::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(982)
							::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(982)
							int tmp19 = (int(source) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(982)
							int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(982)
							Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(982)
							Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(982)
							int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(982)
							int idx = tmp23;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(982)
							int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(982)
							tmp17 = (int(tmp24) & int((int)255));
						}
						HX_STACK_LINE(982)
						int r = tmp17;		HX_STACK_VAR(r,"r");
						HX_STACK_LINE(982)
						Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
						HX_STACK_LINE(982)
						{
							HX_STACK_LINE(982)
							::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(982)
							::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(982)
							int tmp20 = (int(source) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(982)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(982)
							Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(982)
							Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(982)
							int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(982)
							int idx = tmp24;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(982)
							int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(982)
							tmp18 = (int(tmp25) & int((int)255));
						}
						HX_STACK_LINE(982)
						int g = tmp18;		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(982)
						Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
						HX_STACK_LINE(982)
						{
							HX_STACK_LINE(982)
							::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(982)
							::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(982)
							int tmp21 = (int(source) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(982)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(982)
							Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(982)
							Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(982)
							int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(982)
							int idx = tmp25;		HX_STACK_VAR(idx,"idx");
							HX_STACK_LINE(982)
							int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(982)
							tmp19 = (int(tmp26) & int((int)255));
						}
						HX_STACK_LINE(982)
						int b = tmp19;		HX_STACK_VAR(b,"b");
						HX_STACK_LINE(982)
						int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(982)
						int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(982)
						int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(982)
						int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(982)
						int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(982)
						int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(982)
						int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(982)
						int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(982)
						int tmp28 = (int(source) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(982)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(982)
						int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(982)
						source = tmp30;
					}
				}
			}
		}
		HX_STACK_LINE(984)
		{
			HX_STACK_LINE(984)
			int tmp2 = (int(source) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(984)
			int value = tmp2;		HX_STACK_VAR(value,"value");
			HX_STACK_LINE(984)
			{
				HX_STACK_LINE(984)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(984)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(984)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(984)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(984)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(984)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(984)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(984)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(984)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(984)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(984)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(984)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(984)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(984)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(984)
				int tmp17 = (int(value) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(984)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(984)
				pixel = tmp18;
			}
			HX_STACK_LINE(984)
			value;
		}
		HX_STACK_LINE(985)
		{
			HX_STACK_LINE(985)
			::lime::utils::ArrayBufferView tmp2 = image->buffer->data;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(985)
			::lime::utils::ArrayBufferView data = tmp2;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(985)
			int tmp3 = (y + image->offsetY);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(985)
			int tmp4 = ((int)4 * tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(985)
			int tmp5 = image->buffer->width;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(985)
			int tmp6 = (tmp4 * tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(985)
			int tmp7 = (x + image->offsetX);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(985)
			int tmp8 = (tmp7 * (int)4);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(985)
			int tmp9 = (tmp6 + tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(985)
			int offset = tmp9;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(985)
			bool tmp10 = image->buffer->premultiplied;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(985)
			if ((tmp10)){
				HX_STACK_LINE(985)
				int tmp11 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(985)
				bool tmp12 = (tmp11 == (int)0);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(985)
				if ((tmp12)){
					HX_STACK_LINE(985)
					bool tmp13 = (pixel != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(985)
					if ((tmp13)){
						HX_STACK_LINE(985)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(985)
					int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(985)
					bool tmp14 = (tmp13 != (int)255);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(985)
					if ((tmp14)){
						HX_STACK_LINE(985)
						Dynamic tmp15;		HX_STACK_VAR(tmp15,"tmp15");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::lime::utils::ArrayBufferView tmp16 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(985)
							::lime::utils::ArrayBufferView this1 = tmp16;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(985)
							{
								HX_STACK_LINE(985)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(985)
								tmp15 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
							}
						}
						HX_STACK_LINE(985)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp15;
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							int tmp16 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(985)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(985)
							int tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(985)
							int tmp19 = (tmp17 * tmp18);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(985)
							int tmp20 = (int(tmp19) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(985)
							int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(985)
							int tmp22 = (int(tmp21) << int((int)24));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(985)
							int tmp23 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(985)
							int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(985)
							int tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(985)
							int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(985)
							int tmp27 = (int(tmp26) >> int((int)16));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(985)
							int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(985)
							int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(985)
							int tmp30 = (int(tmp22) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(985)
							int tmp31 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(985)
							int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(985)
							int tmp33 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(985)
							int tmp34 = (tmp32 * tmp33);		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(985)
							int tmp35 = (int(tmp34) >> int((int)16));		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(985)
							int tmp36 = (int(tmp35) & int((int)255));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(985)
							int tmp37 = (int(tmp36) << int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(985)
							int tmp38 = (int(tmp30) | int(tmp37));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(985)
							int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(985)
							int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(985)
							int tmp41 = (int(tmp38) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(985)
							pixel = tmp41;
						}
					}
				}
			}
			HX_STACK_LINE(985)
			int tmp11 = image->buffer->format;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(985)
			switch( (int)(tmp11)){
				case (int)2: {
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int val = tmp12;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
					HX_STACK_LINE(985)
					{
						HX_STACK_LINE(985)
						int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(985)
						int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(985)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(985)
						{
							HX_STACK_LINE(985)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(985)
							val;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(987)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel,(void))

Void ImageDataUtil_obj::setPixel32( ::lime::graphics::Image image,int x,int y,int color,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixel32",0x2e222851,"lime.graphics.utils.ImageDataUtil.setPixel32","lime/graphics/utils/ImageDataUtil.hx",992,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(994)
		int pixel;		HX_STACK_VAR(pixel,"pixel");
		HX_STACK_LINE(996)
		int tmp = format;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(996)
		switch( (int)(tmp)){
			case (int)1: {
				HX_STACK_LINE(998)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(998)
				{
					HX_STACK_LINE(998)
					int argb = color;		HX_STACK_VAR(argb,"argb");
					HX_STACK_LINE(998)
					{
						HX_STACK_LINE(998)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(998)
						{
							HX_STACK_LINE(998)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(998)
							tmp2 = rgba;
						}
						HX_STACK_LINE(998)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(998)
						{
							HX_STACK_LINE(998)
							int tmp3 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(998)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(998)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(998)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(998)
							int tmp7 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(998)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(998)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(998)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(998)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(998)
							int tmp12 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(998)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(998)
							int tmp14 = (int(tmp13) << int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(998)
							int tmp15 = (int(tmp11) | int(tmp14));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(998)
							int tmp16 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(998)
							int tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(998)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(998)
							int tmp19 = (int(tmp15) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(998)
							rgba = tmp19;
						}
						HX_STACK_LINE(998)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(998)
				pixel = tmp1;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(999)
				int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
				HX_STACK_LINE(999)
				{
					HX_STACK_LINE(999)
					int bgra = color;		HX_STACK_VAR(bgra,"bgra");
					HX_STACK_LINE(999)
					{
						HX_STACK_LINE(999)
						int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
						HX_STACK_LINE(999)
						{
							HX_STACK_LINE(999)
							int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
							HX_STACK_LINE(999)
							tmp2 = rgba;
						}
						HX_STACK_LINE(999)
						int rgba = tmp2;		HX_STACK_VAR(rgba,"rgba");
						HX_STACK_LINE(999)
						{
							HX_STACK_LINE(999)
							int tmp3 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp3,"tmp3");
							HX_STACK_LINE(999)
							int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
							HX_STACK_LINE(999)
							int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
							HX_STACK_LINE(999)
							int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
							HX_STACK_LINE(999)
							int tmp7 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(999)
							int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(999)
							int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(999)
							int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(999)
							int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
							HX_STACK_LINE(999)
							int tmp12 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(999)
							int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(999)
							int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(999)
							int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(999)
							int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(999)
							int tmp17 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(999)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(999)
							int tmp19 = (int(tmp16) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(999)
							rgba = tmp19;
						}
						HX_STACK_LINE(999)
						tmp1 = rgba;
					}
				}
				HX_STACK_LINE(999)
				pixel = tmp1;
			}
			;break;
			default: {
				HX_STACK_LINE(1000)
				pixel = color;
			}
		}
		HX_STACK_LINE(1004)
		bool tmp1 = image->get_transparent();		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1004)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1004)
		if ((tmp2)){
			HX_STACK_LINE(1004)
			{
				HX_STACK_LINE(1004)
				int tmp3 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1004)
				int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1004)
				int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1004)
				int tmp6 = (int(tmp5) << int((int)24));		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1004)
				int tmp7 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1004)
				int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1004)
				int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1004)
				int tmp10 = (int(tmp9) << int((int)16));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1004)
				int tmp11 = (int(tmp6) | int(tmp10));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1004)
				int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1004)
				int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1004)
				int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1004)
				int tmp15 = (int(tmp14) << int((int)8));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1004)
				int tmp16 = (int(tmp11) | int(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1004)
				int tmp17 = (int)255;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1004)
				int tmp18 = (int(tmp16) | int(tmp17));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1004)
				pixel = tmp18;
			}
			HX_STACK_LINE(1004)
			(int)255;
		}
		HX_STACK_LINE(1005)
		{
			HX_STACK_LINE(1005)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1005)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1005)
			int tmp4 = (y + image->offsetY);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1005)
			int tmp5 = ((int)4 * tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1005)
			int tmp6 = image->buffer->width;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1005)
			int tmp7 = (tmp5 * tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1005)
			int tmp8 = (x + image->offsetX);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1005)
			int tmp9 = (tmp8 * (int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1005)
			int tmp10 = (tmp7 + tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1005)
			int offset = tmp10;		HX_STACK_VAR(offset,"offset");
			HX_STACK_LINE(1005)
			bool tmp11 = image->buffer->premultiplied;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1005)
			if ((tmp11)){
				HX_STACK_LINE(1005)
				int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1005)
				bool tmp13 = (tmp12 == (int)0);		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1005)
				if ((tmp13)){
					HX_STACK_LINE(1005)
					bool tmp14 = (pixel != (int)0);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1005)
					if ((tmp14)){
						HX_STACK_LINE(1005)
						pixel = (int)0;
					}
				}
				else{
					HX_STACK_LINE(1005)
					int tmp14 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1005)
					bool tmp15 = (tmp14 != (int)255);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1005)
					if ((tmp15)){
						HX_STACK_LINE(1005)
						Dynamic tmp16;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::lime::utils::ArrayBufferView tmp17 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1005)
							::lime::utils::ArrayBufferView this1 = tmp17;		HX_STACK_VAR(this1,"this1");
							HX_STACK_LINE(1005)
							{
								HX_STACK_LINE(1005)
								bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
								HX_STACK_LINE(1005)
								tmp16 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
							}
						}
						HX_STACK_LINE(1005)
						::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp16;
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1005)
							int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1005)
							int tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1005)
							int tmp20 = (tmp18 * tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1005)
							int tmp21 = (int(tmp20) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1005)
							int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1005)
							int tmp23 = (int(tmp22) << int((int)24));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1005)
							int tmp24 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1005)
							int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1005)
							int tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1005)
							int tmp27 = (tmp25 * tmp26);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1005)
							int tmp28 = (int(tmp27) >> int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1005)
							int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1005)
							int tmp30 = (int(tmp29) << int((int)16));		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1005)
							int tmp31 = (int(tmp23) | int(tmp30));		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1005)
							int tmp32 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1005)
							int tmp33 = (int(tmp32) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
							HX_STACK_LINE(1005)
							int tmp34 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp34,"tmp34");
							HX_STACK_LINE(1005)
							int tmp35 = (tmp33 * tmp34);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1005)
							int tmp36 = (int(tmp35) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1005)
							int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1005)
							int tmp38 = (int(tmp37) << int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1005)
							int tmp39 = (int(tmp31) | int(tmp38));		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1005)
							int tmp40 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1005)
							int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1005)
							int tmp42 = (int(tmp39) | int(tmp41));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1005)
							pixel = tmp42;
						}
					}
				}
			}
			HX_STACK_LINE(1005)
			int tmp12 = image->buffer->format;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1005)
			switch( (int)(tmp12)){
				case (int)2: {
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
				}
				;break;
				case (int)0: {
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
				}
				;break;
				case (int)1: {
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int val = tmp13;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
					HX_STACK_LINE(1005)
					{
						HX_STACK_LINE(1005)
						int tmp13 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(1005)
						int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
						HX_STACK_LINE(1005)
						int val = tmp14;		HX_STACK_VAR(val,"val");
						HX_STACK_LINE(1005)
						{
							HX_STACK_LINE(1005)
							::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
							HX_STACK_LINE(1005)
							val;
						}
					}
				}
				;break;
			}
		}
		HX_STACK_LINE(1007)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,setPixel32,(void))

Void ImageDataUtil_obj::setPixels( ::lime::graphics::Image image,::lime::math::Rectangle rect,::haxe::io::Bytes bytes,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","setPixels",0x8e8e8101,"lime.graphics.utils.ImageDataUtil.setPixels","lime/graphics/utils/ImageDataUtil.hx",1012,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1014)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1014)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1014)
		if ((tmp1)){
			HX_STACK_LINE(1014)
			return null();
		}
		HX_STACK_LINE(1017)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1017)
		if ((tmp2)){
			HX_STACK_LINE(1017)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
		}
		else{
			HX_STACK_LINE(1021)
			::lime::utils::ArrayBufferView tmp3 = image->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1021)
			::lime::utils::ArrayBufferView data = tmp3;		HX_STACK_VAR(data,"data");
			HX_STACK_LINE(1022)
			int tmp4 = image->buffer->format;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1022)
			int sourceFormat = tmp4;		HX_STACK_VAR(sourceFormat,"sourceFormat");
			HX_STACK_LINE(1023)
			bool tmp5 = image->buffer->premultiplied;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1023)
			bool premultiplied = tmp5;		HX_STACK_VAR(premultiplied,"premultiplied");
			HX_STACK_LINE(1024)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp6 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(image,rect);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1024)
			::lime::graphics::utils::_ImageDataUtil::ImageDataView dataView = tmp6;		HX_STACK_VAR(dataView,"dataView");
			HX_STACK_LINE(1025)
			int row;		HX_STACK_VAR(row,"row");
			HX_STACK_LINE(1025)
			int color;		HX_STACK_VAR(color,"color");
			HX_STACK_LINE(1025)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1026)
			bool tmp7 = image->get_transparent();		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1026)
			bool transparent = tmp7;		HX_STACK_VAR(transparent,"transparent");
			HX_STACK_LINE(1027)
			int dataPosition = (int)0;		HX_STACK_VAR(dataPosition,"dataPosition");
			HX_STACK_LINE(1029)
			{
				HX_STACK_LINE(1029)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1029)
				int _g = dataView->height;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1029)
				while((true)){
					HX_STACK_LINE(1029)
					bool tmp8 = (_g1 < _g);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1029)
					bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1029)
					if ((tmp9)){
						HX_STACK_LINE(1029)
						break;
					}
					HX_STACK_LINE(1029)
					int tmp10 = (_g1)++;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(1029)
					int y = tmp10;		HX_STACK_VAR(y,"y");
					HX_STACK_LINE(1031)
					int tmp11 = dataView->offset;		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(1031)
					int tmp12 = (dataView->stride * y);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(1031)
					int tmp13 = (tmp11 + tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1031)
					row = tmp13;
					HX_STACK_LINE(1033)
					{
						HX_STACK_LINE(1033)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1033)
						int _g2 = dataView->width;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1033)
						while((true)){
							HX_STACK_LINE(1033)
							bool tmp14 = (_g3 < _g2);		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1033)
							bool tmp15 = !(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(1033)
							if ((tmp15)){
								HX_STACK_LINE(1033)
								break;
							}
							HX_STACK_LINE(1033)
							int tmp16 = (_g3)++;		HX_STACK_VAR(tmp16,"tmp16");
							HX_STACK_LINE(1033)
							int x = tmp16;		HX_STACK_VAR(x,"x");
							HX_STACK_LINE(1036)
							int tmp17 = (dataPosition + (int)3);		HX_STACK_VAR(tmp17,"tmp17");
							HX_STACK_LINE(1036)
							int tmp18 = bytes->b->__get(tmp17);		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1036)
							int tmp19 = (dataPosition + (int)2);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1036)
							int tmp20 = bytes->b->__get(tmp19);		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1036)
							int tmp21 = (int(tmp20) << int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
							HX_STACK_LINE(1036)
							int tmp22 = (int(tmp18) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1036)
							int tmp23 = (dataPosition + (int)1);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1036)
							int tmp24 = bytes->b->__get(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1036)
							int tmp25 = (int(tmp24) << int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(1036)
							int tmp26 = (int(tmp22) | int(tmp25));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(1036)
							int tmp27 = bytes->b->__get(dataPosition);		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(1036)
							int tmp28 = (int(tmp27) << int((int)24));		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(1036)
							int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(1036)
							color = tmp29;
							HX_STACK_LINE(1037)
							hx::AddEq(dataPosition,(int)4);
							HX_STACK_LINE(1039)
							int tmp30 = format;		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(1039)
							switch( (int)(tmp30)){
								case (int)1: {
									HX_STACK_LINE(1041)
									int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1041)
									{
										HX_STACK_LINE(1041)
										int argb = color;		HX_STACK_VAR(argb,"argb");
										HX_STACK_LINE(1041)
										{
											HX_STACK_LINE(1041)
											int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1041)
											{
												HX_STACK_LINE(1041)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1041)
												tmp32 = rgba;
											}
											HX_STACK_LINE(1041)
											int rgba = tmp32;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1041)
											{
												HX_STACK_LINE(1041)
												int tmp33 = (int(argb) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1041)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1041)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1041)
												int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1041)
												int tmp37 = (int(argb) >> int((int)8));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1041)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1041)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1041)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1041)
												int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1041)
												int tmp42 = (int(argb) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1041)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1041)
												int tmp44 = (int(tmp43) << int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1041)
												int tmp45 = (int(tmp41) | int(tmp44));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1041)
												int tmp46 = (int(argb) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1041)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1041)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1041)
												int tmp49 = (int(tmp45) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1041)
												rgba = tmp49;
											}
											HX_STACK_LINE(1041)
											tmp31 = rgba;
										}
									}
									HX_STACK_LINE(1041)
									pixel = tmp31;
								}
								;break;
								case (int)2: {
									HX_STACK_LINE(1042)
									int tmp31;		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1042)
									{
										HX_STACK_LINE(1042)
										int bgra = color;		HX_STACK_VAR(bgra,"bgra");
										HX_STACK_LINE(1042)
										{
											HX_STACK_LINE(1042)
											int tmp32;		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1042)
											{
												HX_STACK_LINE(1042)
												int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
												HX_STACK_LINE(1042)
												tmp32 = rgba;
											}
											HX_STACK_LINE(1042)
											int rgba = tmp32;		HX_STACK_VAR(rgba,"rgba");
											HX_STACK_LINE(1042)
											{
												HX_STACK_LINE(1042)
												int tmp33 = (int(bgra) >> int((int)8));		HX_STACK_VAR(tmp33,"tmp33");
												HX_STACK_LINE(1042)
												int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
												HX_STACK_LINE(1042)
												int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
												HX_STACK_LINE(1042)
												int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
												HX_STACK_LINE(1042)
												int tmp37 = (int(bgra) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
												HX_STACK_LINE(1042)
												int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
												HX_STACK_LINE(1042)
												int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
												HX_STACK_LINE(1042)
												int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
												HX_STACK_LINE(1042)
												int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
												HX_STACK_LINE(1042)
												int tmp42 = (int(bgra) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1042)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1042)
												int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1042)
												int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1042)
												int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1042)
												int tmp47 = (int(bgra) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1042)
												int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1042)
												int tmp49 = (int(tmp46) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1042)
												rgba = tmp49;
											}
											HX_STACK_LINE(1042)
											tmp31 = rgba;
										}
									}
									HX_STACK_LINE(1042)
									pixel = tmp31;
								}
								;break;
								default: {
									HX_STACK_LINE(1043)
									pixel = color;
								}
							}
							HX_STACK_LINE(1047)
							bool tmp31 = transparent;		HX_STACK_VAR(tmp31,"tmp31");
							HX_STACK_LINE(1047)
							bool tmp32 = !(tmp31);		HX_STACK_VAR(tmp32,"tmp32");
							HX_STACK_LINE(1047)
							if ((tmp32)){
								HX_STACK_LINE(1047)
								{
									HX_STACK_LINE(1047)
									int tmp33 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1047)
									int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1047)
									int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1047)
									int tmp36 = (int(tmp35) << int((int)24));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1047)
									int tmp37 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1047)
									int tmp38 = (int(tmp37) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1047)
									int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
									HX_STACK_LINE(1047)
									int tmp40 = (int(tmp39) << int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
									HX_STACK_LINE(1047)
									int tmp41 = (int(tmp36) | int(tmp40));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(1047)
									int tmp42 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(1047)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(1047)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1047)
									int tmp45 = (int(tmp44) << int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1047)
									int tmp46 = (int(tmp41) | int(tmp45));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1047)
									int tmp47 = (int)255;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1047)
									int tmp48 = (int(tmp46) | int(tmp47));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1047)
									pixel = tmp48;
								}
								HX_STACK_LINE(1047)
								(int)255;
							}
							HX_STACK_LINE(1048)
							{
								HX_STACK_LINE(1048)
								int tmp33 = row;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1048)
								int tmp34 = (x * (int)4);		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1048)
								int tmp35 = (tmp33 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
								HX_STACK_LINE(1048)
								int offset = tmp35;		HX_STACK_VAR(offset,"offset");
								HX_STACK_LINE(1048)
								bool tmp36 = premultiplied;		HX_STACK_VAR(tmp36,"tmp36");
								HX_STACK_LINE(1048)
								if ((tmp36)){
									HX_STACK_LINE(1048)
									int tmp37 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
									HX_STACK_LINE(1048)
									bool tmp38 = (tmp37 == (int)0);		HX_STACK_VAR(tmp38,"tmp38");
									HX_STACK_LINE(1048)
									if ((tmp38)){
										HX_STACK_LINE(1048)
										bool tmp39 = (pixel != (int)0);		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1048)
										if ((tmp39)){
											HX_STACK_LINE(1048)
											pixel = (int)0;
										}
									}
									else{
										HX_STACK_LINE(1048)
										int tmp39 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
										HX_STACK_LINE(1048)
										bool tmp40 = (tmp39 != (int)255);		HX_STACK_VAR(tmp40,"tmp40");
										HX_STACK_LINE(1048)
										if ((tmp40)){
											HX_STACK_LINE(1048)
											Dynamic tmp41;		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::lime::utils::ArrayBufferView tmp42 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1048)
												::lime::utils::ArrayBufferView this1 = tmp42;		HX_STACK_VAR(this1,"this1");
												HX_STACK_LINE(1048)
												{
													HX_STACK_LINE(1048)
													bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
													HX_STACK_LINE(1048)
													tmp41 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(pixel) & int((int)255))) * (int)4)));
												}
											}
											HX_STACK_LINE(1048)
											::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp41;
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												int tmp42 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
												HX_STACK_LINE(1048)
												int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
												HX_STACK_LINE(1048)
												int tmp44 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp44,"tmp44");
												HX_STACK_LINE(1048)
												int tmp45 = (tmp43 * tmp44);		HX_STACK_VAR(tmp45,"tmp45");
												HX_STACK_LINE(1048)
												int tmp46 = (int(tmp45) >> int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
												HX_STACK_LINE(1048)
												int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
												HX_STACK_LINE(1048)
												int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1048)
												int tmp49 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1048)
												int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1048)
												int tmp51 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1048)
												int tmp52 = (tmp50 * tmp51);		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1048)
												int tmp53 = (int(tmp52) >> int((int)16));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1048)
												int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1048)
												int tmp55 = (int(tmp54) << int((int)16));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1048)
												int tmp56 = (int(tmp48) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1048)
												int tmp57 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1048)
												int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1048)
												int tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1048)
												int tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1048)
												int tmp61 = (int(tmp60) >> int((int)16));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1048)
												int tmp62 = (int(tmp61) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1048)
												int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1048)
												int tmp64 = (int(tmp56) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1048)
												int tmp65 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1048)
												int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
												HX_STACK_LINE(1048)
												int tmp67 = (int(tmp64) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
												HX_STACK_LINE(1048)
												pixel = tmp67;
											}
										}
									}
								}
								HX_STACK_LINE(1048)
								int tmp37 = sourceFormat;		HX_STACK_VAR(tmp37,"tmp37");
								HX_STACK_LINE(1048)
								switch( (int)(tmp37)){
									case (int)2: {
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
									}
									;break;
									case (int)0: {
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
									}
									;break;
									case (int)1: {
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int val = tmp38;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
										HX_STACK_LINE(1048)
										{
											HX_STACK_LINE(1048)
											int tmp38 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1048)
											int tmp39 = (int(tmp38) & int((int)255));		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1048)
											int val = tmp39;		HX_STACK_VAR(val,"val");
											HX_STACK_LINE(1048)
											{
												HX_STACK_LINE(1048)
												::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
												HX_STACK_LINE(1048)
												val;
											}
										}
									}
									;break;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(1056)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,setPixels,(void))

int ImageDataUtil_obj::threshold( ::lime::graphics::Image destImage,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,::lime::math::Vector2 destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","threshold",0xd6e0e03d,"lime.graphics.utils.ImageDataUtil.threshold","lime/graphics/utils/ImageDataUtil.hx",1061,0x494d921f)
	HX_STACK_ARG(destImage,"destImage")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1063)
		int tmp = (int(threshold) & int(mask));		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1063)
		int thresholdMask = tmp;		HX_STACK_VAR(thresholdMask,"thresholdMask");
		HX_STACK_LINE(1065)
		int tmp1 = (int(thresholdMask) >> int((int)24));		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1065)
		int tmp2 = (int(tmp1) & int((int)255));		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1065)
		int a = tmp2;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(1066)
		int tmp3 = (int(thresholdMask) >> int((int)16));		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1066)
		int tmp4 = (int(tmp3) & int((int)255));		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1066)
		int r = tmp4;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(1067)
		int tmp5 = (int(thresholdMask) >> int((int)8));		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1067)
		int tmp6 = (int(tmp5) & int((int)255));		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1067)
		int g = tmp6;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(1068)
		int tmp7 = (int(thresholdMask) & int((int)255));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1068)
		int b = tmp7;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1070)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1070)
		{
			HX_STACK_LINE(1070)
			int tmp9;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1070)
			{
				HX_STACK_LINE(1070)
				int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(1070)
				tmp9 = rgba;
			}
			HX_STACK_LINE(1070)
			int rgba = tmp9;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(1070)
			{
				HX_STACK_LINE(1070)
				int tmp10 = (int(r) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(1070)
				int tmp11 = (int(tmp10) << int((int)24));		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(1070)
				int tmp12 = (int(g) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1070)
				int tmp13 = (int(tmp12) << int((int)16));		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(1070)
				int tmp14 = (int(tmp11) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(1070)
				int tmp15 = (int(b) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(1070)
				int tmp16 = (int(tmp15) << int((int)8));		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(1070)
				int tmp17 = (int(tmp14) | int(tmp16));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1070)
				int tmp18 = (int(a) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1070)
				int tmp19 = (int(tmp17) | int(tmp18));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1070)
				rgba = tmp19;
			}
			HX_STACK_LINE(1070)
			tmp8 = rgba;
		}
		HX_STACK_LINE(1070)
		int thresholdRGBA = tmp8;		HX_STACK_VAR(thresholdRGBA,"thresholdRGBA");
		HX_STACK_LINE(1072)
		int tmp9 = (int(color) >> int((int)24));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1072)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1072)
		a = tmp10;
		HX_STACK_LINE(1073)
		int tmp11 = (int(color) >> int((int)16));		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1073)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1073)
		r = tmp12;
		HX_STACK_LINE(1074)
		int tmp13 = (int(color) >> int((int)8));		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1074)
		int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1074)
		g = tmp14;
		HX_STACK_LINE(1075)
		int tmp15 = (int(color) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1075)
		b = tmp15;
		HX_STACK_LINE(1077)
		int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1077)
		{
			HX_STACK_LINE(1077)
			int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1077)
			{
				HX_STACK_LINE(1077)
				int rgba = (int)0;		HX_STACK_VAR(rgba,"rgba");
				HX_STACK_LINE(1077)
				tmp17 = rgba;
			}
			HX_STACK_LINE(1077)
			int rgba = tmp17;		HX_STACK_VAR(rgba,"rgba");
			HX_STACK_LINE(1077)
			{
				HX_STACK_LINE(1077)
				int tmp18 = (int(r) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1077)
				int tmp19 = (int(tmp18) << int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1077)
				int tmp20 = (int(g) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(1077)
				int tmp21 = (int(tmp20) << int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(1077)
				int tmp22 = (int(tmp19) | int(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(1077)
				int tmp23 = (int(b) & int((int)255));		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(1077)
				int tmp24 = (int(tmp23) << int((int)8));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(1077)
				int tmp25 = (int(tmp22) | int(tmp24));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(1077)
				int tmp26 = (int(a) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1077)
				int tmp27 = (int(tmp25) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(1077)
				rgba = tmp27;
			}
			HX_STACK_LINE(1077)
			tmp16 = rgba;
		}
		HX_STACK_LINE(1077)
		int colorRGBA = tmp16;		HX_STACK_VAR(colorRGBA,"colorRGBA");
		HX_STACK_LINE(1079)
		::String tmp17 = operation;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1079)
		int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1079)
		::String _switch_1 = (tmp17);
		if (  ( _switch_1==HX_HCSTRING("==","\x60","\x35","\x00","\x00"))){
			HX_STACK_LINE(1081)
			tmp18 = (int)0;
		}
		else if (  ( _switch_1==HX_HCSTRING("<","\x3c","\x00","\x00","\x00"))){
			HX_STACK_LINE(1082)
			tmp18 = (int)1;
		}
		else if (  ( _switch_1==HX_HCSTRING(">","\x3e","\x00","\x00","\x00"))){
			HX_STACK_LINE(1083)
			tmp18 = (int)2;
		}
		else if (  ( _switch_1==HX_HCSTRING("<=","\x81","\x34","\x00","\x00"))){
			HX_STACK_LINE(1084)
			tmp18 = (int)3;
		}
		else if (  ( _switch_1==HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"))){
			HX_STACK_LINE(1085)
			tmp18 = (int)4;
		}
		else if (  ( _switch_1==HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"))){
			HX_STACK_LINE(1086)
			tmp18 = (int)5;
		}
		else  {
			HX_STACK_LINE(1087)
			tmp18 = (int)0;
		}
;
;
		HX_STACK_LINE(1079)
		int operationEnum = tmp18;		HX_STACK_VAR(operationEnum,"operationEnum");
		HX_STACK_LINE(1091)
		int hits = (int)0;		HX_STACK_VAR(hits,"hits");
		HX_STACK_LINE(1093)
		bool tmp19 = (sourceImage == destImage);		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1093)
		bool tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1093)
		bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1093)
		if ((tmp20)){
			HX_STACK_LINE(1093)
			::lime::math::Rectangle tmp22 = destImage->get_rect();		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1093)
			::lime::math::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1093)
			::lime::math::Rectangle tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1093)
			::lime::math::Rectangle tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1093)
			::lime::math::Rectangle tmp26 = tmp25;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1093)
			tmp21 = sourceRect->equals(tmp26);
		}
		else{
			HX_STACK_LINE(1093)
			tmp21 = false;
		}
		HX_STACK_LINE(1093)
		bool tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1093)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1093)
		if ((tmp22)){
			HX_STACK_LINE(1093)
			tmp23 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(1093)
			tmp23 = false;
		}
		HX_STACK_LINE(1093)
		bool tmp24;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1093)
		if ((tmp23)){
			HX_STACK_LINE(1093)
			tmp24 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(1093)
			tmp24 = false;
		}
		HX_STACK_LINE(1093)
		if ((tmp24)){
			HX_STACK_LINE(1095)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1095)
			Dynamic i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1095)
			Dynamic test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1098)
			bool tmp25 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1098)
			if ((tmp25)){
				HX_STACK_LINE(1098)
				int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1098)
				{
					HX_STACK_LINE(1098)
					::lime::math::Rectangle tmp27 = ::lime::math::Rectangle_obj::__new((int)0,(int)0,sourceRect->width,sourceRect->height);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1098)
					Dynamic destRect = tmp27;		HX_STACK_VAR(destRect,"destRect");
					HX_STACK_LINE(1098)
					tmp26 = ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop.call(hx::DynamicPtr(destImage),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),mask,thresholdRGBA,operationEnum,colorRGBA,hx::DynamicPtr(destRect));
				}
				HX_STACK_LINE(1098)
				hits = tmp26;
			}
			else{
				HX_STACK_LINE(1102)
				int tmp26;		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(1102)
				{
					HX_STACK_LINE(1102)
					Float tmp27 = sourceRect->width;		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(1102)
					int tmp28 = ::Std_obj::_int(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(1102)
					int destWidth = tmp28;		HX_STACK_VAR(destWidth,"destWidth");
					HX_STACK_LINE(1102)
					Float tmp29 = sourceRect->height;		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(1102)
					int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(1102)
					int destHeight = tmp30;		HX_STACK_VAR(destHeight,"destHeight");
					HX_STACK_LINE(1102)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp31 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(1102)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp31;		HX_STACK_VAR(srcView,"srcView");
					HX_STACK_LINE(1102)
					int srcPixel = (int)0;		HX_STACK_VAR(srcPixel,"srcPixel");
					HX_STACK_LINE(1102)
					int srcPosition = (int)0;		HX_STACK_VAR(srcPosition,"srcPosition");
					HX_STACK_LINE(1102)
					int tmp32 = sourceImage->buffer->format;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(1102)
					int srcFormat = tmp32;		HX_STACK_VAR(srcFormat,"srcFormat");
					HX_STACK_LINE(1102)
					bool tmp33 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(1102)
					bool srcPremultiplied = tmp33;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
					HX_STACK_LINE(1102)
					::lime::utils::ArrayBufferView tmp34 = sourceImage->buffer->data;		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1102)
					::lime::utils::ArrayBufferView srcData = tmp34;		HX_STACK_VAR(srcData,"srcData");
					HX_STACK_LINE(1102)
					int colorRGBA1 = colorRGBA;		HX_STACK_VAR(colorRGBA1,"colorRGBA1");
					HX_STACK_LINE(1102)
					int pixelMask1 = (int)0;		HX_STACK_VAR(pixelMask1,"pixelMask1");
					HX_STACK_LINE(1102)
					int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1102)
					bool test1 = false;		HX_STACK_VAR(test1,"test1");
					HX_STACK_LINE(1102)
					int hits1 = (int)0;		HX_STACK_VAR(hits1,"hits1");
					HX_STACK_LINE(1102)
					{
						HX_STACK_LINE(1102)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1102)
						while((true)){
							HX_STACK_LINE(1102)
							bool tmp35 = (_g < destHeight);		HX_STACK_VAR(tmp35,"tmp35");
							HX_STACK_LINE(1102)
							bool tmp36 = !(tmp35);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(1102)
							if ((tmp36)){
								HX_STACK_LINE(1102)
								break;
							}
							HX_STACK_LINE(1102)
							int tmp37 = (_g)++;		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(1102)
							int yy = tmp37;		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(1102)
							int tmp38 = srcView->offset;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(1102)
							int tmp39 = srcView->stride;		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(1102)
							int tmp40 = yy;		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(1102)
							int tmp41 = (tmp39 * tmp40);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1102)
							int tmp42 = (tmp38 + tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1102)
							srcPosition = tmp42;
							HX_STACK_LINE(1102)
							int tmp43 = (int)0;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1102)
							hx::AddEq(srcPosition,tmp43);
							HX_STACK_LINE(1102)
							{
								HX_STACK_LINE(1102)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1102)
								while((true)){
									HX_STACK_LINE(1102)
									bool tmp44 = (_g1 < destWidth);		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(1102)
									bool tmp45 = !(tmp44);		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(1102)
									if ((tmp45)){
										HX_STACK_LINE(1102)
										break;
									}
									HX_STACK_LINE(1102)
									int tmp46 = (_g1)++;		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(1102)
									int xx = tmp46;		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(1102)
									{
										HX_STACK_LINE(1102)
										int tmp47 = srcFormat;		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(1102)
										switch( (int)(tmp47)){
											case (int)2: {
												HX_STACK_LINE(1102)
												int tmp48 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1102)
												Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1102)
												int r1 = tmp49;		HX_STACK_VAR(r1,"r1");
												HX_STACK_LINE(1102)
												int tmp50 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1102)
												Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1102)
												int g1 = tmp51;		HX_STACK_VAR(g1,"g1");
												HX_STACK_LINE(1102)
												int tmp52 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1102)
												Dynamic tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1102)
												int b1 = tmp53;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1102)
												int tmp54 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1102)
												Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1102)
												int a1 = tmp55;		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(1102)
												int tmp56 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1102)
												int tmp57 = (int(tmp56) << int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1102)
												int tmp58 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1102)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1102)
												int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1102)
												int tmp61 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1102)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1102)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1102)
												int tmp64 = (int(a1) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1102)
												int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1102)
												srcPixel = tmp65;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(1102)
												int tmp48 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1102)
												Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1102)
												int r1 = tmp49;		HX_STACK_VAR(r1,"r1");
												HX_STACK_LINE(1102)
												int tmp50 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1102)
												Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1102)
												int g1 = tmp51;		HX_STACK_VAR(g1,"g1");
												HX_STACK_LINE(1102)
												int tmp52 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1102)
												Dynamic tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1102)
												int b1 = tmp53;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1102)
												int tmp54 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1102)
												Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1102)
												int a1 = tmp55;		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(1102)
												int tmp56 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1102)
												int tmp57 = (int(tmp56) << int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1102)
												int tmp58 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1102)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1102)
												int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1102)
												int tmp61 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1102)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1102)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1102)
												int tmp64 = (int(a1) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1102)
												int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1102)
												srcPixel = tmp65;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(1102)
												int tmp48 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp48,"tmp48");
												HX_STACK_LINE(1102)
												Dynamic tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
												HX_STACK_LINE(1102)
												int r1 = tmp49;		HX_STACK_VAR(r1,"r1");
												HX_STACK_LINE(1102)
												int tmp50 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp50,"tmp50");
												HX_STACK_LINE(1102)
												Dynamic tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
												HX_STACK_LINE(1102)
												int g1 = tmp51;		HX_STACK_VAR(g1,"g1");
												HX_STACK_LINE(1102)
												int tmp52 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1102)
												Dynamic tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1102)
												int b1 = tmp53;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1102)
												int tmp54 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp54,"tmp54");
												HX_STACK_LINE(1102)
												Dynamic tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1102)
												int a1 = tmp55;		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(1102)
												int tmp56 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1102)
												int tmp57 = (int(tmp56) << int((int)24));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1102)
												int tmp58 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1102)
												int tmp59 = (int(tmp58) << int((int)16));		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1102)
												int tmp60 = (int(tmp57) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
												HX_STACK_LINE(1102)
												int tmp61 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
												HX_STACK_LINE(1102)
												int tmp62 = (int(tmp61) << int((int)8));		HX_STACK_VAR(tmp62,"tmp62");
												HX_STACK_LINE(1102)
												int tmp63 = (int(tmp60) | int(tmp62));		HX_STACK_VAR(tmp63,"tmp63");
												HX_STACK_LINE(1102)
												int tmp64 = (int(a1) & int((int)255));		HX_STACK_VAR(tmp64,"tmp64");
												HX_STACK_LINE(1102)
												int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
												HX_STACK_LINE(1102)
												srcPixel = tmp65;
											}
											;break;
										}
										HX_STACK_LINE(1102)
										bool tmp48 = srcPremultiplied;		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(1102)
										if ((tmp48)){
											HX_STACK_LINE(1102)
											int tmp49 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1102)
											bool tmp50 = (tmp49 != (int)0);		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1102)
											bool tmp51;		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(1102)
											if ((tmp50)){
												HX_STACK_LINE(1102)
												int tmp52 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1102)
												int tmp53 = tmp52;		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1102)
												tmp51 = (tmp53 != (int)255);
											}
											else{
												HX_STACK_LINE(1102)
												tmp51 = false;
											}
											HX_STACK_LINE(1102)
											if ((tmp51)){
												HX_STACK_LINE(1102)
												int tmp52 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
												HX_STACK_LINE(1102)
												Float tmp53 = (Float(((Float)255.0)) / Float(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
												HX_STACK_LINE(1102)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp53;
												HX_STACK_LINE(1102)
												{
													HX_STACK_LINE(1102)
													Dynamic tmp54;		HX_STACK_VAR(tmp54,"tmp54");
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														::lime::utils::ArrayBufferView tmp55 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp55,"tmp55");
														HX_STACK_LINE(1102)
														::lime::utils::ArrayBufferView this1 = tmp55;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(1102)
														int tmp56 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														Float tmp58 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(1102)
														Float tmp59 = (tmp57 * tmp58);		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(1102)
														int tmp60 = ::Math_obj::round(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(1102)
														int idx = tmp60;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(1102)
														int tmp61 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(1102)
														tmp54 = (int(tmp61) & int((int)255));
													}
													HX_STACK_LINE(1102)
													int r1 = tmp54;		HX_STACK_VAR(r1,"r1");
													HX_STACK_LINE(1102)
													Dynamic tmp55;		HX_STACK_VAR(tmp55,"tmp55");
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														::lime::utils::ArrayBufferView tmp56 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														::lime::utils::ArrayBufferView this1 = tmp56;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(1102)
														int tmp57 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(1102)
														Float tmp59 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(1102)
														Float tmp60 = (tmp58 * tmp59);		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(1102)
														int tmp61 = ::Math_obj::round(tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(1102)
														int idx = tmp61;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(1102)
														int tmp62 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(1102)
														tmp55 = (int(tmp62) & int((int)255));
													}
													HX_STACK_LINE(1102)
													int g1 = tmp55;		HX_STACK_VAR(g1,"g1");
													HX_STACK_LINE(1102)
													Dynamic tmp56;		HX_STACK_VAR(tmp56,"tmp56");
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														::lime::utils::ArrayBufferView tmp57 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														::lime::utils::ArrayBufferView this1 = tmp57;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(1102)
														int tmp58 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp58,"tmp58");
														HX_STACK_LINE(1102)
														int tmp59 = (int(tmp58) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(1102)
														Float tmp60 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp60,"tmp60");
														HX_STACK_LINE(1102)
														Float tmp61 = (tmp59 * tmp60);		HX_STACK_VAR(tmp61,"tmp61");
														HX_STACK_LINE(1102)
														int tmp62 = ::Math_obj::round(tmp61);		HX_STACK_VAR(tmp62,"tmp62");
														HX_STACK_LINE(1102)
														int idx = tmp62;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(1102)
														int tmp63 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp63,"tmp63");
														HX_STACK_LINE(1102)
														tmp56 = (int(tmp63) & int((int)255));
													}
													HX_STACK_LINE(1102)
													int b1 = tmp56;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1102)
													int tmp57 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(1102)
													int tmp58 = (int(tmp57) << int((int)24));		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(1102)
													int tmp59 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(1102)
													int tmp60 = (int(tmp59) << int((int)16));		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(1102)
													int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
													HX_STACK_LINE(1102)
													int tmp62 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp62,"tmp62");
													HX_STACK_LINE(1102)
													int tmp63 = (int(tmp62) << int((int)8));		HX_STACK_VAR(tmp63,"tmp63");
													HX_STACK_LINE(1102)
													int tmp64 = (int(tmp61) | int(tmp63));		HX_STACK_VAR(tmp64,"tmp64");
													HX_STACK_LINE(1102)
													int tmp65 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
													HX_STACK_LINE(1102)
													int tmp66 = (int(tmp65) & int((int)255));		HX_STACK_VAR(tmp66,"tmp66");
													HX_STACK_LINE(1102)
													int tmp67 = (int(tmp64) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
													HX_STACK_LINE(1102)
													srcPixel = tmp67;
												}
											}
										}
									}
									HX_STACK_LINE(1102)
									int tmp47 = (int(srcPixel) & int(mask));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1102)
									pixelMask1 = tmp47;
									HX_STACK_LINE(1102)
									int tmp48 = pixelMask1;		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1102)
									int tmp49 = thresholdRGBA;		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(1102)
									int tmp50 = ::lime::graphics::utils::ImageDataUtil_obj::__ucompare(tmp48,tmp49);		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(1102)
									i1 = tmp50;
									HX_STACK_LINE(1102)
									int tmp51 = operationEnum;		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(1102)
									bool tmp52;		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(1102)
									switch( (int)(tmp51)){
										case (int)0: {
											HX_STACK_LINE(1102)
											tmp52 = (i1 == (int)0);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1102)
											tmp52 = (i1 == (int)-1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1102)
											tmp52 = (i1 == (int)1);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1102)
											tmp52 = (i1 != (int)0);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1102)
											bool tmp53 = (i1 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(1102)
											bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(1102)
											if ((tmp54)){
												HX_STACK_LINE(1102)
												tmp52 = (i1 == (int)-1);
											}
											else{
												HX_STACK_LINE(1102)
												tmp52 = true;
											}
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1102)
											bool tmp53 = (i1 == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(1102)
											bool tmp54 = !(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(1102)
											if ((tmp54)){
												HX_STACK_LINE(1102)
												tmp52 = (i1 == (int)1);
											}
											else{
												HX_STACK_LINE(1102)
												tmp52 = true;
											}
										}
										;break;
										default: {
											HX_STACK_LINE(1102)
											tmp52 = false;
										}
									}
									HX_STACK_LINE(1102)
									test1 = tmp52;
									HX_STACK_LINE(1102)
									bool tmp53 = test1;		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(1102)
									if ((tmp53)){
										HX_STACK_LINE(1102)
										{
											HX_STACK_LINE(1102)
											bool tmp54 = srcPremultiplied;		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(1102)
											if ((tmp54)){
												HX_STACK_LINE(1102)
												int tmp55 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
												HX_STACK_LINE(1102)
												bool tmp56 = (tmp55 == (int)0);		HX_STACK_VAR(tmp56,"tmp56");
												HX_STACK_LINE(1102)
												if ((tmp56)){
													HX_STACK_LINE(1102)
													bool tmp57 = (colorRGBA1 != (int)0);		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(1102)
													if ((tmp57)){
														HX_STACK_LINE(1102)
														colorRGBA1 = (int)0;
													}
												}
												else{
													HX_STACK_LINE(1102)
													int tmp57 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
													HX_STACK_LINE(1102)
													bool tmp58 = (tmp57 != (int)255);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(1102)
													if ((tmp58)){
														HX_STACK_LINE(1102)
														Dynamic tmp59;		HX_STACK_VAR(tmp59,"tmp59");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::lime::utils::ArrayBufferView tmp60 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(1102)
															::lime::utils::ArrayBufferView this1 = tmp60;		HX_STACK_VAR(this1,"this1");
															HX_STACK_LINE(1102)
															{
																HX_STACK_LINE(1102)
																bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
																HX_STACK_LINE(1102)
																tmp59 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(colorRGBA1) & int((int)255))) * (int)4)));
															}
														}
														HX_STACK_LINE(1102)
														::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp59;
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															int tmp60 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp60,"tmp60");
															HX_STACK_LINE(1102)
															int tmp61 = (int(tmp60) & int((int)255));		HX_STACK_VAR(tmp61,"tmp61");
															HX_STACK_LINE(1102)
															int tmp62 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp62,"tmp62");
															HX_STACK_LINE(1102)
															int tmp63 = (tmp61 * tmp62);		HX_STACK_VAR(tmp63,"tmp63");
															HX_STACK_LINE(1102)
															int tmp64 = (int(tmp63) >> int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
															HX_STACK_LINE(1102)
															int tmp65 = (int(tmp64) & int((int)255));		HX_STACK_VAR(tmp65,"tmp65");
															HX_STACK_LINE(1102)
															int tmp66 = (int(tmp65) << int((int)24));		HX_STACK_VAR(tmp66,"tmp66");
															HX_STACK_LINE(1102)
															int tmp67 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp67,"tmp67");
															HX_STACK_LINE(1102)
															int tmp68 = (int(tmp67) & int((int)255));		HX_STACK_VAR(tmp68,"tmp68");
															HX_STACK_LINE(1102)
															int tmp69 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp69,"tmp69");
															HX_STACK_LINE(1102)
															int tmp70 = (tmp68 * tmp69);		HX_STACK_VAR(tmp70,"tmp70");
															HX_STACK_LINE(1102)
															int tmp71 = (int(tmp70) >> int((int)16));		HX_STACK_VAR(tmp71,"tmp71");
															HX_STACK_LINE(1102)
															int tmp72 = (int(tmp71) & int((int)255));		HX_STACK_VAR(tmp72,"tmp72");
															HX_STACK_LINE(1102)
															int tmp73 = (int(tmp72) << int((int)16));		HX_STACK_VAR(tmp73,"tmp73");
															HX_STACK_LINE(1102)
															int tmp74 = (int(tmp66) | int(tmp73));		HX_STACK_VAR(tmp74,"tmp74");
															HX_STACK_LINE(1102)
															int tmp75 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp75,"tmp75");
															HX_STACK_LINE(1102)
															int tmp76 = (int(tmp75) & int((int)255));		HX_STACK_VAR(tmp76,"tmp76");
															HX_STACK_LINE(1102)
															int tmp77 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp77,"tmp77");
															HX_STACK_LINE(1102)
															int tmp78 = (tmp76 * tmp77);		HX_STACK_VAR(tmp78,"tmp78");
															HX_STACK_LINE(1102)
															int tmp79 = (int(tmp78) >> int((int)16));		HX_STACK_VAR(tmp79,"tmp79");
															HX_STACK_LINE(1102)
															int tmp80 = (int(tmp79) & int((int)255));		HX_STACK_VAR(tmp80,"tmp80");
															HX_STACK_LINE(1102)
															int tmp81 = (int(tmp80) << int((int)8));		HX_STACK_VAR(tmp81,"tmp81");
															HX_STACK_LINE(1102)
															int tmp82 = (int(tmp74) | int(tmp81));		HX_STACK_VAR(tmp82,"tmp82");
															HX_STACK_LINE(1102)
															int tmp83 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp83,"tmp83");
															HX_STACK_LINE(1102)
															int tmp84 = (int(tmp83) & int((int)255));		HX_STACK_VAR(tmp84,"tmp84");
															HX_STACK_LINE(1102)
															int tmp85 = (int(tmp82) | int(tmp84));		HX_STACK_VAR(tmp85,"tmp85");
															HX_STACK_LINE(1102)
															colorRGBA1 = tmp85;
														}
													}
												}
											}
											HX_STACK_LINE(1102)
											int tmp55 = srcFormat;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(1102)
											switch( (int)(tmp55)){
												case (int)2: {
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int val = tmp56;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
												}
												;break;
												case (int)0: {
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int val = tmp56;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int val = tmp56;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
													HX_STACK_LINE(1102)
													{
														HX_STACK_LINE(1102)
														int tmp56 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
														HX_STACK_LINE(1102)
														int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
														HX_STACK_LINE(1102)
														int val = tmp57;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1102)
														{
															HX_STACK_LINE(1102)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
															HX_STACK_LINE(1102)
															val;
														}
													}
												}
												;break;
											}
										}
										HX_STACK_LINE(1102)
										(hits1)++;
									}
									HX_STACK_LINE(1102)
									hx::AddEq(srcPosition,(int)4);
								}
							}
						}
					}
					HX_STACK_LINE(1102)
					tmp26 = hits1;
				}
				HX_STACK_LINE(1102)
				hits = tmp26;
			}
		}
		else{
			HX_STACK_LINE(1108)
			::lime::utils::ArrayBufferView tmp25 = destImage->buffer->data;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1108)
			::lime::utils::ArrayBufferView destData = tmp25;		HX_STACK_VAR(destData,"destData");
			HX_STACK_LINE(1109)
			int tmp26 = destImage->buffer->format;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1109)
			int destFormat = tmp26;		HX_STACK_VAR(destFormat,"destFormat");
			HX_STACK_LINE(1110)
			bool tmp27 = destImage->buffer->premultiplied;		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1110)
			bool destPremultiplied = tmp27;		HX_STACK_VAR(destPremultiplied,"destPremultiplied");
			HX_STACK_LINE(1112)
			::lime::math::Rectangle tmp28 = sourceRect->clone();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1112)
			sourceRect = tmp28;
			HX_STACK_LINE(1114)
			Float tmp29 = sourceRect->get_right();		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1114)
			int tmp30 = sourceImage->width;		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1114)
			bool tmp31 = (tmp29 > tmp30);		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1114)
			if ((tmp31)){
				HX_STACK_LINE(1116)
				Float tmp32 = (sourceImage->width - sourceRect->x);		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(1116)
				sourceRect->width = tmp32;
			}
			HX_STACK_LINE(1120)
			Float tmp32 = sourceRect->get_bottom();		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1120)
			int tmp33 = sourceImage->height;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1120)
			bool tmp34 = (tmp32 > tmp33);		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1120)
			if ((tmp34)){
				HX_STACK_LINE(1122)
				Float tmp35 = (sourceImage->height - sourceRect->y);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(1122)
				sourceRect->height = tmp35;
			}
			HX_STACK_LINE(1126)
			::lime::math::Rectangle tmp35 = sourceRect->clone();		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1126)
			::lime::math::Rectangle targetRect = tmp35;		HX_STACK_VAR(targetRect,"targetRect");
			HX_STACK_LINE(1127)
			::lime::math::Vector2 tmp36 = destPoint;		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1127)
			targetRect->offsetPoint(tmp36);
			HX_STACK_LINE(1129)
			Float tmp37 = targetRect->get_right();		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1129)
			int tmp38 = destImage->width;		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1129)
			bool tmp39 = (tmp37 > tmp38);		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1129)
			if ((tmp39)){
				HX_STACK_LINE(1131)
				Float tmp40 = (destImage->width - targetRect->x);		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1131)
				targetRect->width = tmp40;
			}
			HX_STACK_LINE(1135)
			Float tmp40 = targetRect->get_bottom();		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1135)
			int tmp41 = destImage->height;		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1135)
			bool tmp42 = (tmp40 > tmp41);		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1135)
			if ((tmp42)){
				HX_STACK_LINE(1137)
				Float tmp43 = (destImage->height - targetRect->y);		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1137)
				targetRect->height = tmp43;
			}
			HX_STACK_LINE(1141)
			Float tmp43 = sourceRect->width;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1141)
			Float tmp44 = targetRect->width;		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1141)
			Float tmp45 = ::Math_obj::min(tmp43,tmp44);		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1141)
			sourceRect->width = tmp45;
			HX_STACK_LINE(1142)
			Float tmp46 = sourceRect->height;		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1142)
			Float tmp47 = targetRect->height;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1142)
			Float tmp48 = ::Math_obj::min(tmp46,tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1142)
			sourceRect->height = tmp48;
			HX_STACK_LINE(1144)
			Float tmp49 = sourceRect->x;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1144)
			int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1144)
			int sx = tmp50;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1145)
			Float tmp51 = sourceRect->y;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1145)
			int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1145)
			int sy = tmp52;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1146)
			Float tmp53 = sourceRect->width;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1146)
			int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1146)
			int sw = tmp54;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1147)
			Float tmp55 = sourceRect->height;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1147)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1147)
			int sh = tmp56;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1149)
			Float tmp57 = destPoint->x;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1149)
			int tmp58 = ::Std_obj::_int(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1149)
			int dx = tmp58;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1150)
			Float tmp59 = destPoint->y;		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1150)
			int tmp60 = ::Std_obj::_int(tmp59);		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1150)
			int dy = tmp60;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1152)
			int tmp61 = (destImage->width - sw);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1152)
			int tmp62 = dx;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1152)
			int tmp63 = (tmp61 - tmp62);		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1152)
			int bw = tmp63;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1153)
			int tmp64 = (destImage->height - sh);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1153)
			int tmp65 = dy;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1153)
			int tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1153)
			int bh = tmp66;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1155)
			bool tmp67 = (bw < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1155)
			int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1155)
			if ((tmp67)){
				HX_STACK_LINE(1155)
				int tmp69 = sw;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1155)
				int tmp70 = (destImage->width - sw);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1155)
				int tmp71 = dx;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1155)
				int tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1155)
				tmp68 = (tmp69 + tmp72);
			}
			else{
				HX_STACK_LINE(1155)
				tmp68 = sw;
			}
			HX_STACK_LINE(1155)
			int dw = tmp68;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1156)
			bool tmp69 = (bw < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1156)
			int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1156)
			if ((tmp69)){
				HX_STACK_LINE(1156)
				int tmp71 = sh;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1156)
				int tmp72 = (destImage->height - sh);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1156)
				int tmp73 = dy;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1156)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1156)
				tmp70 = (tmp71 + tmp74);
			}
			else{
				HX_STACK_LINE(1156)
				tmp70 = sh;
			}
			HX_STACK_LINE(1156)
			int dh = tmp70;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1158)
			bool tmp71 = copySource;		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1158)
			if ((tmp71)){
				HX_STACK_LINE(1160)
				::lime::graphics::Image tmp72 = sourceImage;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1160)
				::lime::math::Rectangle tmp73 = sourceRect;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1160)
				::lime::math::Vector2 tmp74 = destPoint;		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1160)
				destImage->copyPixels(tmp72,tmp73,tmp74,null(),null(),null());
			}
			HX_STACK_LINE(1164)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1164)
			Dynamic i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1164)
			Dynamic test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1167)
			bool tmp72 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1167)
			if ((tmp72)){
				HX_STACK_LINE(1167)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1167)
				{
					HX_STACK_LINE(1167)
					::lime::math::Rectangle tmp74 = ::lime::math::Rectangle_obj::__new(sx,sy,dw,dh);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1167)
					Dynamic destRect = tmp74;		HX_STACK_VAR(destRect,"destRect");
					HX_STACK_LINE(1167)
					tmp73 = ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop.call(hx::DynamicPtr(destImage),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),mask,thresholdRGBA,operationEnum,colorRGBA,hx::DynamicPtr(destRect));
				}
				HX_STACK_LINE(1167)
				hits = tmp73;
			}
			else{
				HX_STACK_LINE(1171)
				int tmp73;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1171)
				{
					HX_STACK_LINE(1171)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp74 = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp74,"tmp74");
					HX_STACK_LINE(1171)
					::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp74;		HX_STACK_VAR(srcView,"srcView");
					HX_STACK_LINE(1171)
					int srcPixel = (int)0;		HX_STACK_VAR(srcPixel,"srcPixel");
					HX_STACK_LINE(1171)
					int srcPosition = (int)0;		HX_STACK_VAR(srcPosition,"srcPosition");
					HX_STACK_LINE(1171)
					int tmp75 = sourceImage->buffer->format;		HX_STACK_VAR(tmp75,"tmp75");
					HX_STACK_LINE(1171)
					int srcFormat = tmp75;		HX_STACK_VAR(srcFormat,"srcFormat");
					HX_STACK_LINE(1171)
					bool tmp76 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp76,"tmp76");
					HX_STACK_LINE(1171)
					bool srcPremultiplied = tmp76;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
					HX_STACK_LINE(1171)
					::lime::utils::ArrayBufferView tmp77 = sourceImage->buffer->data;		HX_STACK_VAR(tmp77,"tmp77");
					HX_STACK_LINE(1171)
					::lime::utils::ArrayBufferView srcData = tmp77;		HX_STACK_VAR(srcData,"srcData");
					HX_STACK_LINE(1171)
					int colorRGBA1 = colorRGBA;		HX_STACK_VAR(colorRGBA1,"colorRGBA1");
					HX_STACK_LINE(1171)
					int pixelMask1 = (int)0;		HX_STACK_VAR(pixelMask1,"pixelMask1");
					HX_STACK_LINE(1171)
					int i1 = (int)0;		HX_STACK_VAR(i1,"i1");
					HX_STACK_LINE(1171)
					bool test1 = false;		HX_STACK_VAR(test1,"test1");
					HX_STACK_LINE(1171)
					int hits1 = (int)0;		HX_STACK_VAR(hits1,"hits1");
					HX_STACK_LINE(1171)
					{
						HX_STACK_LINE(1171)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(1171)
						while((true)){
							HX_STACK_LINE(1171)
							bool tmp78 = (_g < dh);		HX_STACK_VAR(tmp78,"tmp78");
							HX_STACK_LINE(1171)
							bool tmp79 = !(tmp78);		HX_STACK_VAR(tmp79,"tmp79");
							HX_STACK_LINE(1171)
							if ((tmp79)){
								HX_STACK_LINE(1171)
								break;
							}
							HX_STACK_LINE(1171)
							int tmp80 = (_g)++;		HX_STACK_VAR(tmp80,"tmp80");
							HX_STACK_LINE(1171)
							int yy = tmp80;		HX_STACK_VAR(yy,"yy");
							HX_STACK_LINE(1171)
							int tmp81 = srcView->offset;		HX_STACK_VAR(tmp81,"tmp81");
							HX_STACK_LINE(1171)
							int tmp82 = srcView->stride;		HX_STACK_VAR(tmp82,"tmp82");
							HX_STACK_LINE(1171)
							int tmp83 = (yy + sy);		HX_STACK_VAR(tmp83,"tmp83");
							HX_STACK_LINE(1171)
							int tmp84 = (tmp82 * tmp83);		HX_STACK_VAR(tmp84,"tmp84");
							HX_STACK_LINE(1171)
							int tmp85 = (tmp81 + tmp84);		HX_STACK_VAR(tmp85,"tmp85");
							HX_STACK_LINE(1171)
							srcPosition = tmp85;
							HX_STACK_LINE(1171)
							int tmp86 = ((int)4 * sx);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(1171)
							hx::AddEq(srcPosition,tmp86);
							HX_STACK_LINE(1171)
							{
								HX_STACK_LINE(1171)
								int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
								HX_STACK_LINE(1171)
								while((true)){
									HX_STACK_LINE(1171)
									bool tmp87 = (_g1 < dw);		HX_STACK_VAR(tmp87,"tmp87");
									HX_STACK_LINE(1171)
									bool tmp88 = !(tmp87);		HX_STACK_VAR(tmp88,"tmp88");
									HX_STACK_LINE(1171)
									if ((tmp88)){
										HX_STACK_LINE(1171)
										break;
									}
									HX_STACK_LINE(1171)
									int tmp89 = (_g1)++;		HX_STACK_VAR(tmp89,"tmp89");
									HX_STACK_LINE(1171)
									int xx = tmp89;		HX_STACK_VAR(xx,"xx");
									HX_STACK_LINE(1171)
									{
										HX_STACK_LINE(1171)
										int tmp90 = srcFormat;		HX_STACK_VAR(tmp90,"tmp90");
										HX_STACK_LINE(1171)
										switch( (int)(tmp90)){
											case (int)2: {
												HX_STACK_LINE(1171)
												int tmp91 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(1171)
												Dynamic tmp92 = (int(tmp91) & int((int)255));		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(1171)
												int r1 = tmp92;		HX_STACK_VAR(r1,"r1");
												HX_STACK_LINE(1171)
												int tmp93 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(1171)
												Dynamic tmp94 = (int(tmp93) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(1171)
												int g1 = tmp94;		HX_STACK_VAR(g1,"g1");
												HX_STACK_LINE(1171)
												int tmp95 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(1171)
												Dynamic tmp96 = (int(tmp95) & int((int)255));		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(1171)
												int b1 = tmp96;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1171)
												int tmp97 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(1171)
												Dynamic tmp98 = (int(tmp97) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(1171)
												int a1 = tmp98;		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(1171)
												int tmp99 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(1171)
												int tmp100 = (int(tmp99) << int((int)24));		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(1171)
												int tmp101 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(1171)
												int tmp102 = (int(tmp101) << int((int)16));		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(1171)
												int tmp103 = (int(tmp100) | int(tmp102));		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(1171)
												int tmp104 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(1171)
												int tmp105 = (int(tmp104) << int((int)8));		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(1171)
												int tmp106 = (int(tmp103) | int(tmp105));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1171)
												int tmp107 = (int(a1) & int((int)255));		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1171)
												int tmp108 = (int(tmp106) | int(tmp107));		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1171)
												srcPixel = tmp108;
											}
											;break;
											case (int)0: {
												HX_STACK_LINE(1171)
												int tmp91 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(1171)
												Dynamic tmp92 = (int(tmp91) & int((int)255));		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(1171)
												int r1 = tmp92;		HX_STACK_VAR(r1,"r1");
												HX_STACK_LINE(1171)
												int tmp93 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(1171)
												Dynamic tmp94 = (int(tmp93) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(1171)
												int g1 = tmp94;		HX_STACK_VAR(g1,"g1");
												HX_STACK_LINE(1171)
												int tmp95 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(1171)
												Dynamic tmp96 = (int(tmp95) & int((int)255));		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(1171)
												int b1 = tmp96;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1171)
												int tmp97 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(1171)
												Dynamic tmp98 = (int(tmp97) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(1171)
												int a1 = tmp98;		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(1171)
												int tmp99 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(1171)
												int tmp100 = (int(tmp99) << int((int)24));		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(1171)
												int tmp101 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(1171)
												int tmp102 = (int(tmp101) << int((int)16));		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(1171)
												int tmp103 = (int(tmp100) | int(tmp102));		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(1171)
												int tmp104 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(1171)
												int tmp105 = (int(tmp104) << int((int)8));		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(1171)
												int tmp106 = (int(tmp103) | int(tmp105));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1171)
												int tmp107 = (int(a1) & int((int)255));		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1171)
												int tmp108 = (int(tmp106) | int(tmp107));		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1171)
												srcPixel = tmp108;
											}
											;break;
											case (int)1: {
												HX_STACK_LINE(1171)
												int tmp91 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp91,"tmp91");
												HX_STACK_LINE(1171)
												Dynamic tmp92 = (int(tmp91) & int((int)255));		HX_STACK_VAR(tmp92,"tmp92");
												HX_STACK_LINE(1171)
												int r1 = tmp92;		HX_STACK_VAR(r1,"r1");
												HX_STACK_LINE(1171)
												int tmp93 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp93,"tmp93");
												HX_STACK_LINE(1171)
												Dynamic tmp94 = (int(tmp93) & int((int)255));		HX_STACK_VAR(tmp94,"tmp94");
												HX_STACK_LINE(1171)
												int g1 = tmp94;		HX_STACK_VAR(g1,"g1");
												HX_STACK_LINE(1171)
												int tmp95 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(1171)
												Dynamic tmp96 = (int(tmp95) & int((int)255));		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(1171)
												int b1 = tmp96;		HX_STACK_VAR(b1,"b1");
												HX_STACK_LINE(1171)
												int tmp97 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp97,"tmp97");
												HX_STACK_LINE(1171)
												Dynamic tmp98 = (int(tmp97) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(1171)
												int a1 = tmp98;		HX_STACK_VAR(a1,"a1");
												HX_STACK_LINE(1171)
												int tmp99 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(1171)
												int tmp100 = (int(tmp99) << int((int)24));		HX_STACK_VAR(tmp100,"tmp100");
												HX_STACK_LINE(1171)
												int tmp101 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp101,"tmp101");
												HX_STACK_LINE(1171)
												int tmp102 = (int(tmp101) << int((int)16));		HX_STACK_VAR(tmp102,"tmp102");
												HX_STACK_LINE(1171)
												int tmp103 = (int(tmp100) | int(tmp102));		HX_STACK_VAR(tmp103,"tmp103");
												HX_STACK_LINE(1171)
												int tmp104 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp104,"tmp104");
												HX_STACK_LINE(1171)
												int tmp105 = (int(tmp104) << int((int)8));		HX_STACK_VAR(tmp105,"tmp105");
												HX_STACK_LINE(1171)
												int tmp106 = (int(tmp103) | int(tmp105));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1171)
												int tmp107 = (int(a1) & int((int)255));		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1171)
												int tmp108 = (int(tmp106) | int(tmp107));		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1171)
												srcPixel = tmp108;
											}
											;break;
										}
										HX_STACK_LINE(1171)
										bool tmp91 = srcPremultiplied;		HX_STACK_VAR(tmp91,"tmp91");
										HX_STACK_LINE(1171)
										if ((tmp91)){
											HX_STACK_LINE(1171)
											int tmp92 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp92,"tmp92");
											HX_STACK_LINE(1171)
											bool tmp93 = (tmp92 != (int)0);		HX_STACK_VAR(tmp93,"tmp93");
											HX_STACK_LINE(1171)
											bool tmp94;		HX_STACK_VAR(tmp94,"tmp94");
											HX_STACK_LINE(1171)
											if ((tmp93)){
												HX_STACK_LINE(1171)
												int tmp95 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(1171)
												int tmp96 = tmp95;		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(1171)
												tmp94 = (tmp96 != (int)255);
											}
											else{
												HX_STACK_LINE(1171)
												tmp94 = false;
											}
											HX_STACK_LINE(1171)
											if ((tmp94)){
												HX_STACK_LINE(1171)
												int tmp95 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp95,"tmp95");
												HX_STACK_LINE(1171)
												Float tmp96 = (Float(((Float)255.0)) / Float(tmp95));		HX_STACK_VAR(tmp96,"tmp96");
												HX_STACK_LINE(1171)
												::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp96;
												HX_STACK_LINE(1171)
												{
													HX_STACK_LINE(1171)
													Dynamic tmp97;		HX_STACK_VAR(tmp97,"tmp97");
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														::lime::utils::ArrayBufferView tmp98 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp98,"tmp98");
														HX_STACK_LINE(1171)
														::lime::utils::ArrayBufferView this1 = tmp98;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(1171)
														int tmp99 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														Float tmp101 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(1171)
														Float tmp102 = (tmp100 * tmp101);		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(1171)
														int tmp103 = ::Math_obj::round(tmp102);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(1171)
														int idx = tmp103;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(1171)
														int tmp104 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(1171)
														tmp97 = (int(tmp104) & int((int)255));
													}
													HX_STACK_LINE(1171)
													int r1 = tmp97;		HX_STACK_VAR(r1,"r1");
													HX_STACK_LINE(1171)
													Dynamic tmp98;		HX_STACK_VAR(tmp98,"tmp98");
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														::lime::utils::ArrayBufferView tmp99 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														::lime::utils::ArrayBufferView this1 = tmp99;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(1171)
														int tmp100 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int tmp101 = (int(tmp100) & int((int)255));		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(1171)
														Float tmp102 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(1171)
														Float tmp103 = (tmp101 * tmp102);		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(1171)
														int tmp104 = ::Math_obj::round(tmp103);		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(1171)
														int idx = tmp104;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(1171)
														int tmp105 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(1171)
														tmp98 = (int(tmp105) & int((int)255));
													}
													HX_STACK_LINE(1171)
													int g1 = tmp98;		HX_STACK_VAR(g1,"g1");
													HX_STACK_LINE(1171)
													Dynamic tmp99;		HX_STACK_VAR(tmp99,"tmp99");
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														::lime::utils::ArrayBufferView tmp100 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														::lime::utils::ArrayBufferView this1 = tmp100;		HX_STACK_VAR(this1,"this1");
														HX_STACK_LINE(1171)
														int tmp101 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp101,"tmp101");
														HX_STACK_LINE(1171)
														int tmp102 = (int(tmp101) & int((int)255));		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(1171)
														Float tmp103 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp103,"tmp103");
														HX_STACK_LINE(1171)
														Float tmp104 = (tmp102 * tmp103);		HX_STACK_VAR(tmp104,"tmp104");
														HX_STACK_LINE(1171)
														int tmp105 = ::Math_obj::round(tmp104);		HX_STACK_VAR(tmp105,"tmp105");
														HX_STACK_LINE(1171)
														int idx = tmp105;		HX_STACK_VAR(idx,"idx");
														HX_STACK_LINE(1171)
														int tmp106 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp106,"tmp106");
														HX_STACK_LINE(1171)
														tmp99 = (int(tmp106) & int((int)255));
													}
													HX_STACK_LINE(1171)
													int b1 = tmp99;		HX_STACK_VAR(b1,"b1");
													HX_STACK_LINE(1171)
													int tmp100 = (int(r1) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
													HX_STACK_LINE(1171)
													int tmp101 = (int(tmp100) << int((int)24));		HX_STACK_VAR(tmp101,"tmp101");
													HX_STACK_LINE(1171)
													int tmp102 = (int(g1) & int((int)255));		HX_STACK_VAR(tmp102,"tmp102");
													HX_STACK_LINE(1171)
													int tmp103 = (int(tmp102) << int((int)16));		HX_STACK_VAR(tmp103,"tmp103");
													HX_STACK_LINE(1171)
													int tmp104 = (int(tmp101) | int(tmp103));		HX_STACK_VAR(tmp104,"tmp104");
													HX_STACK_LINE(1171)
													int tmp105 = (int(b1) & int((int)255));		HX_STACK_VAR(tmp105,"tmp105");
													HX_STACK_LINE(1171)
													int tmp106 = (int(tmp105) << int((int)8));		HX_STACK_VAR(tmp106,"tmp106");
													HX_STACK_LINE(1171)
													int tmp107 = (int(tmp104) | int(tmp106));		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(1171)
													int tmp108 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(1171)
													int tmp109 = (int(tmp108) & int((int)255));		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(1171)
													int tmp110 = (int(tmp107) | int(tmp109));		HX_STACK_VAR(tmp110,"tmp110");
													HX_STACK_LINE(1171)
													srcPixel = tmp110;
												}
											}
										}
									}
									HX_STACK_LINE(1171)
									int tmp90 = (int(srcPixel) & int(mask));		HX_STACK_VAR(tmp90,"tmp90");
									HX_STACK_LINE(1171)
									pixelMask1 = tmp90;
									HX_STACK_LINE(1171)
									int tmp91 = pixelMask1;		HX_STACK_VAR(tmp91,"tmp91");
									HX_STACK_LINE(1171)
									int tmp92 = thresholdRGBA;		HX_STACK_VAR(tmp92,"tmp92");
									HX_STACK_LINE(1171)
									int tmp93 = ::lime::graphics::utils::ImageDataUtil_obj::__ucompare(tmp91,tmp92);		HX_STACK_VAR(tmp93,"tmp93");
									HX_STACK_LINE(1171)
									i1 = tmp93;
									HX_STACK_LINE(1171)
									int tmp94 = operationEnum;		HX_STACK_VAR(tmp94,"tmp94");
									HX_STACK_LINE(1171)
									bool tmp95;		HX_STACK_VAR(tmp95,"tmp95");
									HX_STACK_LINE(1171)
									switch( (int)(tmp94)){
										case (int)0: {
											HX_STACK_LINE(1171)
											tmp95 = (i1 == (int)0);
										}
										;break;
										case (int)1: {
											HX_STACK_LINE(1171)
											tmp95 = (i1 == (int)-1);
										}
										;break;
										case (int)2: {
											HX_STACK_LINE(1171)
											tmp95 = (i1 == (int)1);
										}
										;break;
										case (int)5: {
											HX_STACK_LINE(1171)
											tmp95 = (i1 != (int)0);
										}
										;break;
										case (int)3: {
											HX_STACK_LINE(1171)
											bool tmp96 = (i1 == (int)0);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(1171)
											bool tmp97 = !(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(1171)
											if ((tmp97)){
												HX_STACK_LINE(1171)
												tmp95 = (i1 == (int)-1);
											}
											else{
												HX_STACK_LINE(1171)
												tmp95 = true;
											}
										}
										;break;
										case (int)4: {
											HX_STACK_LINE(1171)
											bool tmp96 = (i1 == (int)0);		HX_STACK_VAR(tmp96,"tmp96");
											HX_STACK_LINE(1171)
											bool tmp97 = !(tmp96);		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(1171)
											if ((tmp97)){
												HX_STACK_LINE(1171)
												tmp95 = (i1 == (int)1);
											}
											else{
												HX_STACK_LINE(1171)
												tmp95 = true;
											}
										}
										;break;
										default: {
											HX_STACK_LINE(1171)
											tmp95 = false;
										}
									}
									HX_STACK_LINE(1171)
									test1 = tmp95;
									HX_STACK_LINE(1171)
									bool tmp96 = test1;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1171)
									if ((tmp96)){
										HX_STACK_LINE(1171)
										{
											HX_STACK_LINE(1171)
											bool tmp97 = srcPremultiplied;		HX_STACK_VAR(tmp97,"tmp97");
											HX_STACK_LINE(1171)
											if ((tmp97)){
												HX_STACK_LINE(1171)
												int tmp98 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp98,"tmp98");
												HX_STACK_LINE(1171)
												bool tmp99 = (tmp98 == (int)0);		HX_STACK_VAR(tmp99,"tmp99");
												HX_STACK_LINE(1171)
												if ((tmp99)){
													HX_STACK_LINE(1171)
													bool tmp100 = (colorRGBA1 != (int)0);		HX_STACK_VAR(tmp100,"tmp100");
													HX_STACK_LINE(1171)
													if ((tmp100)){
														HX_STACK_LINE(1171)
														colorRGBA1 = (int)0;
													}
												}
												else{
													HX_STACK_LINE(1171)
													int tmp100 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
													HX_STACK_LINE(1171)
													bool tmp101 = (tmp100 != (int)255);		HX_STACK_VAR(tmp101,"tmp101");
													HX_STACK_LINE(1171)
													if ((tmp101)){
														HX_STACK_LINE(1171)
														Dynamic tmp102;		HX_STACK_VAR(tmp102,"tmp102");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::lime::utils::ArrayBufferView tmp103 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp103,"tmp103");
															HX_STACK_LINE(1171)
															::lime::utils::ArrayBufferView this1 = tmp103;		HX_STACK_VAR(this1,"this1");
															HX_STACK_LINE(1171)
															{
																HX_STACK_LINE(1171)
																bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
																HX_STACK_LINE(1171)
																tmp102 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(colorRGBA1) & int((int)255))) * (int)4)));
															}
														}
														HX_STACK_LINE(1171)
														::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp102;
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															int tmp103 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp103,"tmp103");
															HX_STACK_LINE(1171)
															int tmp104 = (int(tmp103) & int((int)255));		HX_STACK_VAR(tmp104,"tmp104");
															HX_STACK_LINE(1171)
															int tmp105 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp105,"tmp105");
															HX_STACK_LINE(1171)
															int tmp106 = (tmp104 * tmp105);		HX_STACK_VAR(tmp106,"tmp106");
															HX_STACK_LINE(1171)
															int tmp107 = (int(tmp106) >> int((int)16));		HX_STACK_VAR(tmp107,"tmp107");
															HX_STACK_LINE(1171)
															int tmp108 = (int(tmp107) & int((int)255));		HX_STACK_VAR(tmp108,"tmp108");
															HX_STACK_LINE(1171)
															int tmp109 = (int(tmp108) << int((int)24));		HX_STACK_VAR(tmp109,"tmp109");
															HX_STACK_LINE(1171)
															int tmp110 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp110,"tmp110");
															HX_STACK_LINE(1171)
															int tmp111 = (int(tmp110) & int((int)255));		HX_STACK_VAR(tmp111,"tmp111");
															HX_STACK_LINE(1171)
															int tmp112 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp112,"tmp112");
															HX_STACK_LINE(1171)
															int tmp113 = (tmp111 * tmp112);		HX_STACK_VAR(tmp113,"tmp113");
															HX_STACK_LINE(1171)
															int tmp114 = (int(tmp113) >> int((int)16));		HX_STACK_VAR(tmp114,"tmp114");
															HX_STACK_LINE(1171)
															int tmp115 = (int(tmp114) & int((int)255));		HX_STACK_VAR(tmp115,"tmp115");
															HX_STACK_LINE(1171)
															int tmp116 = (int(tmp115) << int((int)16));		HX_STACK_VAR(tmp116,"tmp116");
															HX_STACK_LINE(1171)
															int tmp117 = (int(tmp109) | int(tmp116));		HX_STACK_VAR(tmp117,"tmp117");
															HX_STACK_LINE(1171)
															int tmp118 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp118,"tmp118");
															HX_STACK_LINE(1171)
															int tmp119 = (int(tmp118) & int((int)255));		HX_STACK_VAR(tmp119,"tmp119");
															HX_STACK_LINE(1171)
															int tmp120 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp120,"tmp120");
															HX_STACK_LINE(1171)
															int tmp121 = (tmp119 * tmp120);		HX_STACK_VAR(tmp121,"tmp121");
															HX_STACK_LINE(1171)
															int tmp122 = (int(tmp121) >> int((int)16));		HX_STACK_VAR(tmp122,"tmp122");
															HX_STACK_LINE(1171)
															int tmp123 = (int(tmp122) & int((int)255));		HX_STACK_VAR(tmp123,"tmp123");
															HX_STACK_LINE(1171)
															int tmp124 = (int(tmp123) << int((int)8));		HX_STACK_VAR(tmp124,"tmp124");
															HX_STACK_LINE(1171)
															int tmp125 = (int(tmp117) | int(tmp124));		HX_STACK_VAR(tmp125,"tmp125");
															HX_STACK_LINE(1171)
															int tmp126 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp126,"tmp126");
															HX_STACK_LINE(1171)
															int tmp127 = (int(tmp126) & int((int)255));		HX_STACK_VAR(tmp127,"tmp127");
															HX_STACK_LINE(1171)
															int tmp128 = (int(tmp125) | int(tmp127));		HX_STACK_VAR(tmp128,"tmp128");
															HX_STACK_LINE(1171)
															colorRGBA1 = tmp128;
														}
													}
												}
											}
											HX_STACK_LINE(1171)
											int tmp98 = srcFormat;		HX_STACK_VAR(tmp98,"tmp98");
											HX_STACK_LINE(1171)
											switch( (int)(tmp98)){
												case (int)2: {
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int val = tmp99;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
												}
												;break;
												case (int)0: {
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int val = tmp99;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
												}
												;break;
												case (int)1: {
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) & int((int)255));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int val = tmp99;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)24));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)16));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
													HX_STACK_LINE(1171)
													{
														HX_STACK_LINE(1171)
														int tmp99 = (int(colorRGBA1) >> int((int)8));		HX_STACK_VAR(tmp99,"tmp99");
														HX_STACK_LINE(1171)
														int tmp100 = (int(tmp99) & int((int)255));		HX_STACK_VAR(tmp100,"tmp100");
														HX_STACK_LINE(1171)
														int val = tmp100;		HX_STACK_VAR(val,"val");
														HX_STACK_LINE(1171)
														{
															HX_STACK_LINE(1171)
															::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
															HX_STACK_LINE(1171)
															val;
														}
													}
												}
												;break;
											}
										}
										HX_STACK_LINE(1171)
										(hits1)++;
									}
									HX_STACK_LINE(1171)
									hx::AddEq(srcPosition,(int)4);
								}
							}
						}
					}
					HX_STACK_LINE(1171)
					tmp73 = hits1;
				}
				HX_STACK_LINE(1171)
				hits = tmp73;
			}
			HX_STACK_LINE(1175)
			int tmp73 = hits;		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1175)
			return tmp73;
		}
		HX_STACK_LINE(1178)
		return (int)0;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC9(ImageDataUtil_obj,threshold,return )

int ImageDataUtil_obj::__threshold_inner_loop( ::lime::graphics::Image image,::lime::graphics::Image sourceImage,::lime::math::Rectangle sourceRect,int mask,int threshold,int operation,int color,int startX,int startY,int destWidth,int destHeight){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__threshold_inner_loop",0x72cbc78f,"lime.graphics.utils.ImageDataUtil.__threshold_inner_loop","lime/graphics/utils/ImageDataUtil.hx",1181,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(startX,"startX")
	HX_STACK_ARG(startY,"startY")
	HX_STACK_ARG(destWidth,"destWidth")
	HX_STACK_ARG(destHeight,"destHeight")
	HX_STACK_LINE(1183)
	::lime::graphics::utils::_ImageDataUtil::ImageDataView tmp = ::lime::graphics::utils::_ImageDataUtil::ImageDataView_obj::__new(sourceImage,sourceRect);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1183)
	::lime::graphics::utils::_ImageDataUtil::ImageDataView srcView = tmp;		HX_STACK_VAR(srcView,"srcView");
	HX_STACK_LINE(1184)
	int srcPixel = (int)0;		HX_STACK_VAR(srcPixel,"srcPixel");
	HX_STACK_LINE(1185)
	int srcPosition = (int)0;		HX_STACK_VAR(srcPosition,"srcPosition");
	HX_STACK_LINE(1186)
	int tmp1 = sourceImage->buffer->format;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1186)
	int srcFormat = tmp1;		HX_STACK_VAR(srcFormat,"srcFormat");
	HX_STACK_LINE(1187)
	bool tmp2 = sourceImage->buffer->premultiplied;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1187)
	bool srcPremultiplied = tmp2;		HX_STACK_VAR(srcPremultiplied,"srcPremultiplied");
	HX_STACK_LINE(1188)
	::lime::utils::ArrayBufferView tmp3 = sourceImage->buffer->data;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1188)
	::lime::utils::ArrayBufferView srcData = tmp3;		HX_STACK_VAR(srcData,"srcData");
	HX_STACK_LINE(1190)
	int colorRGBA = color;		HX_STACK_VAR(colorRGBA,"colorRGBA");
	HX_STACK_LINE(1192)
	int pixelMask = (int)0;		HX_STACK_VAR(pixelMask,"pixelMask");
	HX_STACK_LINE(1193)
	int i = (int)0;		HX_STACK_VAR(i,"i");
	HX_STACK_LINE(1194)
	bool test = false;		HX_STACK_VAR(test,"test");
	HX_STACK_LINE(1195)
	int hits = (int)0;		HX_STACK_VAR(hits,"hits");
	HX_STACK_LINE(1197)
	{
		HX_STACK_LINE(1197)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1197)
		while((true)){
			HX_STACK_LINE(1197)
			bool tmp4 = (_g < destHeight);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1197)
			bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1197)
			if ((tmp5)){
				HX_STACK_LINE(1197)
				break;
			}
			HX_STACK_LINE(1197)
			int tmp6 = (_g)++;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1197)
			int yy = tmp6;		HX_STACK_VAR(yy,"yy");
			HX_STACK_LINE(1199)
			int tmp7 = srcView->offset;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1199)
			int tmp8 = srcView->stride;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1199)
			int tmp9 = (yy + startY);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1199)
			int tmp10 = (tmp8 * tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1199)
			int tmp11 = (tmp7 + tmp10);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1199)
			srcPosition = tmp11;
			HX_STACK_LINE(1200)
			int tmp12 = ((int)4 * startX);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1200)
			hx::AddEq(srcPosition,tmp12);
			HX_STACK_LINE(1202)
			{
				HX_STACK_LINE(1202)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1202)
				while((true)){
					HX_STACK_LINE(1202)
					bool tmp13 = (_g1 < destWidth);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(1202)
					bool tmp14 = !(tmp13);		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(1202)
					if ((tmp14)){
						HX_STACK_LINE(1202)
						break;
					}
					HX_STACK_LINE(1202)
					int tmp15 = (_g1)++;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(1202)
					int xx = tmp15;		HX_STACK_VAR(xx,"xx");
					HX_STACK_LINE(1204)
					{
						HX_STACK_LINE(1204)
						int tmp16 = srcFormat;		HX_STACK_VAR(tmp16,"tmp16");
						HX_STACK_LINE(1204)
						switch( (int)(tmp16)){
							case (int)2: {
								HX_STACK_LINE(1204)
								int tmp17 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1204)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1204)
								int r = tmp18;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1204)
								int tmp19 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1204)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1204)
								int g = tmp20;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1204)
								int tmp21 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1204)
								Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1204)
								int b = tmp22;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1204)
								int tmp23 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1204)
								Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1204)
								int a = tmp24;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1204)
								int tmp25 = (int(r) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1204)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1204)
								int tmp27 = (int(g) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1204)
								int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1204)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1204)
								int tmp30 = (int(b) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1204)
								int tmp31 = (int(tmp30) << int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1204)
								int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1204)
								int tmp33 = (int(a) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1204)
								int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1204)
								srcPixel = tmp34;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1204)
								int tmp17 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1204)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1204)
								int r = tmp18;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1204)
								int tmp19 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1204)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1204)
								int g = tmp20;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1204)
								int tmp21 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1204)
								Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1204)
								int b = tmp22;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1204)
								int tmp23 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1204)
								Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1204)
								int a = tmp24;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1204)
								int tmp25 = (int(r) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1204)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1204)
								int tmp27 = (int(g) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1204)
								int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1204)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1204)
								int tmp30 = (int(b) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1204)
								int tmp31 = (int(tmp30) << int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1204)
								int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1204)
								int tmp33 = (int(a) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1204)
								int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1204)
								srcPixel = tmp34;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1204)
								int tmp17 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1204)
								Dynamic tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1204)
								int r = tmp18;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1204)
								int tmp19 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1204)
								Dynamic tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1204)
								int g = tmp20;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1204)
								int tmp21 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1204)
								Dynamic tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1204)
								int b = tmp22;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1204)
								int tmp23 = ::__hxcpp_memory_get_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1204)
								Dynamic tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1204)
								int a = tmp24;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1204)
								int tmp25 = (int(r) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1204)
								int tmp26 = (int(tmp25) << int((int)24));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1204)
								int tmp27 = (int(g) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1204)
								int tmp28 = (int(tmp27) << int((int)16));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1204)
								int tmp29 = (int(tmp26) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1204)
								int tmp30 = (int(b) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(1204)
								int tmp31 = (int(tmp30) << int((int)8));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(1204)
								int tmp32 = (int(tmp29) | int(tmp31));		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(1204)
								int tmp33 = (int(a) & int((int)255));		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(1204)
								int tmp34 = (int(tmp32) | int(tmp33));		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(1204)
								srcPixel = tmp34;
							}
							;break;
						}
						HX_STACK_LINE(1204)
						bool tmp17 = srcPremultiplied;		HX_STACK_VAR(tmp17,"tmp17");
						HX_STACK_LINE(1204)
						if ((tmp17)){
							HX_STACK_LINE(1204)
							int tmp18 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
							HX_STACK_LINE(1204)
							bool tmp19 = (tmp18 != (int)0);		HX_STACK_VAR(tmp19,"tmp19");
							HX_STACK_LINE(1204)
							bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
							HX_STACK_LINE(1204)
							if ((tmp19)){
								HX_STACK_LINE(1204)
								int tmp21 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1204)
								int tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1204)
								tmp20 = (tmp22 != (int)255);
							}
							else{
								HX_STACK_LINE(1204)
								tmp20 = false;
							}
							HX_STACK_LINE(1204)
							if ((tmp20)){
								HX_STACK_LINE(1204)
								int tmp21 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1204)
								Float tmp22 = (Float(((Float)255.0)) / Float(tmp21));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1204)
								::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp22;
								HX_STACK_LINE(1204)
								{
									HX_STACK_LINE(1204)
									Dynamic tmp23;		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1204)
									{
										HX_STACK_LINE(1204)
										::lime::utils::ArrayBufferView tmp24 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1204)
										::lime::utils::ArrayBufferView this1 = tmp24;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1204)
										int tmp25 = (int(srcPixel) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1204)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1204)
										Float tmp27 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1204)
										Float tmp28 = (tmp26 * tmp27);		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1204)
										int tmp29 = ::Math_obj::round(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1204)
										int idx = tmp29;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1204)
										int tmp30 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1204)
										tmp23 = (int(tmp30) & int((int)255));
									}
									HX_STACK_LINE(1204)
									int r = tmp23;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1204)
									Dynamic tmp24;		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1204)
									{
										HX_STACK_LINE(1204)
										::lime::utils::ArrayBufferView tmp25 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1204)
										::lime::utils::ArrayBufferView this1 = tmp25;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1204)
										int tmp26 = (int(srcPixel) >> int((int)16));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1204)
										int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1204)
										Float tmp28 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1204)
										Float tmp29 = (tmp27 * tmp28);		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1204)
										int tmp30 = ::Math_obj::round(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1204)
										int idx = tmp30;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1204)
										int tmp31 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1204)
										tmp24 = (int(tmp31) & int((int)255));
									}
									HX_STACK_LINE(1204)
									int g = tmp24;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1204)
									Dynamic tmp25;		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1204)
									{
										HX_STACK_LINE(1204)
										::lime::utils::ArrayBufferView tmp26 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1204)
										::lime::utils::ArrayBufferView this1 = tmp26;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1204)
										int tmp27 = (int(srcPixel) >> int((int)8));		HX_STACK_VAR(tmp27,"tmp27");
										HX_STACK_LINE(1204)
										int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1204)
										Float tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp29,"tmp29");
										HX_STACK_LINE(1204)
										Float tmp30 = (tmp28 * tmp29);		HX_STACK_VAR(tmp30,"tmp30");
										HX_STACK_LINE(1204)
										int tmp31 = ::Math_obj::round(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
										HX_STACK_LINE(1204)
										int idx = tmp31;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1204)
										int tmp32 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp32,"tmp32");
										HX_STACK_LINE(1204)
										tmp25 = (int(tmp32) & int((int)255));
									}
									HX_STACK_LINE(1204)
									int b = tmp25;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1204)
									int tmp26 = (int(r) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1204)
									int tmp27 = (int(tmp26) << int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1204)
									int tmp28 = (int(g) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1204)
									int tmp29 = (int(tmp28) << int((int)16));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1204)
									int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1204)
									int tmp31 = (int(b) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(1204)
									int tmp32 = (int(tmp31) << int((int)8));		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(1204)
									int tmp33 = (int(tmp30) | int(tmp32));		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(1204)
									int tmp34 = (int(srcPixel) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
									HX_STACK_LINE(1204)
									int tmp35 = (int(tmp34) & int((int)255));		HX_STACK_VAR(tmp35,"tmp35");
									HX_STACK_LINE(1204)
									int tmp36 = (int(tmp33) | int(tmp35));		HX_STACK_VAR(tmp36,"tmp36");
									HX_STACK_LINE(1204)
									srcPixel = tmp36;
								}
							}
						}
					}
					HX_STACK_LINE(1205)
					int tmp16 = (int(srcPixel) & int(mask));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(1205)
					pixelMask = tmp16;
					HX_STACK_LINE(1207)
					int tmp17 = pixelMask;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(1207)
					int tmp18 = threshold;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(1207)
					int tmp19 = ::lime::graphics::utils::ImageDataUtil_obj::__ucompare(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(1207)
					i = tmp19;
					HX_STACK_LINE(1209)
					int tmp20 = operation;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1209)
					bool tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1209)
					switch( (int)(tmp20)){
						case (int)0: {
							HX_STACK_LINE(1211)
							tmp21 = (i == (int)0);
						}
						;break;
						case (int)1: {
							HX_STACK_LINE(1212)
							tmp21 = (i == (int)-1);
						}
						;break;
						case (int)2: {
							HX_STACK_LINE(1213)
							tmp21 = (i == (int)1);
						}
						;break;
						case (int)5: {
							HX_STACK_LINE(1214)
							tmp21 = (i != (int)0);
						}
						;break;
						case (int)3: {
							HX_STACK_LINE(1215)
							bool tmp22 = (i == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1215)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1215)
							if ((tmp23)){
								HX_STACK_LINE(1215)
								tmp21 = (i == (int)-1);
							}
							else{
								HX_STACK_LINE(1215)
								tmp21 = true;
							}
						}
						;break;
						case (int)4: {
							HX_STACK_LINE(1216)
							bool tmp22 = (i == (int)0);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(1216)
							bool tmp23 = !(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1216)
							if ((tmp23)){
								HX_STACK_LINE(1216)
								tmp21 = (i == (int)1);
							}
							else{
								HX_STACK_LINE(1216)
								tmp21 = true;
							}
						}
						;break;
						default: {
							HX_STACK_LINE(1217)
							tmp21 = false;
						}
					}
					HX_STACK_LINE(1209)
					test = tmp21;
					HX_STACK_LINE(1221)
					bool tmp22 = test;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(1221)
					if ((tmp22)){
						HX_STACK_LINE(1223)
						{
							HX_STACK_LINE(1223)
							bool tmp23 = srcPremultiplied;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(1223)
							if ((tmp23)){
								HX_STACK_LINE(1223)
								int tmp24 = (int(colorRGBA) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1223)
								bool tmp25 = (tmp24 == (int)0);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1223)
								if ((tmp25)){
									HX_STACK_LINE(1223)
									bool tmp26 = (colorRGBA != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1223)
									if ((tmp26)){
										HX_STACK_LINE(1223)
										colorRGBA = (int)0;
									}
								}
								else{
									HX_STACK_LINE(1223)
									int tmp26 = (int(colorRGBA) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1223)
									bool tmp27 = (tmp26 != (int)255);		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1223)
									if ((tmp27)){
										HX_STACK_LINE(1223)
										Dynamic tmp28;		HX_STACK_VAR(tmp28,"tmp28");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::lime::utils::ArrayBufferView tmp29 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__alpha16;		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1223)
											::lime::utils::ArrayBufferView this1 = tmp29;		HX_STACK_VAR(this1,"this1");
											HX_STACK_LINE(1223)
											{
												HX_STACK_LINE(1223)
												bool littleEndian = true;		HX_STACK_VAR(littleEndian,"littleEndian");
												HX_STACK_LINE(1223)
												tmp28 = ::__hxcpp_memory_get_ui32(this1->buffer->b,(this1->byteOffset + (((int(colorRGBA) & int((int)255))) * (int)4)));
											}
										}
										HX_STACK_LINE(1223)
										::lime::math::color::_RGBA::RGBA_Impl__obj::a16 = tmp28;
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											int tmp29 = (int(colorRGBA) >> int((int)24));		HX_STACK_VAR(tmp29,"tmp29");
											HX_STACK_LINE(1223)
											int tmp30 = (int(tmp29) & int((int)255));		HX_STACK_VAR(tmp30,"tmp30");
											HX_STACK_LINE(1223)
											int tmp31 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp31,"tmp31");
											HX_STACK_LINE(1223)
											int tmp32 = (tmp30 * tmp31);		HX_STACK_VAR(tmp32,"tmp32");
											HX_STACK_LINE(1223)
											int tmp33 = (int(tmp32) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
											HX_STACK_LINE(1223)
											int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
											HX_STACK_LINE(1223)
											int tmp35 = (int(tmp34) << int((int)24));		HX_STACK_VAR(tmp35,"tmp35");
											HX_STACK_LINE(1223)
											int tmp36 = (int(colorRGBA) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
											HX_STACK_LINE(1223)
											int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
											HX_STACK_LINE(1223)
											int tmp38 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp38,"tmp38");
											HX_STACK_LINE(1223)
											int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
											HX_STACK_LINE(1223)
											int tmp40 = (int(tmp39) >> int((int)16));		HX_STACK_VAR(tmp40,"tmp40");
											HX_STACK_LINE(1223)
											int tmp41 = (int(tmp40) & int((int)255));		HX_STACK_VAR(tmp41,"tmp41");
											HX_STACK_LINE(1223)
											int tmp42 = (int(tmp41) << int((int)16));		HX_STACK_VAR(tmp42,"tmp42");
											HX_STACK_LINE(1223)
											int tmp43 = (int(tmp35) | int(tmp42));		HX_STACK_VAR(tmp43,"tmp43");
											HX_STACK_LINE(1223)
											int tmp44 = (int(colorRGBA) >> int((int)8));		HX_STACK_VAR(tmp44,"tmp44");
											HX_STACK_LINE(1223)
											int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
											HX_STACK_LINE(1223)
											int tmp46 = ::lime::math::color::_RGBA::RGBA_Impl__obj::a16;		HX_STACK_VAR(tmp46,"tmp46");
											HX_STACK_LINE(1223)
											int tmp47 = (tmp45 * tmp46);		HX_STACK_VAR(tmp47,"tmp47");
											HX_STACK_LINE(1223)
											int tmp48 = (int(tmp47) >> int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
											HX_STACK_LINE(1223)
											int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
											HX_STACK_LINE(1223)
											int tmp50 = (int(tmp49) << int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
											HX_STACK_LINE(1223)
											int tmp51 = (int(tmp43) | int(tmp50));		HX_STACK_VAR(tmp51,"tmp51");
											HX_STACK_LINE(1223)
											int tmp52 = (int(colorRGBA) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
											HX_STACK_LINE(1223)
											int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
											HX_STACK_LINE(1223)
											int tmp54 = (int(tmp51) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
											HX_STACK_LINE(1223)
											colorRGBA = tmp54;
										}
									}
								}
							}
							HX_STACK_LINE(1223)
							int tmp24 = srcFormat;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(1223)
							switch( (int)(tmp24)){
								case (int)2: {
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int val = tmp25;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
								}
								;break;
								case (int)0: {
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int val = tmp25;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
								}
								;break;
								case (int)1: {
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int val = tmp25;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + srcPosition),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)24));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)1))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)16));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)2))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
									HX_STACK_LINE(1223)
									{
										HX_STACK_LINE(1223)
										int tmp25 = (int(colorRGBA) >> int((int)8));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1223)
										int tmp26 = (int(tmp25) & int((int)255));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1223)
										int val = tmp26;		HX_STACK_VAR(val,"val");
										HX_STACK_LINE(1223)
										{
											HX_STACK_LINE(1223)
											::__hxcpp_memory_set_byte(srcData->buffer->b,(srcData->byteOffset + ((srcPosition + (int)3))),val);
											HX_STACK_LINE(1223)
											val;
										}
									}
								}
								;break;
							}
						}
						HX_STACK_LINE(1224)
						(hits)++;
					}
					HX_STACK_LINE(1228)
					hx::AddEq(srcPosition,(int)4);
				}
			}
		}
	}
	HX_STACK_LINE(1233)
	int tmp4 = hits;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1233)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC11(ImageDataUtil_obj,__threshold_inner_loop,return )

Void ImageDataUtil_obj::unmultiplyAlpha( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","unmultiplyAlpha",0xa6ce9eb3,"lime.graphics.utils.ImageDataUtil.unmultiplyAlpha","lime/graphics/utils/ImageDataUtil.hx",1237,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1239)
		::lime::utils::ArrayBufferView tmp = image->buffer->data;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1239)
		::lime::utils::ArrayBufferView data = tmp;		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(1240)
		bool tmp1 = (data == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1240)
		if ((tmp1)){
			HX_STACK_LINE(1240)
			return null();
		}
		HX_STACK_LINE(1243)
		bool tmp2 = ::lime::_system::CFFI_obj::enabled;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1243)
		if ((tmp2)){
			HX_STACK_LINE(1243)
			::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
		}
		else{
			HX_STACK_LINE(1247)
			int tmp3 = image->buffer->format;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(1247)
			int format = tmp3;		HX_STACK_VAR(format,"format");
			HX_STACK_LINE(1248)
			int tmp4 = data->length;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1248)
			Float tmp5 = (Float(tmp4) / Float((int)4));		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(1248)
			int tmp6 = ::Std_obj::_int(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1248)
			int length = tmp6;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1249)
			int pixel;		HX_STACK_VAR(pixel,"pixel");
			HX_STACK_LINE(1251)
			{
				HX_STACK_LINE(1251)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1251)
				while((true)){
					HX_STACK_LINE(1251)
					bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
					HX_STACK_LINE(1251)
					bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
					HX_STACK_LINE(1251)
					if ((tmp8)){
						HX_STACK_LINE(1251)
						break;
					}
					HX_STACK_LINE(1251)
					int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(1251)
					int i = tmp9;		HX_STACK_VAR(i,"i");
					HX_STACK_LINE(1253)
					{
						HX_STACK_LINE(1253)
						int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1253)
						int offset = tmp10;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1253)
						int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1253)
						switch( (int)(tmp11)){
							case (int)2: {
								HX_STACK_LINE(1253)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1253)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1253)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1253)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1253)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1253)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1253)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1253)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1253)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1253)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1253)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1253)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1253)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1253)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1253)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1253)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1253)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1253)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1253)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1253)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1253)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1253)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1253)
								pixel = tmp29;
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1253)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1253)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1253)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1253)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1253)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1253)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1253)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1253)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1253)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1253)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1253)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1253)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1253)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1253)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1253)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1253)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1253)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1253)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1253)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1253)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1253)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1253)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1253)
								pixel = tmp29;
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1253)
								int tmp12 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))));		HX_STACK_VAR(tmp12,"tmp12");
								HX_STACK_LINE(1253)
								Dynamic tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
								HX_STACK_LINE(1253)
								int r = tmp13;		HX_STACK_VAR(r,"r");
								HX_STACK_LINE(1253)
								int tmp14 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))));		HX_STACK_VAR(tmp14,"tmp14");
								HX_STACK_LINE(1253)
								Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1253)
								int g = tmp15;		HX_STACK_VAR(g,"g");
								HX_STACK_LINE(1253)
								int tmp16 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1253)
								Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
								HX_STACK_LINE(1253)
								int b = tmp17;		HX_STACK_VAR(b,"b");
								HX_STACK_LINE(1253)
								int tmp18 = ::__hxcpp_memory_get_byte(data->buffer->b,(data->byteOffset + offset));		HX_STACK_VAR(tmp18,"tmp18");
								HX_STACK_LINE(1253)
								Dynamic tmp19 = (int(tmp18) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
								HX_STACK_LINE(1253)
								int a = tmp19;		HX_STACK_VAR(a,"a");
								HX_STACK_LINE(1253)
								int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
								HX_STACK_LINE(1253)
								int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
								HX_STACK_LINE(1253)
								int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
								HX_STACK_LINE(1253)
								int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(1253)
								int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(1253)
								int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(1253)
								int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(1253)
								int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(1253)
								int tmp28 = (int(a) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(1253)
								int tmp29 = (int(tmp27) | int(tmp28));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(1253)
								pixel = tmp29;
							}
							;break;
						}
						HX_STACK_LINE(1253)
						{
							HX_STACK_LINE(1253)
							int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
							HX_STACK_LINE(1253)
							bool tmp13 = (tmp12 != (int)0);		HX_STACK_VAR(tmp13,"tmp13");
							HX_STACK_LINE(1253)
							bool tmp14;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(1253)
							if ((tmp13)){
								HX_STACK_LINE(1253)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1253)
								int tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1253)
								tmp14 = (tmp16 != (int)255);
							}
							else{
								HX_STACK_LINE(1253)
								tmp14 = false;
							}
							HX_STACK_LINE(1253)
							if ((tmp14)){
								HX_STACK_LINE(1253)
								int tmp15 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
								HX_STACK_LINE(1253)
								Float tmp16 = (Float(((Float)255.0)) / Float(tmp15));		HX_STACK_VAR(tmp16,"tmp16");
								HX_STACK_LINE(1253)
								::lime::math::color::_RGBA::RGBA_Impl__obj::unmult = tmp16;
								HX_STACK_LINE(1253)
								{
									HX_STACK_LINE(1253)
									Dynamic tmp17;		HX_STACK_VAR(tmp17,"tmp17");
									HX_STACK_LINE(1253)
									{
										HX_STACK_LINE(1253)
										::lime::utils::ArrayBufferView tmp18 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp18,"tmp18");
										HX_STACK_LINE(1253)
										::lime::utils::ArrayBufferView this1 = tmp18;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1253)
										int tmp19 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1253)
										int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1253)
										Float tmp21 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1253)
										Float tmp22 = (tmp20 * tmp21);		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1253)
										int tmp23 = ::Math_obj::round(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1253)
										int idx = tmp23;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1253)
										int tmp24 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1253)
										tmp17 = (int(tmp24) & int((int)255));
									}
									HX_STACK_LINE(1253)
									int r = tmp17;		HX_STACK_VAR(r,"r");
									HX_STACK_LINE(1253)
									Dynamic tmp18;		HX_STACK_VAR(tmp18,"tmp18");
									HX_STACK_LINE(1253)
									{
										HX_STACK_LINE(1253)
										::lime::utils::ArrayBufferView tmp19 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp19,"tmp19");
										HX_STACK_LINE(1253)
										::lime::utils::ArrayBufferView this1 = tmp19;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1253)
										int tmp20 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1253)
										int tmp21 = (int(tmp20) & int((int)255));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1253)
										Float tmp22 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1253)
										Float tmp23 = (tmp21 * tmp22);		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1253)
										int tmp24 = ::Math_obj::round(tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1253)
										int idx = tmp24;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1253)
										int tmp25 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1253)
										tmp18 = (int(tmp25) & int((int)255));
									}
									HX_STACK_LINE(1253)
									int g = tmp18;		HX_STACK_VAR(g,"g");
									HX_STACK_LINE(1253)
									Dynamic tmp19;		HX_STACK_VAR(tmp19,"tmp19");
									HX_STACK_LINE(1253)
									{
										HX_STACK_LINE(1253)
										::lime::utils::ArrayBufferView tmp20 = ::lime::math::color::_RGBA::RGBA_Impl__obj::__clamp;		HX_STACK_VAR(tmp20,"tmp20");
										HX_STACK_LINE(1253)
										::lime::utils::ArrayBufferView this1 = tmp20;		HX_STACK_VAR(this1,"this1");
										HX_STACK_LINE(1253)
										int tmp21 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp21,"tmp21");
										HX_STACK_LINE(1253)
										int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
										HX_STACK_LINE(1253)
										Float tmp23 = ::lime::math::color::_RGBA::RGBA_Impl__obj::unmult;		HX_STACK_VAR(tmp23,"tmp23");
										HX_STACK_LINE(1253)
										Float tmp24 = (tmp22 * tmp23);		HX_STACK_VAR(tmp24,"tmp24");
										HX_STACK_LINE(1253)
										int tmp25 = ::Math_obj::round(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
										HX_STACK_LINE(1253)
										int idx = tmp25;		HX_STACK_VAR(idx,"idx");
										HX_STACK_LINE(1253)
										int tmp26 = ::__hxcpp_memory_get_byte(this1->buffer->b,(this1->byteOffset + idx));		HX_STACK_VAR(tmp26,"tmp26");
										HX_STACK_LINE(1253)
										tmp19 = (int(tmp26) & int((int)255));
									}
									HX_STACK_LINE(1253)
									int b = tmp19;		HX_STACK_VAR(b,"b");
									HX_STACK_LINE(1253)
									int tmp20 = (int(r) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
									HX_STACK_LINE(1253)
									int tmp21 = (int(tmp20) << int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
									HX_STACK_LINE(1253)
									int tmp22 = (int(g) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
									HX_STACK_LINE(1253)
									int tmp23 = (int(tmp22) << int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
									HX_STACK_LINE(1253)
									int tmp24 = (int(tmp21) | int(tmp23));		HX_STACK_VAR(tmp24,"tmp24");
									HX_STACK_LINE(1253)
									int tmp25 = (int(b) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
									HX_STACK_LINE(1253)
									int tmp26 = (int(tmp25) << int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
									HX_STACK_LINE(1253)
									int tmp27 = (int(tmp24) | int(tmp26));		HX_STACK_VAR(tmp27,"tmp27");
									HX_STACK_LINE(1253)
									int tmp28 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
									HX_STACK_LINE(1253)
									int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(1253)
									int tmp30 = (int(tmp27) | int(tmp29));		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(1253)
									pixel = tmp30;
								}
							}
						}
					}
					HX_STACK_LINE(1254)
					{
						HX_STACK_LINE(1254)
						int tmp10 = (i * (int)4);		HX_STACK_VAR(tmp10,"tmp10");
						HX_STACK_LINE(1254)
						int offset = tmp10;		HX_STACK_VAR(offset,"offset");
						HX_STACK_LINE(1254)
						int tmp11 = format;		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(1254)
						switch( (int)(tmp11)){
							case (int)2: {
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
							}
							;break;
							case (int)0: {
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
							}
							;break;
							case (int)1: {
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int val = tmp12;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + offset),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)1))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)2))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
								HX_STACK_LINE(1254)
								{
									HX_STACK_LINE(1254)
									int tmp12 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
									HX_STACK_LINE(1254)
									int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
									HX_STACK_LINE(1254)
									int val = tmp13;		HX_STACK_VAR(val,"val");
									HX_STACK_LINE(1254)
									{
										HX_STACK_LINE(1254)
										::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + ((offset + (int)3))),val);
										HX_STACK_LINE(1254)
										val;
									}
								}
							}
							;break;
						}
					}
				}
			}
		}
		HX_STACK_LINE(1260)
		image->buffer->premultiplied = false;
		HX_STACK_LINE(1261)
		image->dirty = true;
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,unmultiplyAlpha,(void))

int ImageDataUtil_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","__ucompare",0x9deb971e,"lime.graphics.utils.ImageDataUtil.__ucompare","lime/graphics/utils/ImageDataUtil.hx",1266,0x494d921f)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1268)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1269)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1271)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1271)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1271)
	tmp1 = tmp3;
	HX_STACK_LINE(1272)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1272)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1272)
	tmp2 = tmp5;
	HX_STACK_LINE(1274)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1274)
	if ((tmp6)){
		HX_STACK_LINE(1276)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1276)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1276)
		if ((tmp7)){
			HX_STACK_LINE(1276)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(1276)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(1276)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1280)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1280)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1280)
		tmp1 = tmp8;
		HX_STACK_LINE(1281)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1281)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1281)
		tmp2 = tmp10;
		HX_STACK_LINE(1283)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1283)
		if ((tmp11)){
			HX_STACK_LINE(1285)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1285)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1285)
			if ((tmp12)){
				HX_STACK_LINE(1285)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(1285)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(1285)
			return tmp13;
		}
		else{
			HX_STACK_LINE(1289)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1289)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1289)
			tmp1 = tmp13;
			HX_STACK_LINE(1290)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1290)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1290)
			tmp2 = tmp15;
			HX_STACK_LINE(1292)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1292)
			if ((tmp16)){
				HX_STACK_LINE(1294)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1294)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1294)
				if ((tmp17)){
					HX_STACK_LINE(1294)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(1294)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(1294)
				return tmp18;
			}
			else{
				HX_STACK_LINE(1298)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1298)
				tmp1 = tmp17;
				HX_STACK_LINE(1299)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1299)
				tmp2 = tmp18;
				HX_STACK_LINE(1301)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1301)
				if ((tmp19)){
					HX_STACK_LINE(1303)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1303)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1303)
					if ((tmp20)){
						HX_STACK_LINE(1303)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(1303)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(1303)
					return tmp21;
				}
				else{
					HX_STACK_LINE(1307)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1274)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,__ucompare,return )

Void ImageDataUtil_obj::lime_image_data_util_color_transform( Dynamic image,Dynamic rect,Dynamic colorMatrix){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_color_transform",0x3cac7168,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_color_transform","lime/graphics/utils/ImageDataUtil.hx",1326,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorMatrix,"colorMatrix")
		HX_STACK_LINE(1326)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_color_transform.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(colorMatrix));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(ImageDataUtil_obj,lime_image_data_util_color_transform,(void))

Void ImageDataUtil_obj::lime_image_data_util_copy_channel( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int srcChannel,int destChannel){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_copy_channel",0x470716e1,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_copy_channel","lime/graphics/utils/ImageDataUtil.hx",1327,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(srcChannel,"srcChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(1327)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),srcChannel,destChannel);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(ImageDataUtil_obj,lime_image_data_util_copy_channel,(void))

Void ImageDataUtil_obj::lime_image_data_util_copy_pixels( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,Dynamic alphaImage,Dynamic alphaPoint,bool mergeAlpha){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_copy_pixels",0x941986cf,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_copy_pixels","lime/graphics/utils/ImageDataUtil.hx",1328,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(alphaImage,"alphaImage")
		HX_STACK_ARG(alphaPoint,"alphaPoint")
		HX_STACK_ARG(mergeAlpha,"mergeAlpha")
		HX_STACK_LINE(1328)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),hx::DynamicPtr(alphaImage),hx::DynamicPtr(alphaPoint),mergeAlpha);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC7(ImageDataUtil_obj,lime_image_data_util_copy_pixels,(void))

Void ImageDataUtil_obj::lime_image_data_util_fill_rect( Dynamic image,Dynamic rect,int rg,int ba){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_fill_rect",0xea105ab8,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_fill_rect","lime/graphics/utils/ImageDataUtil.hx",1329,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(rg,"rg")
		HX_STACK_ARG(ba,"ba")
		HX_STACK_LINE(1329)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_fill_rect,(void))

Void ImageDataUtil_obj::lime_image_data_util_flood_fill( Dynamic image,int x,int y,int rg,int ba){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_flood_fill",0x954481cc,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_flood_fill","lime/graphics/utils/ImageDataUtil.hx",1330,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(rg,"rg")
		HX_STACK_ARG(ba,"ba")
		HX_STACK_LINE(1330)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill.call(hx::DynamicPtr(image),x,y,rg,ba);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(ImageDataUtil_obj,lime_image_data_util_flood_fill,(void))

Void ImageDataUtil_obj::lime_image_data_util_get_pixels( Dynamic image,Dynamic rect,int format,Dynamic bytes){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_get_pixels",0xafc6d8de,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_get_pixels","lime/graphics/utils/ImageDataUtil.hx",1331,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(format,"format")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_LINE(1331)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),format,hx::DynamicPtr(bytes));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_get_pixels,(void))

Void ImageDataUtil_obj::lime_image_data_util_merge( Dynamic image,Dynamic sourceImage,Dynamic sourceRect,Dynamic destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_merge",0x6bf371d0,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_merge","lime/graphics/utils/ImageDataUtil.hx",1332,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(sourceImage,"sourceImage")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(1332)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_merge.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),hx::DynamicPtr(destPoint),redMultiplier,greenMultiplier,blueMultiplier,alphaMultiplier);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,lime_image_data_util_merge,(void))

Void ImageDataUtil_obj::lime_image_data_util_multiply_alpha( Dynamic image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_multiply_alpha",0xa72191ab,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_multiply_alpha","lime/graphics/utils/ImageDataUtil.hx",1333,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1333)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,lime_image_data_util_multiply_alpha,(void))

Void ImageDataUtil_obj::lime_image_data_util_resize( Dynamic image,Dynamic buffer,int width,int height){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_resize",0x0983bfdc,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_resize","lime/graphics/utils/ImageDataUtil.hx",1334,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(buffer,"buffer")
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1334)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_resize.call(hx::DynamicPtr(image),hx::DynamicPtr(buffer),width,height);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_resize,(void))

Void ImageDataUtil_obj::lime_image_data_util_set_format( Dynamic image,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_set_format",0x2429175c,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_set_format","lime/graphics/utils/ImageDataUtil.hx",1335,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1335)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_format.call(hx::DynamicPtr(image),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(ImageDataUtil_obj,lime_image_data_util_set_format,(void))

Void ImageDataUtil_obj::lime_image_data_util_set_pixels( Dynamic image,Dynamic rect,Dynamic bytes,int format){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_set_pixels",0xb3447752,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_set_pixels","lime/graphics/utils/ImageDataUtil.hx",1336,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(format,"format")
		HX_STACK_LINE(1336)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels.call(hx::DynamicPtr(image),hx::DynamicPtr(rect),hx::DynamicPtr(bytes),format);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(ImageDataUtil_obj,lime_image_data_util_set_pixels,(void))

int ImageDataUtil_obj::lime_image_data_util_threshold_inner_loop( Dynamic image,::lime::graphics::Image sourceImage,Dynamic sourceRect,int mask,int threshold,int operation,int color,Dynamic destRect){
	HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_threshold_inner_loop",0xbca02029,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_threshold_inner_loop","lime/graphics/utils/ImageDataUtil.hx",1337,0x494d921f)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(sourceImage,"sourceImage")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(destRect,"destRect")
	HX_STACK_LINE(1337)
	return ::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop.call(hx::DynamicPtr(image),hx::DynamicPtr(sourceImage),hx::DynamicPtr(sourceRect),mask,threshold,operation,color,hx::DynamicPtr(destRect));
}


STATIC_HX_DEFINE_DYNAMIC_FUNC8(ImageDataUtil_obj,lime_image_data_util_threshold_inner_loop,return )

Void ImageDataUtil_obj::lime_image_data_util_unmultiply_alpha( Dynamic image){
{
		HX_STACK_FRAME("lime.graphics.utils.ImageDataUtil","lime_image_data_util_unmultiply_alpha",0x26f04bc4,"lime.graphics.utils.ImageDataUtil.lime_image_data_util_unmultiply_alpha","lime/graphics/utils/ImageDataUtil.hx",1338,0x494d921f)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1338)
		::lime::graphics::utils::ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha.call(hx::DynamicPtr(image));
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ImageDataUtil_obj,lime_image_data_util_unmultiply_alpha,(void))

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_color_transform;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect;

::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_merge;

::cpp::Function< void ( ::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_resize;

::cpp::Function< void ( ::hx::Object * ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_set_format;

::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels;

::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop;

::cpp::Function< void ( ::hx::Object * ) > ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha;


ImageDataUtil_obj::ImageDataUtil_obj()
{
}

bool ImageDataUtil_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { outValue = merge_dyn(); return true;  }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { outValue = resize_dyn(); return true;  }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fillRect") ) { outValue = fillRect_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel") ) { outValue = getPixel_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel") ) { outValue = setPixel_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"floodFill") ) { outValue = floodFill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixels") ) { outValue = getPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setFormat") ) { outValue = setFormat_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixels") ) { outValue = setPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"threshold") ) { outValue = threshold_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { outValue = copyPixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { outValue = getPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { outValue = setPixel32_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"copyChannel") ) { outValue = copyChannel_dyn(); return true;  }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resizeBuffer") ) { outValue = resizeBuffer_dyn(); return true;  }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"multiplyAlpha") ) { outValue = multiplyAlpha_dyn(); return true;  }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"colorTransform") ) { outValue = colorTransform_dyn(); return true;  }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"unmultiplyAlpha") ) { outValue = unmultiplyAlpha_dyn(); return true;  }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { outValue = getColorBoundsRect_dyn(); return true;  }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__threshold_inner_loop") ) { outValue = __threshold_inner_loop_dyn(); return true;  }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_merge") ) { outValue = lime_image_data_util_merge_dyn(); return true;  }
		break;
	case 27:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_resize") ) { outValue = lime_image_data_util_resize_dyn(); return true;  }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_fill_rect") ) { outValue = lime_image_data_util_fill_rect_dyn(); return true;  }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_flood_fill") ) { outValue = lime_image_data_util_flood_fill_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_get_pixels") ) { outValue = lime_image_data_util_get_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_format") ) { outValue = lime_image_data_util_set_format_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"lime_image_data_util_set_pixels") ) { outValue = lime_image_data_util_set_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { outValue = cffi_lime_image_data_util_merge; return true;  }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_pixels") ) { outValue = lime_image_data_util_copy_pixels_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { outValue = cffi_lime_image_data_util_resize; return true;  }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_copy_channel") ) { outValue = lime_image_data_util_copy_channel_dyn(); return true;  }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_multiply_alpha") ) { outValue = lime_image_data_util_multiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { outValue = cffi_lime_image_data_util_fill_rect; return true;  }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_color_transform") ) { outValue = lime_image_data_util_color_transform_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { outValue = cffi_lime_image_data_util_flood_fill; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { outValue = cffi_lime_image_data_util_get_pixels; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { outValue = cffi_lime_image_data_util_set_format; return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { outValue = cffi_lime_image_data_util_set_pixels; return true;  }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_unmultiply_alpha") ) { outValue = lime_image_data_util_unmultiply_alpha_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { outValue = cffi_lime_image_data_util_copy_pixels; return true;  }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { outValue = cffi_lime_image_data_util_copy_channel; return true;  }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { outValue = cffi_lime_image_data_util_multiply_alpha; return true;  }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"lime_image_data_util_threshold_inner_loop") ) { outValue = lime_image_data_util_threshold_inner_loop_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { outValue = cffi_lime_image_data_util_color_transform; return true;  }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { outValue = cffi_lime_image_data_util_unmultiply_alpha; return true;  }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold_inner_loop") ) { outValue = cffi_lime_image_data_util_threshold_inner_loop; return true;  }
	}
	return false;
}

bool ImageDataUtil_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 31:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_merge") ) { cffi_lime_image_data_util_merge=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		break;
	case 32:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_resize") ) { cffi_lime_image_data_util_resize=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 35:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_fill_rect") ) { cffi_lime_image_data_util_fill_rect=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 36:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_flood_fill") ) { cffi_lime_image_data_util_flood_fill=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_get_pixels") ) { cffi_lime_image_data_util_get_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_format") ) { cffi_lime_image_data_util_set_format=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,int ) > >(); return true; }
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_set_pixels") ) { cffi_lime_image_data_util_set_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) > >(); return true; }
		break;
	case 37:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_pixels") ) { cffi_lime_image_data_util_copy_pixels=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) > >(); return true; }
		break;
	case 38:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_copy_channel") ) { cffi_lime_image_data_util_copy_channel=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) > >(); return true; }
		break;
	case 40:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_multiply_alpha") ) { cffi_lime_image_data_util_multiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_color_transform") ) { cffi_lime_image_data_util_color_transform=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) > >(); return true; }
		break;
	case 42:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_unmultiply_alpha") ) { cffi_lime_image_data_util_unmultiply_alpha=ioValue.Cast< ::cpp::Function< void ( ::hx::Object * ) > >(); return true; }
		break;
	case 46:
		if (HX_FIELD_EQ(inName,"cffi_lime_image_data_util_threshold_inner_loop") ) { cffi_lime_image_data_util_threshold_inner_loop=ioValue.Cast< ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,::hx::Object * ) > >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_merge,HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_resize,HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_set_format,HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00")},
	{hx::fsObject /*::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop,HX_HCSTRING("cffi_lime_image_data_util_threshold_inner_loop","\x7e","\xdd","\x7f","\x85")},
	{hx::fsObject /*::cpp::Function< void ( ::hx::Object * ) >*/ ,(void *) &ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop,"cffi_lime_image_data_util_threshold_inner_loop");
	HX_MARK_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_color_transform,"cffi_lime_image_data_util_color_transform");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_channel,"cffi_lime_image_data_util_copy_channel");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_copy_pixels,"cffi_lime_image_data_util_copy_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_fill_rect,"cffi_lime_image_data_util_fill_rect");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_flood_fill,"cffi_lime_image_data_util_flood_fill");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_get_pixels,"cffi_lime_image_data_util_get_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_merge,"cffi_lime_image_data_util_merge");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_multiply_alpha,"cffi_lime_image_data_util_multiply_alpha");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_resize,"cffi_lime_image_data_util_resize");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_format,"cffi_lime_image_data_util_set_format");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_set_pixels,"cffi_lime_image_data_util_set_pixels");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_threshold_inner_loop,"cffi_lime_image_data_util_threshold_inner_loop");
	HX_VISIT_MEMBER_NAME(ImageDataUtil_obj::cffi_lime_image_data_util_unmultiply_alpha,"cffi_lime_image_data_util_unmultiply_alpha");
};

#endif

hx::Class ImageDataUtil_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("multiplyAlpha","\x9a","\xf2","\x1c","\x6b"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("resizeBuffer","\x14","\x7a","\xa2","\xb4"),
	HX_HCSTRING("setFormat","\x79","\x04","\x36","\x5d"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("__threshold_inner_loop","\x61","\xd7","\x30","\x7b"),
	HX_HCSTRING("unmultiplyAlpha","\xa1","\xc8","\x96","\x28"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),
	HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),
	HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),
	HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),
	HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),
	HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),
	HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),
	HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),
	HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),
	HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),
	HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),
	HX_HCSTRING("lime_image_data_util_threshold_inner_loop","\x97","\x7b","\x8f","\x8b"),
	HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),
	HX_HCSTRING("cffi_lime_image_data_util_color_transform","\x33","\xb4","\x2f","\xf1"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_channel","\x36","\xf7","\xde","\x9a"),
	HX_HCSTRING("cffi_lime_image_data_util_copy_pixels","\x1a","\xc8","\x5a","\xd9"),
	HX_HCSTRING("cffi_lime_image_data_util_fill_rect","\x43","\x23","\xe6","\xb7"),
	HX_HCSTRING("cffi_lime_image_data_util_flood_fill","\xe1","\x32","\x7e","\xe2"),
	HX_HCSTRING("cffi_lime_image_data_util_get_pixels","\xf3","\x89","\x00","\xfd"),
	HX_HCSTRING("cffi_lime_image_data_util_merge","\xdb","\x58","\xe1","\x59"),
	HX_HCSTRING("cffi_lime_image_data_util_multiply_alpha","\x40","\xf1","\xf1","\x88"),
	HX_HCSTRING("cffi_lime_image_data_util_resize","\x71","\x02","\xc0","\x4b"),
	HX_HCSTRING("cffi_lime_image_data_util_set_format","\x71","\xc8","\x62","\x71"),
	HX_HCSTRING("cffi_lime_image_data_util_set_pixels","\x67","\x28","\x7e","\x00"),
	HX_HCSTRING("cffi_lime_image_data_util_threshold_inner_loop","\x7e","\xdd","\x7f","\x85"),
	HX_HCSTRING("cffi_lime_image_data_util_unmultiply_alpha","\x99","\x7a","\x47","\x65"),
	::String(null()) };

void ImageDataUtil_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.utils.ImageDataUtil","\x80","\x72","\x23","\xf0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ImageDataUtil_obj::__GetStatic;
	__mClass->mSetStaticField = &ImageDataUtil_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ImageDataUtil_obj >;
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

void ImageDataUtil_obj::__boot()
{
	cffi_lime_image_data_util_color_transform= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_color_transform","\xba","\xcc","\x96","\x40"),HX_HCSTRING("ooov","\x47","\x4a","\xb3","\x49"),false));
	cffi_lime_image_data_util_copy_channel= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_channel","\x4f","\x54","\x36","\xa5"),HX_HCSTRING("ooooiiv","\x56","\xa6","\x94","\x9c"),false));
	cffi_lime_image_data_util_copy_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,bool ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_copy_pixels","\x21","\x51","\x7b","\xab"),HX_HCSTRING("oooooobv","\x34","\xa9","\x78","\x69"),false));
	cffi_lime_image_data_util_fill_rect= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_fill_rect","\x8a","\x8c","\xa4","\x8e"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_flood_fill= ::cpp::Function< void ( ::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_flood_fill","\xba","\xe7","\x5b","\xf2"),HX_HCSTRING("oiiiiv","\xe7","\x65","\x67","\x1c"),false));
	cffi_lime_image_data_util_get_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_get_pixels","\xcc","\x3e","\xde","\x0c"),HX_HCSTRING("ooiov","\xb0","\x20","\x29","\x33"),false));
	cffi_lime_image_data_util_merge= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_merge","\xa2","\xd2","\xb1","\xf7"),HX_HCSTRING("ooooiiiiv","\x76","\xe6","\xc1","\x67"),false));
	cffi_lime_image_data_util_multiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_multiply_alpha","\x99","\x86","\xad","\x5d"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
	cffi_lime_image_data_util_resize= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,int ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_resize","\xca","\x16","\x5a","\xc4"),HX_HCSTRING("ooiiv","\x76","\x1b","\x29","\x33"),false));
	cffi_lime_image_data_util_set_format= ::cpp::Function< void ( ::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_format","\x4a","\x7d","\x40","\x81"),HX_HCSTRING("oiv","\x1c","\x96","\x54","\x00"),false));
	cffi_lime_image_data_util_set_pixels= ::cpp::Function< void ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_set_pixels","\x40","\xdd","\x5b","\x10"),HX_HCSTRING("oooiv","\xfc","\xa8","\x2d","\x33"),false));
	cffi_lime_image_data_util_threshold_inner_loop= ::cpp::Function< int ( ::hx::Object * ,::hx::Object * ,::hx::Object * ,int ,int ,int ,int ,::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_threshold_inner_loop","\x97","\x7b","\x8f","\x8b"),HX_HCSTRING("oooiiiioi","\x69","\xc1","\x9d","\x01"),false));
	cffi_lime_image_data_util_unmultiply_alpha= ::cpp::Function< void ( ::hx::Object * ) >::__new(::cpp::Prime_obj::_loadPrime(HX_HCSTRING("lime","\x15","\x17","\xb3","\x47"),HX_HCSTRING("lime_image_data_util_unmultiply_alpha","\x32","\xd8","\x15","\x90"),HX_HCSTRING("ov","\x27","\x61","\x00","\x00"),false));
}

} // end namespace lime
} // end namespace graphics
} // end namespace utils
