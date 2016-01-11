#include <hxcpp.h>

#include "hxMath.h"
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_GLRenderContext
#include <lime/graphics/GLRenderContext.h>
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
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoImageSurface_CairoImageSurface_Impl_
#include <lime/graphics/cairo/_CairoImageSurface/CairoImageSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoSurface_CairoSurface_Impl_
#include <lime/graphics/cairo/_CairoSurface/CairoSurface_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GL
#include <lime/graphics/opengl/GL.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLBuffer
#include <lime/graphics/opengl/GLBuffer.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLTexture
#include <lime/graphics/opengl/GLTexture.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
#endif
#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_math_Vector2
#include <lime/math/Vector2.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
#endif
#ifndef INCLUDED_openfl_Memory
#include <openfl/Memory.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoMaskManager
#include <openfl/_internal/renderer/cairo/CairoMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#include <openfl/_internal/renderer/opengl/GLBitmap.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_PingPongTexture
#include <openfl/_internal/renderer/opengl/utils/PingPongTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_RenderTexture
#include <openfl/_internal/renderer/opengl/utils/RenderTexture.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_utils_SpriteBatch
#include <openfl/_internal/renderer/opengl/utils/SpriteBatch.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_BlendMode
#include <openfl/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#include <openfl/display/PNGEncoderOptions.h>
#endif
#ifndef INCLUDED_openfl_display_PixelSnapping
#include <openfl/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_TextureUvs
#include <openfl/display/TextureUvs.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif
namespace openfl{
namespace display{

Void BitmapData_obj::__construct(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{
HX_STACK_FRAME("openfl.display.BitmapData","new",0x7e3e4115,"openfl.display.BitmapData.new","openfl/display/BitmapData.hx",63,0xdd12d5b9)
HX_STACK_THIS(this)
HX_STACK_ARG(width,"width")
HX_STACK_ARG(height,"height")
HX_STACK_ARG(__o_transparent,"transparent")
HX_STACK_ARG(__o_fillColor,"fillColor")
bool transparent = __o_transparent.Default(true);
int fillColor = __o_fillColor.Default(-1);
{
	HX_STACK_LINE(86)
	this->__usingPingPongTexture = false;
	HX_STACK_LINE(92)
	this->transparent = transparent;
	HX_STACK_LINE(99)
	bool tmp = (width < (int)0);		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(99)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(99)
	if ((tmp)){
		HX_STACK_LINE(99)
		tmp1 = (int)0;
	}
	else{
		HX_STACK_LINE(99)
		tmp1 = width;
	}
	HX_STACK_LINE(99)
	width = tmp1;
	HX_STACK_LINE(100)
	bool tmp2 = (height < (int)0);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(100)
	int tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(100)
	if ((tmp2)){
		HX_STACK_LINE(100)
		tmp3 = (int)0;
	}
	else{
		HX_STACK_LINE(100)
		tmp3 = height;
	}
	HX_STACK_LINE(100)
	height = tmp3;
	HX_STACK_LINE(102)
	this->width = width;
	HX_STACK_LINE(103)
	this->height = height;
	HX_STACK_LINE(104)
	::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,width,height);		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(104)
	this->rect = tmp4;
	HX_STACK_LINE(106)
	bool tmp5 = (width > (int)0);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(106)
	bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(106)
	if ((tmp5)){
		HX_STACK_LINE(106)
		tmp6 = (height > (int)0);
	}
	else{
		HX_STACK_LINE(106)
		tmp6 = false;
	}
	HX_STACK_LINE(106)
	if ((tmp6)){
		HX_STACK_LINE(108)
		bool tmp7 = transparent;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(108)
		if ((tmp7)){
			HX_STACK_LINE(110)
			int tmp8 = (int(fillColor) & int((int)-16777216));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(110)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(110)
			bool tmp10 = (tmp9 == (int)0);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(110)
			if ((tmp10)){
				HX_STACK_LINE(112)
				fillColor = (int)0;
			}
		}
		else{
			HX_STACK_LINE(118)
			int tmp8 = (int(fillColor) & int((int)16777215));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(118)
			int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(118)
			int tmp10 = (int((int)-16777216) | int(tmp9));		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(118)
			fillColor = tmp10;
		}
		HX_STACK_LINE(122)
		int tmp8 = (int(fillColor) << int((int)8));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(122)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(122)
		int tmp10 = (int(fillColor) >> int((int)24));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(122)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(122)
		int tmp12 = (int(tmp11) & int((int)255));		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(122)
		int tmp13 = tmp12;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(122)
		int tmp14 = (int(tmp9) | int(tmp13));		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(122)
		fillColor = tmp14;
		HX_STACK_LINE(125)
		::lime::utils::ArrayBufferView tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(125)
		{
			HX_STACK_LINE(125)
			int tmp16 = (width * height);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(125)
			int tmp17 = (tmp16 * (int)4);		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(125)
			Dynamic elements = tmp17;		HX_STACK_VAR(elements,"elements");
			HX_STACK_LINE(125)
			::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
			HX_STACK_LINE(125)
			bool tmp18 = (elements != null());		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(125)
			if ((tmp18)){
				HX_STACK_LINE(125)
				::lime::utils::ArrayBufferView tmp19 = ::lime::utils::ArrayBufferView_obj::__new(elements,(int)4);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(125)
				this1 = tmp19;
			}
			else{
				HX_STACK_LINE(125)
				bool tmp19 = false;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(125)
				if ((tmp19)){
					HX_STACK_LINE(125)
					::lime::utils::ArrayBufferView tmp20;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(125)
					{
						HX_STACK_LINE(125)
						::lime::utils::ArrayBufferView tmp21 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(125)
						::lime::utils::ArrayBufferView _this = tmp21;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(125)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(125)
						int tmp22 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(125)
						_this->length = tmp22;
						HX_STACK_LINE(125)
						int tmp23 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(125)
						_this->byteLength = tmp23;
						HX_STACK_LINE(125)
						::haxe::io::Bytes tmp24;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(125)
							int tmp25 = _this->byteLength;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(125)
							::haxe::io::Bytes tmp26 = ::haxe::io::Bytes_obj::alloc(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(125)
							this2 = tmp26;
							HX_STACK_LINE(125)
							tmp24 = this2;
						}
						HX_STACK_LINE(125)
						_this->buffer = tmp24;
						HX_STACK_LINE(125)
						_this->copyFromArray(((Array< Float >)(null())),null());
						HX_STACK_LINE(125)
						tmp20 = _this;
					}
					HX_STACK_LINE(125)
					this1 = tmp20;
				}
				else{
					HX_STACK_LINE(125)
					bool tmp20 = false;		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(125)
					if ((tmp20)){
						HX_STACK_LINE(125)
						::lime::utils::ArrayBufferView tmp21;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(125)
						{
							HX_STACK_LINE(125)
							::lime::utils::ArrayBufferView tmp22 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(125)
							::lime::utils::ArrayBufferView _this = tmp22;		HX_STACK_VAR(_this,"_this");
							HX_STACK_LINE(125)
							::haxe::io::Bytes tmp23 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(125)
							::haxe::io::Bytes srcData = tmp23;		HX_STACK_VAR(srcData,"srcData");
							HX_STACK_LINE(125)
							int tmp24 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(125)
							int srcLength = tmp24;		HX_STACK_VAR(srcLength,"srcLength");
							HX_STACK_LINE(125)
							int tmp25 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(125)
							int srcByteOffset = tmp25;		HX_STACK_VAR(srcByteOffset,"srcByteOffset");
							HX_STACK_LINE(125)
							int tmp26 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(125)
							int srcElementSize = tmp26;		HX_STACK_VAR(srcElementSize,"srcElementSize");
							HX_STACK_LINE(125)
							int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
							HX_STACK_LINE(125)
							int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(125)
							int tmp28 = _this->type;		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(125)
							bool tmp29 = (tmp27 == tmp28);		HX_STACK_VAR(tmp29,"tmp29");
							HX_STACK_LINE(125)
							if ((tmp29)){
								HX_STACK_LINE(125)
								int srcLength1 = srcData->length;		HX_STACK_VAR(srcLength1,"srcLength1");
								HX_STACK_LINE(125)
								int tmp30 = (srcLength1 - srcByteOffset);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(125)
								int cloneLength = tmp30;		HX_STACK_VAR(cloneLength,"cloneLength");
								HX_STACK_LINE(125)
								::haxe::io::Bytes tmp31;		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(125)
								{
									HX_STACK_LINE(125)
									::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
									HX_STACK_LINE(125)
									int tmp32 = cloneLength;		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(125)
									::haxe::io::Bytes tmp33 = ::haxe::io::Bytes_obj::alloc(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
									HX_STACK_LINE(125)
									this2 = tmp33;
									HX_STACK_LINE(125)
									tmp31 = this2;
								}
								HX_STACK_LINE(125)
								_this->buffer = tmp31;
								HX_STACK_LINE(125)
								::haxe::io::Bytes tmp32 = srcData;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(125)
								int tmp33 = srcByteOffset;		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(125)
								int tmp34 = cloneLength;		HX_STACK_VAR(tmp34,"tmp34");
								HX_STACK_LINE(125)
								_this->buffer->blit((int)0,tmp32,tmp33,tmp34);
							}
							else{
								HX_STACK_LINE(125)
								HX_STACK_DO_THROW(HX_HCSTRING("unimplemented","\x09","\x2f","\x74","\xb4"));
							}
							HX_STACK_LINE(125)
							int tmp30 = (_this->bytesPerElement * srcLength);		HX_STACK_VAR(tmp30,"tmp30");
							HX_STACK_LINE(125)
							_this->byteLength = tmp30;
							HX_STACK_LINE(125)
							_this->byteOffset = (int)0;
							HX_STACK_LINE(125)
							_this->length = srcLength;
							HX_STACK_LINE(125)
							tmp21 = _this;
						}
						HX_STACK_LINE(125)
						this1 = tmp21;
					}
					else{
						HX_STACK_LINE(125)
						bool tmp21 = false;		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(125)
						if ((tmp21)){
							HX_STACK_LINE(125)
							::lime::utils::ArrayBufferView tmp22;		HX_STACK_VAR(tmp22,"tmp22");
							HX_STACK_LINE(125)
							{
								HX_STACK_LINE(125)
								::lime::utils::ArrayBufferView tmp23 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)4);		HX_STACK_VAR(tmp23,"tmp23");
								HX_STACK_LINE(125)
								::lime::utils::ArrayBufferView _this = tmp23;		HX_STACK_VAR(_this,"_this");
								HX_STACK_LINE(125)
								bool tmp24 = false;		HX_STACK_VAR(tmp24,"tmp24");
								HX_STACK_LINE(125)
								if ((tmp24)){
									HX_STACK_LINE(125)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(125)
								int tmp25 = hx::Mod((int)0,_this->bytesPerElement);		HX_STACK_VAR(tmp25,"tmp25");
								HX_STACK_LINE(125)
								bool tmp26 = (tmp25 != (int)0);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(125)
								if ((tmp26)){
									HX_STACK_LINE(125)
									HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
								}
								HX_STACK_LINE(125)
								int tmp27 = hx::Throw(HX_CSTRING("Invalid field access on null object"));		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(125)
								int bufferByteLength = tmp27;		HX_STACK_VAR(bufferByteLength,"bufferByteLength");
								HX_STACK_LINE(125)
								int elementSize = _this->bytesPerElement;		HX_STACK_VAR(elementSize,"elementSize");
								HX_STACK_LINE(125)
								int newByteLength = bufferByteLength;		HX_STACK_VAR(newByteLength,"newByteLength");
								HX_STACK_LINE(125)
								bool tmp28 = true;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(125)
								if ((tmp28)){
									HX_STACK_LINE(125)
									int tmp29 = bufferByteLength;		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(125)
									newByteLength = tmp29;
									HX_STACK_LINE(125)
									int tmp30 = hx::Mod(bufferByteLength,_this->bytesPerElement);		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(125)
									bool tmp31 = (tmp30 != (int)0);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(125)
									if ((tmp31)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
									HX_STACK_LINE(125)
									bool tmp32 = (newByteLength < (int)0);		HX_STACK_VAR(tmp32,"tmp32");
									HX_STACK_LINE(125)
									if ((tmp32)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								else{
									HX_STACK_LINE(125)
									int tmp29 = (null() * _this->bytesPerElement);		HX_STACK_VAR(tmp29,"tmp29");
									HX_STACK_LINE(125)
									newByteLength = tmp29;
									HX_STACK_LINE(125)
									int tmp30 = newByteLength;		HX_STACK_VAR(tmp30,"tmp30");
									HX_STACK_LINE(125)
									int newRange = tmp30;		HX_STACK_VAR(newRange,"newRange");
									HX_STACK_LINE(125)
									bool tmp31 = (newRange > bufferByteLength);		HX_STACK_VAR(tmp31,"tmp31");
									HX_STACK_LINE(125)
									if ((tmp31)){
										HX_STACK_LINE(125)
										HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError);
									}
								}
								HX_STACK_LINE(125)
								_this->buffer = null();
								HX_STACK_LINE(125)
								_this->byteOffset = (int)0;
								HX_STACK_LINE(125)
								_this->byteLength = newByteLength;
								HX_STACK_LINE(125)
								Float tmp29 = (Float(newByteLength) / Float(_this->bytesPerElement));		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(125)
								int tmp30 = ::Std_obj::_int(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(125)
								_this->length = tmp30;
								HX_STACK_LINE(125)
								tmp22 = _this;
							}
							HX_STACK_LINE(125)
							this1 = tmp22;
						}
						else{
							HX_STACK_LINE(125)
							HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Uint8Array","\x8b","\x64","\x02","\xe4"));
						}
					}
				}
			}
			HX_STACK_LINE(125)
			tmp15 = this1;
		}
		HX_STACK_LINE(125)
		int tmp16 = width;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(125)
		int tmp17 = height;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(125)
		::lime::graphics::ImageBuffer tmp18 = ::lime::graphics::ImageBuffer_obj::__new(tmp15,tmp16,tmp17,null(),null());		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(125)
		::lime::graphics::ImageBuffer buffer = tmp18;		HX_STACK_VAR(buffer,"buffer");
		HX_STACK_LINE(126)
		buffer->format = (int)2;
		HX_STACK_LINE(127)
		buffer->premultiplied = true;
		HX_STACK_LINE(129)
		::lime::graphics::Image tmp19 = ::lime::graphics::Image_obj::__new(buffer,(int)0,(int)0,width,height,null(),null());		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(129)
		this->image = tmp19;
		HX_STACK_LINE(131)
		bool tmp20 = (fillColor != (int)0);		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(131)
		if ((tmp20)){
			HX_STACK_LINE(133)
			::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(133)
			::lime::graphics::Image tmp22 = this->image;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(133)
			::lime::math::Rectangle tmp23 = tmp22->get_rect();		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(133)
			int tmp24 = fillColor;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(133)
			tmp21->fillRect(tmp23,tmp24,null());
		}
		HX_STACK_LINE(140)
		::lime::graphics::Image tmp21 = this->image;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(140)
		bool tmp22 = transparent;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(140)
		tmp21->set_transparent(tmp22);
		HX_STACK_LINE(141)
		this->__isValid = true;
	}
	HX_STACK_LINE(145)
	this->__createUVs(null(),null(),null(),null(),null(),null(),null(),null());
	HX_STACK_LINE(147)
	::openfl::geom::Matrix tmp7 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(147)
	this->__worldTransform = tmp7;
	HX_STACK_LINE(148)
	::openfl::geom::ColorTransform tmp8 = ::openfl::geom::ColorTransform_obj::__new(null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(148)
	this->__worldColorTransform = tmp8;
}
;
	return null();
}

//BitmapData_obj::~BitmapData_obj() { }

Dynamic BitmapData_obj::__CreateEmpty() { return  new BitmapData_obj; }
hx::ObjectPtr< BitmapData_obj > BitmapData_obj::__new(int width,int height,hx::Null< bool >  __o_transparent,hx::Null< int >  __o_fillColor)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(width,height,__o_transparent,__o_fillColor);
	return _result_;}

Dynamic BitmapData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< BitmapData_obj > _result_ = new BitmapData_obj();
	_result_->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _result_;}

hx::Object *BitmapData_obj::__ToInterface(const hx::type_info &inType) {
	if (inType==typeid( ::openfl::display::IBitmapDrawable_obj)) return operator ::openfl::display::IBitmapDrawable_obj *();
	return super::__ToInterface(inType);
}

BitmapData_obj::operator ::openfl::display::IBitmapDrawable_obj *()
	{ return new ::openfl::display::IBitmapDrawable_delegate_< BitmapData_obj >(this); }
Void BitmapData_obj::applyFilter( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::filters::BitmapFilter filter){
{
		HX_STACK_FRAME("openfl.display.BitmapData","applyFilter",0xfbb98d7b,"openfl.display.BitmapData.applyFilter","openfl/display/BitmapData.hx",153,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(filter,"filter")
		HX_STACK_LINE(155)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(155)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(155)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(155)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(155)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(155)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(155)
		if ((tmp4)){
			HX_STACK_LINE(155)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(155)
			tmp5 = true;
		}
		HX_STACK_LINE(155)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(155)
		bool tmp7;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(155)
		if ((tmp6)){
			HX_STACK_LINE(155)
			bool tmp8 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(155)
			bool tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(155)
			tmp7 = !(tmp9);
		}
		else{
			HX_STACK_LINE(155)
			tmp7 = true;
		}
		HX_STACK_LINE(155)
		if ((tmp7)){
			HX_STACK_LINE(155)
			return null();
		}
		HX_STACK_LINE(168)
		::lime::graphics::Image tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(168)
		tmp8->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC4(BitmapData_obj,applyFilter,(void))

::openfl::display::BitmapData BitmapData_obj::clone( ){
	HX_STACK_FRAME("openfl.display.BitmapData","clone",0xea52db52,"openfl.display.BitmapData.clone","openfl/display/BitmapData.hx",173,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(175)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(175)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(175)
	if ((tmp1)){
		HX_STACK_LINE(177)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(177)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(177)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(177)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::__new(tmp2,tmp3,tmp4,null());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(177)
		return tmp5;
	}
	else{
		HX_STACK_LINE(181)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(181)
		::lime::graphics::Image tmp3 = tmp2->clone();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(181)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(181)
		::openfl::display::BitmapData tmp5 = ::openfl::display::BitmapData_obj::fromImage(tmp3,tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(181)
		return tmp5;
	}
	HX_STACK_LINE(175)
	return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,clone,return )

Void BitmapData_obj::colorTransform( ::openfl::geom::Rectangle rect,::openfl::geom::ColorTransform colorTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","colorTransform",0xbfe3e8f4,"openfl.display.BitmapData.colorTransform","openfl/display/BitmapData.hx",188,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(colorTransform,"colorTransform")
		HX_STACK_LINE(190)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(190)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(190)
		if ((tmp1)){
			HX_STACK_LINE(190)
			return null();
		}
		HX_STACK_LINE(192)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(192)
		::lime::math::Rectangle tmp3 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(192)
		::lime::utils::ArrayBufferView tmp4 = colorTransform->__toLimeColorMatrix();		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(192)
		tmp2->colorTransform(tmp3,tmp4);
		HX_STACK_LINE(193)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,colorTransform,(void))

Dynamic BitmapData_obj::compare( ::openfl::display::BitmapData otherBitmapData){
	HX_STACK_FRAME("openfl.display.BitmapData","compare",0x56d287da,"openfl.display.BitmapData.compare","openfl/display/BitmapData.hx",198,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(otherBitmapData,"otherBitmapData")
	HX_STACK_LINE(200)
	bool tmp = (otherBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(200)
	if ((tmp)){
		HX_STACK_LINE(202)
		return (int)0;
	}
	else{
		HX_STACK_LINE(204)
		bool tmp1 = (otherBitmapData == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(204)
		if ((tmp1)){
			HX_STACK_LINE(206)
			return (int)-1;
		}
		else{
			HX_STACK_LINE(208)
			bool tmp2 = this->__isValid;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(208)
			bool tmp3 = (tmp2 == false);		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(208)
			bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(208)
			bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(208)
			if ((tmp4)){
				HX_STACK_LINE(208)
				tmp5 = (otherBitmapData->__isValid == false);
			}
			else{
				HX_STACK_LINE(208)
				tmp5 = true;
			}
			HX_STACK_LINE(208)
			if ((tmp5)){
				HX_STACK_LINE(210)
				return (int)-2;
			}
			else{
				HX_STACK_LINE(212)
				int tmp6 = this->width;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(212)
				int tmp7 = otherBitmapData->width;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(212)
				bool tmp8 = (tmp6 != tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(212)
				if ((tmp8)){
					HX_STACK_LINE(214)
					return (int)-3;
				}
				else{
					HX_STACK_LINE(216)
					int tmp9 = this->height;		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(216)
					int tmp10 = otherBitmapData->height;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(216)
					bool tmp11 = (tmp9 != tmp10);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(216)
					if ((tmp11)){
						HX_STACK_LINE(218)
						return (int)-4;
					}
				}
			}
		}
	}
	HX_STACK_LINE(222)
	::lime::graphics::Image tmp1 = this->image;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(222)
	bool tmp2 = (tmp1 != null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(222)
	bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(222)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(222)
	if ((tmp3)){
		HX_STACK_LINE(222)
		tmp4 = (otherBitmapData->image != null());
	}
	else{
		HX_STACK_LINE(222)
		tmp4 = false;
	}
	HX_STACK_LINE(222)
	bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(222)
	if ((tmp4)){
		HX_STACK_LINE(222)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(222)
		::lime::graphics::Image tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(222)
		int tmp8 = tmp7->get_format();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(222)
		int tmp9 = tmp8;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(222)
		int tmp10 = otherBitmapData->image->get_format();		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(222)
		int tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(222)
		tmp5 = (tmp9 == tmp11);
	}
	else{
		HX_STACK_LINE(222)
		tmp5 = false;
	}
	HX_STACK_LINE(222)
	if ((tmp5)){
		HX_STACK_LINE(224)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(224)
		::lime::utils::ArrayBufferView tmp7 = tmp6->get_data();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(224)
		::lime::utils::ArrayBufferView bytes = tmp7;		HX_STACK_VAR(bytes,"bytes");
		HX_STACK_LINE(225)
		::lime::utils::ArrayBufferView tmp8 = otherBitmapData->image->get_data();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(225)
		::lime::utils::ArrayBufferView otherBytes = tmp8;		HX_STACK_VAR(otherBytes,"otherBytes");
		HX_STACK_LINE(226)
		bool equal = true;		HX_STACK_VAR(equal,"equal");
		HX_STACK_LINE(228)
		{
			HX_STACK_LINE(228)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(228)
			int tmp9 = bytes->length;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(228)
			int _g = tmp9;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(228)
			while((true)){
				HX_STACK_LINE(228)
				bool tmp10 = (_g1 < _g);		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(228)
				bool tmp11 = !(tmp10);		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(228)
				if ((tmp11)){
					HX_STACK_LINE(228)
					break;
				}
				HX_STACK_LINE(228)
				int tmp12 = (_g1)++;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(228)
				int i = tmp12;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(230)
				bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(230)
				{
					HX_STACK_LINE(230)
					int tmp14 = ::__hxcpp_memory_get_byte(bytes->buffer->b,(bytes->byteOffset + i));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(230)
					Dynamic tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(230)
					int a = tmp15;		HX_STACK_VAR(a,"a");
					HX_STACK_LINE(230)
					int tmp16 = ::__hxcpp_memory_get_byte(otherBytes->buffer->b,(otherBytes->byteOffset + i));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(230)
					Dynamic tmp17 = (int(tmp16) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(230)
					Dynamic b = tmp17;		HX_STACK_VAR(b,"b");
					HX_STACK_LINE(230)
					tmp13 = (a != b);
				}
				HX_STACK_LINE(230)
				if ((tmp13)){
					HX_STACK_LINE(232)
					equal = false;
					HX_STACK_LINE(233)
					break;
				}
			}
		}
		HX_STACK_LINE(238)
		bool tmp9 = equal;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(238)
		if ((tmp9)){
			HX_STACK_LINE(240)
			return (int)0;
		}
	}
	HX_STACK_LINE(246)
	::openfl::display::BitmapData bitmapData = null();		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(247)
	bool foundDifference;		HX_STACK_VAR(foundDifference,"foundDifference");
	HX_STACK_LINE(247)
	int pixel;		HX_STACK_VAR(pixel,"pixel");
	HX_STACK_LINE(247)
	int otherPixel;		HX_STACK_VAR(otherPixel,"otherPixel");
	HX_STACK_LINE(247)
	int comparePixel;		HX_STACK_VAR(comparePixel,"comparePixel");
	HX_STACK_LINE(247)
	int r;		HX_STACK_VAR(r,"r");
	HX_STACK_LINE(247)
	int g;		HX_STACK_VAR(g,"g");
	HX_STACK_LINE(247)
	int b;		HX_STACK_VAR(b,"b");
	HX_STACK_LINE(247)
	int a;		HX_STACK_VAR(a,"a");
	HX_STACK_LINE(249)
	{
		HX_STACK_LINE(249)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(249)
		int tmp6 = this->height;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(249)
		int _g = tmp6;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(249)
		while((true)){
			HX_STACK_LINE(249)
			bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(249)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(249)
			if ((tmp8)){
				HX_STACK_LINE(249)
				break;
			}
			HX_STACK_LINE(249)
			int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(249)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(251)
			{
				HX_STACK_LINE(251)
				int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
				HX_STACK_LINE(251)
				int tmp10 = this->width;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(251)
				int _g2 = tmp10;		HX_STACK_VAR(_g2,"_g2");
				HX_STACK_LINE(251)
				while((true)){
					HX_STACK_LINE(251)
					bool tmp11 = (_g3 < _g2);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(251)
					bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(251)
					if ((tmp12)){
						HX_STACK_LINE(251)
						break;
					}
					HX_STACK_LINE(251)
					int tmp13 = (_g3)++;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(251)
					int x = tmp13;		HX_STACK_VAR(x,"x");
					HX_STACK_LINE(253)
					foundDifference = false;
					HX_STACK_LINE(255)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(255)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(255)
					int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(255)
					pixel = tmp16;
					HX_STACK_LINE(256)
					int tmp17 = x;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(256)
					int tmp18 = y;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(256)
					int tmp19 = otherBitmapData->getPixel32(tmp17,tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(256)
					otherPixel = tmp19;
					HX_STACK_LINE(257)
					comparePixel = (int)0;
					HX_STACK_LINE(259)
					bool tmp20 = (pixel != otherPixel);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(259)
					if ((tmp20)){
						HX_STACK_LINE(261)
						int tmp21 = (int(pixel) >> int((int)16));		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(261)
						int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(261)
						int tmp23 = (int(otherPixel) >> int((int)16));		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(261)
						int tmp24 = (int(tmp23) & int((int)255));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(261)
						int tmp25 = (tmp22 - tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(261)
						r = tmp25;
						HX_STACK_LINE(262)
						int tmp26 = (int(pixel) >> int((int)8));		HX_STACK_VAR(tmp26,"tmp26");
						HX_STACK_LINE(262)
						int tmp27 = (int(tmp26) & int((int)255));		HX_STACK_VAR(tmp27,"tmp27");
						HX_STACK_LINE(262)
						int tmp28 = (int(otherPixel) >> int((int)8));		HX_STACK_VAR(tmp28,"tmp28");
						HX_STACK_LINE(262)
						int tmp29 = (int(tmp28) & int((int)255));		HX_STACK_VAR(tmp29,"tmp29");
						HX_STACK_LINE(262)
						int tmp30 = (tmp27 - tmp29);		HX_STACK_VAR(tmp30,"tmp30");
						HX_STACK_LINE(262)
						g = tmp30;
						HX_STACK_LINE(263)
						int tmp31 = (int(pixel) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
						HX_STACK_LINE(263)
						int tmp32 = (int(otherPixel) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
						HX_STACK_LINE(263)
						int tmp33 = (tmp31 - tmp32);		HX_STACK_VAR(tmp33,"tmp33");
						HX_STACK_LINE(263)
						b = tmp33;
						HX_STACK_LINE(265)
						bool tmp34 = (r < (int)0);		HX_STACK_VAR(tmp34,"tmp34");
						HX_STACK_LINE(265)
						if ((tmp34)){
							HX_STACK_LINE(265)
							hx::MultEq(r,(int)-1);
						}
						HX_STACK_LINE(266)
						bool tmp35 = (g < (int)0);		HX_STACK_VAR(tmp35,"tmp35");
						HX_STACK_LINE(266)
						if ((tmp35)){
							HX_STACK_LINE(266)
							hx::MultEq(g,(int)-1);
						}
						HX_STACK_LINE(267)
						bool tmp36 = (b < (int)0);		HX_STACK_VAR(tmp36,"tmp36");
						HX_STACK_LINE(267)
						if ((tmp36)){
							HX_STACK_LINE(267)
							hx::MultEq(b,(int)-1);
						}
						HX_STACK_LINE(269)
						bool tmp37 = (r == (int)0);		HX_STACK_VAR(tmp37,"tmp37");
						HX_STACK_LINE(269)
						bool tmp38 = tmp37;		HX_STACK_VAR(tmp38,"tmp38");
						HX_STACK_LINE(269)
						bool tmp39;		HX_STACK_VAR(tmp39,"tmp39");
						HX_STACK_LINE(269)
						if ((tmp38)){
							HX_STACK_LINE(269)
							tmp39 = (g == (int)0);
						}
						else{
							HX_STACK_LINE(269)
							tmp39 = false;
						}
						HX_STACK_LINE(269)
						bool tmp40;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(269)
						if ((tmp39)){
							HX_STACK_LINE(269)
							tmp40 = (b == (int)0);
						}
						else{
							HX_STACK_LINE(269)
							tmp40 = false;
						}
						HX_STACK_LINE(269)
						if ((tmp40)){
							HX_STACK_LINE(271)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(271)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(271)
							int tmp43 = (int(otherPixel) >> int((int)24));		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(271)
							int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(271)
							int tmp45 = (tmp42 - tmp44);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(271)
							a = tmp45;
							HX_STACK_LINE(273)
							bool tmp46 = (a != (int)0);		HX_STACK_VAR(tmp46,"tmp46");
							HX_STACK_LINE(273)
							if ((tmp46)){
								HX_STACK_LINE(275)
								{
									HX_STACK_LINE(275)
									{
										HX_STACK_LINE(275)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(275)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(275)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(275)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(275)
										int tmp51 = (int)255;		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(275)
										int tmp52 = (int(tmp51) << int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(275)
										int tmp53 = (int(tmp50) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(275)
										int tmp54 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(275)
										int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(275)
										int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(275)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(275)
										int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(275)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(275)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(275)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(275)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(275)
									(int)255;
								}
								HX_STACK_LINE(276)
								{
									HX_STACK_LINE(276)
									{
										HX_STACK_LINE(276)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(276)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(276)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(276)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(276)
										int tmp51 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(276)
										int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(276)
										int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(276)
										int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(276)
										int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(276)
										int tmp56 = (int)255;		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(276)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(276)
										int tmp58 = (int(tmp55) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(276)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(276)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(276)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(276)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(276)
									(int)255;
								}
								HX_STACK_LINE(277)
								{
									HX_STACK_LINE(277)
									{
										HX_STACK_LINE(277)
										int tmp47 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(277)
										int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(277)
										int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(277)
										int tmp50 = (int(tmp49) << int((int)24));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(277)
										int tmp51 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(277)
										int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(277)
										int tmp53 = (int(tmp52) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(277)
										int tmp54 = (int(tmp53) << int((int)16));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(277)
										int tmp55 = (int(tmp50) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(277)
										int tmp56 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(277)
										int tmp57 = (int(tmp56) & int((int)255));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(277)
										int tmp58 = (int(tmp57) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(277)
										int tmp59 = (int(tmp58) << int((int)8));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(277)
										int tmp60 = (int(tmp55) | int(tmp59));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(277)
										int tmp61 = (int)255;		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(277)
										int tmp62 = (int(tmp60) | int(tmp61));		HX_STACK_VAR(tmp62,"tmp62");
										HX_STACK_LINE(277)
										comparePixel = tmp62;
									}
									HX_STACK_LINE(277)
									(int)255;
								}
								HX_STACK_LINE(278)
								{
									HX_STACK_LINE(278)
									{
										HX_STACK_LINE(278)
										int tmp47 = (int(a) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
										HX_STACK_LINE(278)
										int tmp48 = (int(tmp47) << int((int)24));		HX_STACK_VAR(tmp48,"tmp48");
										HX_STACK_LINE(278)
										int tmp49 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp49,"tmp49");
										HX_STACK_LINE(278)
										int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
										HX_STACK_LINE(278)
										int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
										HX_STACK_LINE(278)
										int tmp52 = (int(tmp51) << int((int)16));		HX_STACK_VAR(tmp52,"tmp52");
										HX_STACK_LINE(278)
										int tmp53 = (int(tmp48) | int(tmp52));		HX_STACK_VAR(tmp53,"tmp53");
										HX_STACK_LINE(278)
										int tmp54 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp54,"tmp54");
										HX_STACK_LINE(278)
										int tmp55 = (int(tmp54) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(278)
										int tmp56 = (int(tmp55) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
										HX_STACK_LINE(278)
										int tmp57 = (int(tmp56) << int((int)8));		HX_STACK_VAR(tmp57,"tmp57");
										HX_STACK_LINE(278)
										int tmp58 = (int(tmp53) | int(tmp57));		HX_STACK_VAR(tmp58,"tmp58");
										HX_STACK_LINE(278)
										int tmp59 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp59,"tmp59");
										HX_STACK_LINE(278)
										int tmp60 = (int(tmp59) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
										HX_STACK_LINE(278)
										int tmp61 = (int(tmp58) | int(tmp60));		HX_STACK_VAR(tmp61,"tmp61");
										HX_STACK_LINE(278)
										comparePixel = tmp61;
									}
									HX_STACK_LINE(278)
									a;
								}
								HX_STACK_LINE(280)
								foundDifference = true;
							}
						}
						else{
							HX_STACK_LINE(286)
							{
								HX_STACK_LINE(286)
								{
									HX_STACK_LINE(286)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(286)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(286)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(286)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(286)
									int tmp45 = (int(r) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(286)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(286)
									int tmp47 = (int(tmp44) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(286)
									int tmp48 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(286)
									int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(286)
									int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(286)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(286)
									int tmp52 = (int(tmp47) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(286)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(286)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(286)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(286)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(286)
								r;
							}
							HX_STACK_LINE(287)
							{
								HX_STACK_LINE(287)
								{
									HX_STACK_LINE(287)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(287)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(287)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(287)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(287)
									int tmp45 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(287)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(287)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(287)
									int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(287)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(287)
									int tmp50 = (int(g) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(287)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(287)
									int tmp52 = (int(tmp49) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(287)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(287)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(287)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(287)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(287)
								g;
							}
							HX_STACK_LINE(288)
							{
								HX_STACK_LINE(288)
								{
									HX_STACK_LINE(288)
									int tmp41 = (int(comparePixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(288)
									int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(288)
									int tmp43 = (int(tmp42) & int((int)255));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(288)
									int tmp44 = (int(tmp43) << int((int)24));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(288)
									int tmp45 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(288)
									int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(288)
									int tmp47 = (int(tmp46) & int((int)255));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(288)
									int tmp48 = (int(tmp47) << int((int)16));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(288)
									int tmp49 = (int(tmp44) | int(tmp48));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(288)
									int tmp50 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(288)
									int tmp51 = (int(tmp50) & int((int)255));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(288)
									int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(288)
									int tmp53 = (int(tmp52) << int((int)8));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(288)
									int tmp54 = (int(tmp49) | int(tmp53));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(288)
									int tmp55 = (int(b) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(288)
									int tmp56 = (int(tmp54) | int(tmp55));		HX_STACK_VAR(tmp56,"tmp56");
									HX_STACK_LINE(288)
									comparePixel = tmp56;
								}
								HX_STACK_LINE(288)
								b;
							}
							HX_STACK_LINE(289)
							{
								HX_STACK_LINE(289)
								{
									HX_STACK_LINE(289)
									int tmp41 = (int)255;		HX_STACK_VAR(tmp41,"tmp41");
									HX_STACK_LINE(289)
									int tmp42 = (int(tmp41) << int((int)24));		HX_STACK_VAR(tmp42,"tmp42");
									HX_STACK_LINE(289)
									int tmp43 = (int(comparePixel) >> int((int)16));		HX_STACK_VAR(tmp43,"tmp43");
									HX_STACK_LINE(289)
									int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
									HX_STACK_LINE(289)
									int tmp45 = (int(tmp44) & int((int)255));		HX_STACK_VAR(tmp45,"tmp45");
									HX_STACK_LINE(289)
									int tmp46 = (int(tmp45) << int((int)16));		HX_STACK_VAR(tmp46,"tmp46");
									HX_STACK_LINE(289)
									int tmp47 = (int(tmp42) | int(tmp46));		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(289)
									int tmp48 = (int(comparePixel) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(289)
									int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
									HX_STACK_LINE(289)
									int tmp50 = (int(tmp49) & int((int)255));		HX_STACK_VAR(tmp50,"tmp50");
									HX_STACK_LINE(289)
									int tmp51 = (int(tmp50) << int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
									HX_STACK_LINE(289)
									int tmp52 = (int(tmp47) | int(tmp51));		HX_STACK_VAR(tmp52,"tmp52");
									HX_STACK_LINE(289)
									int tmp53 = (int(comparePixel) & int((int)255));		HX_STACK_VAR(tmp53,"tmp53");
									HX_STACK_LINE(289)
									int tmp54 = (int(tmp53) & int((int)255));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(289)
									int tmp55 = (int(tmp52) | int(tmp54));		HX_STACK_VAR(tmp55,"tmp55");
									HX_STACK_LINE(289)
									comparePixel = tmp55;
								}
								HX_STACK_LINE(289)
								(int)255;
							}
							HX_STACK_LINE(291)
							foundDifference = true;
						}
					}
					HX_STACK_LINE(297)
					bool tmp21 = foundDifference;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(297)
					if ((tmp21)){
						HX_STACK_LINE(299)
						bool tmp22 = (bitmapData == null());		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(299)
						if ((tmp22)){
							HX_STACK_LINE(301)
							int tmp23 = this->width;		HX_STACK_VAR(tmp23,"tmp23");
							HX_STACK_LINE(301)
							int tmp24 = this->height;		HX_STACK_VAR(tmp24,"tmp24");
							HX_STACK_LINE(301)
							bool tmp25 = this->transparent;		HX_STACK_VAR(tmp25,"tmp25");
							HX_STACK_LINE(301)
							bool tmp26 = !(tmp25);		HX_STACK_VAR(tmp26,"tmp26");
							HX_STACK_LINE(301)
							bool tmp27;		HX_STACK_VAR(tmp27,"tmp27");
							HX_STACK_LINE(301)
							if ((tmp26)){
								HX_STACK_LINE(301)
								tmp27 = otherBitmapData->transparent;
							}
							else{
								HX_STACK_LINE(301)
								tmp27 = true;
							}
							HX_STACK_LINE(301)
							::openfl::display::BitmapData tmp28 = ::openfl::display::BitmapData_obj::__new(tmp23,tmp24,tmp27,(int)0);		HX_STACK_VAR(tmp28,"tmp28");
							HX_STACK_LINE(301)
							bitmapData = tmp28;
						}
						HX_STACK_LINE(305)
						int tmp23 = x;		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(305)
						int tmp24 = y;		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(305)
						int tmp25 = comparePixel;		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(305)
						bitmapData->setPixel32(tmp23,tmp24,tmp25);
					}
				}
			}
		}
	}
	HX_STACK_LINE(313)
	bool tmp6 = (bitmapData == null());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(313)
	if ((tmp6)){
		HX_STACK_LINE(315)
		return (int)0;
	}
	HX_STACK_LINE(319)
	::openfl::display::BitmapData tmp7 = bitmapData;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(319)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,compare,return )

Void BitmapData_obj::copyChannel( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int sourceChannel,int destChannel){
{
		HX_STACK_FRAME("openfl.display.BitmapData","copyChannel",0x5d702b43,"openfl.display.BitmapData.copyChannel","openfl/display/BitmapData.hx",324,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(sourceChannel,"sourceChannel")
		HX_STACK_ARG(destChannel,"destChannel")
		HX_STACK_LINE(326)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(326)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(326)
		if ((tmp1)){
			HX_STACK_LINE(326)
			return null();
		}
		HX_STACK_LINE(328)
		int tmp2 = sourceChannel;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(328)
		::lime::graphics::ImageChannel tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(328)
		switch( (int)(tmp2)){
			case (int)1: {
				HX_STACK_LINE(330)
				tmp3 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(331)
				tmp3 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(332)
				tmp3 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(333)
				tmp3 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(334)
				return null();
			}
		}
		HX_STACK_LINE(328)
		::lime::graphics::ImageChannel sourceChannel1 = tmp3;		HX_STACK_VAR(sourceChannel1,"sourceChannel1");
		HX_STACK_LINE(338)
		int tmp4 = destChannel;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(338)
		::lime::graphics::ImageChannel tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(338)
		switch( (int)(tmp4)){
			case (int)1: {
				HX_STACK_LINE(340)
				tmp5 = ::lime::graphics::ImageChannel_obj::RED;
			}
			;break;
			case (int)2: {
				HX_STACK_LINE(341)
				tmp5 = ::lime::graphics::ImageChannel_obj::GREEN;
			}
			;break;
			case (int)4: {
				HX_STACK_LINE(342)
				tmp5 = ::lime::graphics::ImageChannel_obj::BLUE;
			}
			;break;
			case (int)8: {
				HX_STACK_LINE(343)
				tmp5 = ::lime::graphics::ImageChannel_obj::ALPHA;
			}
			;break;
			default: {
				HX_STACK_LINE(344)
				return null();
			}
		}
		HX_STACK_LINE(338)
		::lime::graphics::ImageChannel destChannel1 = tmp5;		HX_STACK_VAR(destChannel1,"destChannel1");
		HX_STACK_LINE(348)
		::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(348)
		::lime::graphics::Image tmp7 = sourceBitmapData->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(348)
		::lime::math::Rectangle tmp8 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(348)
		::lime::math::Vector2 tmp9 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(348)
		::lime::graphics::ImageChannel tmp10 = sourceChannel1;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(348)
		::lime::graphics::ImageChannel tmp11 = destChannel1;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(348)
		tmp6->copyChannel(tmp7,tmp8,tmp9,tmp10,tmp11);
		HX_STACK_LINE(349)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,copyChannel,(void))

Void BitmapData_obj::copyPixels( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::openfl::display::BitmapData alphaBitmapData,::openfl::geom::Point alphaPoint,hx::Null< bool >  __o_mergeAlpha){
bool mergeAlpha = __o_mergeAlpha.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","copyPixels",0x385c94ad,"openfl.display.BitmapData.copyPixels","openfl/display/BitmapData.hx",354,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(alphaBitmapData,"alphaBitmapData")
	HX_STACK_ARG(alphaPoint,"alphaPoint")
	HX_STACK_ARG(mergeAlpha,"mergeAlpha")
{
		HX_STACK_LINE(356)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(356)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(356)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(356)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(356)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(356)
		if ((tmp3)){
			HX_STACK_LINE(356)
			tmp4 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(356)
			tmp4 = true;
		}
		HX_STACK_LINE(356)
		if ((tmp4)){
			HX_STACK_LINE(356)
			return null();
		}
		HX_STACK_LINE(358)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(358)
		::lime::graphics::Image tmp6 = sourceBitmapData->image;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(358)
		::lime::math::Rectangle tmp7 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(358)
		::lime::math::Vector2 tmp8 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(358)
		bool tmp9 = (alphaBitmapData != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(358)
		::lime::graphics::Image tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(358)
		if ((tmp9)){
			HX_STACK_LINE(358)
			tmp10 = alphaBitmapData->image;
		}
		else{
			HX_STACK_LINE(358)
			tmp10 = null();
		}
		HX_STACK_LINE(358)
		bool tmp11 = (alphaPoint != null());		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(358)
		::lime::math::Vector2 tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(358)
		if ((tmp11)){
			HX_STACK_LINE(358)
			tmp12 = alphaPoint->__toLimeVector2();
		}
		else{
			HX_STACK_LINE(358)
			tmp12 = null();
		}
		HX_STACK_LINE(358)
		bool tmp13 = mergeAlpha;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(358)
		tmp5->copyPixels(tmp6,tmp7,tmp8,tmp10,tmp12,tmp13);
		HX_STACK_LINE(359)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,copyPixels,(void))

Void BitmapData_obj::dispose( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","dispose",0x8eb5efd4,"openfl.display.BitmapData.dispose","openfl/display/BitmapData.hx",364,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_LINE(366)
		this->image = null();
		HX_STACK_LINE(368)
		this->width = (int)0;
		HX_STACK_LINE(369)
		this->height = (int)0;
		HX_STACK_LINE(370)
		this->rect = null();
		HX_STACK_LINE(371)
		this->__isValid = false;
		HX_STACK_LINE(373)
		::lime::graphics::opengl::GLTexture tmp = this->__texture;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(373)
		bool tmp1 = (tmp != null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(373)
		if ((tmp1)){
			HX_STACK_LINE(375)
			::openfl::display::MovieClip tmp2 = ::openfl::Lib_obj::current;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(375)
			::openfl::_internal::renderer::AbstractRenderer tmp3 = tmp2->stage->__renderer;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(375)
			::openfl::_internal::renderer::AbstractRenderer renderer = tmp3;		HX_STACK_VAR(renderer,"renderer");
			HX_STACK_LINE(377)
			bool tmp4 = (renderer != null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(377)
			if ((tmp4)){
				HX_STACK_LINE(379)
				::openfl::_internal::renderer::RenderSession renderSession = renderer->renderSession;		HX_STACK_VAR(renderSession,"renderSession");
				HX_STACK_LINE(380)
				::lime::graphics::GLRenderContext gl = renderSession->gl;		HX_STACK_VAR(gl,"gl");
				HX_STACK_LINE(382)
				bool tmp5 = (gl != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(382)
				if ((tmp5)){
					HX_STACK_LINE(384)
					{
						HX_STACK_LINE(384)
						::lime::graphics::opengl::GLTexture tmp6 = this->__texture;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(384)
						::lime::graphics::opengl::GLTexture texture = tmp6;		HX_STACK_VAR(texture,"texture");
						HX_STACK_LINE(384)
						{
							HX_STACK_LINE(384)
							{
								HX_STACK_LINE(384)
								int texture1 = texture->id;		HX_STACK_VAR(texture1,"texture1");
								HX_STACK_LINE(384)
								::lime::graphics::opengl::GL_obj::cffi_lime_gl_delete_texture.call(texture1);
							}
							HX_STACK_LINE(384)
							texture->invalidate();
						}
					}
					HX_STACK_LINE(385)
					this->__texture = null();
				}
			}
		}
		HX_STACK_LINE(393)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp2 = this->__pingPongTexture;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(393)
		bool tmp3 = (tmp2 != null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(393)
		if ((tmp3)){
			HX_STACK_LINE(395)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp4 = this->__pingPongTexture;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(395)
			tmp4->destroy();
			HX_STACK_LINE(396)
			this->__pingPongTexture = null();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,dispose,(void))

Void BitmapData_obj::draw( ::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","draw",0xf1a859af,"openfl.display.BitmapData.draw","openfl/display/BitmapData.hx",403,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
{
		HX_STACK_LINE(405)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(405)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(405)
		if ((tmp1)){
			HX_STACK_LINE(405)
			return null();
		}
		HX_STACK_LINE(475)
		bool tmp2 = (colorTransform != null());		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(475)
		if ((tmp2)){
			HX_STACK_LINE(477)
			::openfl::display::IBitmapDrawable tmp3 = source;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(477)
			Dynamic tmp4 = ::Reflect_obj::getProperty(tmp3,HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(477)
			::openfl::display::IBitmapDrawable tmp5 = source;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(477)
			Dynamic tmp6 = ::Reflect_obj::getProperty(tmp5,HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(477)
			::openfl::display::BitmapData tmp7 = ::openfl::display::BitmapData_obj::__new(tmp4,tmp6,true,(int)0);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(477)
			::openfl::display::BitmapData copy = tmp7;		HX_STACK_VAR(copy,"copy");
			HX_STACK_LINE(478)
			::openfl::display::IBitmapDrawable tmp8 = source;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(478)
			copy->draw(tmp8,null(),null(),null(),null(),null());
			HX_STACK_LINE(479)
			::openfl::geom::Rectangle tmp9 = copy->rect;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(479)
			::openfl::geom::ColorTransform tmp10 = colorTransform;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(479)
			copy->colorTransform(tmp9,tmp10);
			HX_STACK_LINE(480)
			source = copy;
		}
		HX_STACK_LINE(487)
		Dynamic tmp3 = this->getSurface();		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(487)
		Dynamic surface = tmp3;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(488)
		::lime::graphics::cairo::Cairo tmp4 = ::lime::graphics::cairo::Cairo_obj::__new(surface);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(488)
		::lime::graphics::cairo::Cairo cairo = tmp4;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(490)
		bool tmp5 = smoothing;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(490)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(490)
		if ((tmp6)){
			HX_STACK_LINE(492)
			cairo->set_antialias((int)1);
		}
		HX_STACK_LINE(496)
		::openfl::_internal::renderer::RenderSession tmp7 = ::openfl::_internal::renderer::RenderSession_obj::__new();		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(496)
		::openfl::_internal::renderer::RenderSession renderSession = tmp7;		HX_STACK_VAR(renderSession,"renderSession");
		HX_STACK_LINE(497)
		renderSession->cairo = cairo;
		HX_STACK_LINE(498)
		renderSession->roundPixels = true;
		HX_STACK_LINE(499)
		::openfl::_internal::renderer::cairo::CairoMaskManager tmp8 = ::openfl::_internal::renderer::cairo::CairoMaskManager_obj::__new(renderSession);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(499)
		renderSession->maskManager = tmp8;
		HX_STACK_LINE(501)
		bool tmp9 = (clipRect != null());		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(501)
		if ((tmp9)){
			HX_STACK_LINE(503)
			::openfl::geom::Rectangle tmp10 = clipRect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(503)
			::openfl::geom::Matrix tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(503)
			renderSession->maskManager->pushRect(tmp10,tmp11);
		}
		HX_STACK_LINE(507)
		::openfl::geom::Matrix matrixCache = source->__Field(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"), hx::paccDynamic );		HX_STACK_VAR(matrixCache,"matrixCache");
		HX_STACK_LINE(508)
		bool tmp10 = (matrix != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(508)
		::openfl::geom::Matrix tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(508)
		if ((tmp10)){
			HX_STACK_LINE(508)
			tmp11 = matrix;
		}
		else{
			HX_STACK_LINE(508)
			tmp11 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(508)
		source->__updateTransforms(tmp11);
		HX_STACK_LINE(509)
		source->__updateChildren(false);
		HX_STACK_LINE(510)
		::openfl::_internal::renderer::RenderSession tmp12 = renderSession;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(510)
		source->__renderCairo(tmp12);
		HX_STACK_LINE(511)
		::openfl::geom::Matrix tmp13 = matrixCache;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(511)
		source->__updateTransforms(tmp13);
		HX_STACK_LINE(512)
		source->__updateChildren(true);
		HX_STACK_LINE(514)
		bool tmp14 = (clipRect != null());		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(514)
		if ((tmp14)){
			HX_STACK_LINE(516)
			renderSession->maskManager->popMask();
		}
		HX_STACK_LINE(520)
		Dynamic tmp15 = surface;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(520)
		::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp15);
		HX_STACK_LINE(522)
		::lime::graphics::Image tmp16 = this->image;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(522)
		tmp16->dirty = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC6(BitmapData_obj,draw,(void))

::openfl::utils::ByteArrayData BitmapData_obj::encode( ::openfl::geom::Rectangle rect,Dynamic compressor,::openfl::utils::ByteArrayData byteArray){
	HX_STACK_FRAME("openfl.display.BitmapData","encode",0x09c32081,"openfl.display.BitmapData.encode","openfl/display/BitmapData.hx",529,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_ARG(compressor,"compressor")
	HX_STACK_ARG(byteArray,"byteArray")
	HX_STACK_LINE(533)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(533)
	bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(533)
	bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(533)
	bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(533)
	bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(533)
	if ((tmp3)){
		HX_STACK_LINE(533)
		tmp4 = (rect == null());
	}
	else{
		HX_STACK_LINE(533)
		tmp4 = true;
	}
	HX_STACK_LINE(533)
	if ((tmp4)){
		HX_STACK_LINE(533)
		::openfl::utils::ByteArrayData tmp5 = byteArray = null();		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(533)
		return tmp5;
	}
	HX_STACK_LINE(535)
	Dynamic tmp5 = compressor;		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(535)
	bool tmp6 = ::Std_obj::is(tmp5,hx::ClassOf< ::openfl::display::PNGEncoderOptions >());		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(535)
	if ((tmp6)){
		HX_STACK_LINE(537)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(537)
		::haxe::io::Bytes tmp8 = tmp7->encode(HX_HCSTRING("png","\xa9","\x5c","\x55","\x00"),null());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(537)
		::openfl::utils::ByteArrayData tmp9 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(537)
		::openfl::utils::ByteArrayData tmp10 = byteArray = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(537)
		return tmp10;
	}
	else{
		HX_STACK_LINE(539)
		Dynamic tmp7 = compressor;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(539)
		bool tmp8 = ::Std_obj::is(tmp7,hx::ClassOf< ::openfl::display::JPEGEncoderOptions >());		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(539)
		if ((tmp8)){
			HX_STACK_LINE(541)
			::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(541)
			::openfl::display::JPEGEncoderOptions tmp10;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(541)
			tmp10 = hx::TCast< ::openfl::display::JPEGEncoderOptions >::cast(compressor);
			HX_STACK_LINE(541)
			int tmp11 = tmp10->quality;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(541)
			::haxe::io::Bytes tmp12 = tmp9->encode(HX_HCSTRING("jpg","\xe1","\xd0","\x50","\x00"),tmp11);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(541)
			::openfl::utils::ByteArrayData tmp13 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(541)
			::openfl::utils::ByteArrayData tmp14 = byteArray = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(541)
			return tmp14;
		}
	}
	HX_STACK_LINE(545)
	::openfl::utils::ByteArrayData tmp7 = byteArray = null();		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(545)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,encode,return )

Void BitmapData_obj::fillRect( ::openfl::geom::Rectangle rect,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","fillRect",0x95912472,"openfl.display.BitmapData.fillRect","openfl/display/BitmapData.hx",550,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(552)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(552)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(552)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(552)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(552)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(552)
		if ((tmp3)){
			HX_STACK_LINE(552)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(552)
			tmp4 = true;
		}
		HX_STACK_LINE(552)
		if ((tmp4)){
			HX_STACK_LINE(552)
			return null();
		}
		HX_STACK_LINE(554)
		bool tmp5 = this->transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(554)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(554)
		if ((tmp5)){
			HX_STACK_LINE(554)
			int tmp7 = (int(color) & int((int)-16777216));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(554)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(554)
			tmp6 = (tmp8 == (int)0);
		}
		else{
			HX_STACK_LINE(554)
			tmp6 = false;
		}
		HX_STACK_LINE(554)
		if ((tmp6)){
			HX_STACK_LINE(556)
			color = (int)0;
		}
		HX_STACK_LINE(560)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(560)
		::lime::math::Rectangle tmp8 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(560)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(560)
		tmp7->fillRect(tmp8,tmp9,(int)1);
		HX_STACK_LINE(561)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fillRect,(void))

Void BitmapData_obj::floodFill( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","floodFill",0xed95e9d6,"openfl.display.BitmapData.floodFill","openfl/display/BitmapData.hx",566,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(568)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(568)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(568)
		if ((tmp1)){
			HX_STACK_LINE(568)
			return null();
		}
		HX_STACK_LINE(569)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(569)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(569)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(569)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(569)
		tmp2->floodFill(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(570)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,floodFill,(void))

::openfl::geom::Rectangle BitmapData_obj::generateFilterRect( ::openfl::geom::Rectangle sourceRect,::openfl::filters::BitmapFilter filter){
	HX_STACK_FRAME("openfl.display.BitmapData","generateFilterRect",0x1ef8cf7c,"openfl.display.BitmapData.generateFilterRect","openfl/display/BitmapData.hx",628,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(filter,"filter")
	HX_STACK_LINE(630)
	::openfl::geom::Rectangle tmp = sourceRect->clone();		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(630)
	return tmp;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,generateFilterRect,return )

::lime::graphics::opengl::GLBuffer BitmapData_obj::getBuffer( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getBuffer",0xe0f6acab,"openfl.display.BitmapData.getBuffer","openfl/display/BitmapData.hx",635,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(637)
	::lime::graphics::opengl::GLBuffer tmp = this->__buffer;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(637)
	bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(637)
	if ((tmp1)){
		HX_STACK_LINE(641)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(641)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(642)
		int tmp4 = this->height;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(643)
		int tmp5 = this->width;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(639)
		Array< int > data = Array_obj< int >::__new().Add(tmp2).Add(tmp3).Add((int)0).Add((int)1).Add((int)1).Add((int)0).Add(tmp4).Add((int)0).Add((int)0).Add((int)1).Add(tmp5).Add((int)0).Add((int)0).Add((int)1).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0).Add((int)0);		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(648)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(648)
		::lime::graphics::opengl::GLBuffer tmp7 = ::lime::graphics::opengl::GLBuffer_obj::__new(tmp6,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_buffer.call());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(648)
		this->__buffer = tmp7;
		HX_STACK_LINE(649)
		{
			HX_STACK_LINE(649)
			::lime::graphics::opengl::GLBuffer tmp8 = this->__buffer;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(649)
			::lime::graphics::opengl::GLBuffer buffer = tmp8;		HX_STACK_VAR(buffer,"buffer");
			HX_STACK_LINE(649)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(  (((buffer == null()))) ? int((int)0) : int(buffer->id) ));
		}
		HX_STACK_LINE(650)
		{
			HX_STACK_LINE(650)
			::lime::utils::ArrayBufferView tmp8;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(650)
			{
				HX_STACK_LINE(650)
				::lime::utils::ArrayBufferView this1;		HX_STACK_VAR(this1,"this1");
				HX_STACK_LINE(650)
				bool tmp9 = (data != null());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(650)
				if ((tmp9)){
					HX_STACK_LINE(650)
					::lime::utils::ArrayBufferView tmp10;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(650)
					{
						HX_STACK_LINE(650)
						::lime::utils::ArrayBufferView tmp11 = ::lime::utils::ArrayBufferView_obj::__new((int)0,(int)8);		HX_STACK_VAR(tmp11,"tmp11");
						HX_STACK_LINE(650)
						::lime::utils::ArrayBufferView _this = tmp11;		HX_STACK_VAR(_this,"_this");
						HX_STACK_LINE(650)
						_this->byteOffset = (int)0;
						HX_STACK_LINE(650)
						_this->length = data->length;
						HX_STACK_LINE(650)
						int tmp12 = (_this->length * _this->bytesPerElement);		HX_STACK_VAR(tmp12,"tmp12");
						HX_STACK_LINE(650)
						_this->byteLength = tmp12;
						HX_STACK_LINE(650)
						::haxe::io::Bytes tmp13;		HX_STACK_VAR(tmp13,"tmp13");
						HX_STACK_LINE(650)
						{
							HX_STACK_LINE(650)
							::haxe::io::Bytes this2;		HX_STACK_VAR(this2,"this2");
							HX_STACK_LINE(650)
							int tmp14 = _this->byteLength;		HX_STACK_VAR(tmp14,"tmp14");
							HX_STACK_LINE(650)
							::haxe::io::Bytes tmp15 = ::haxe::io::Bytes_obj::alloc(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
							HX_STACK_LINE(650)
							this2 = tmp15;
							HX_STACK_LINE(650)
							tmp13 = this2;
						}
						HX_STACK_LINE(650)
						_this->buffer = tmp13;
						HX_STACK_LINE(650)
						_this->copyFromArray(((Array< Float >)(data)),null());
						HX_STACK_LINE(650)
						tmp10 = _this;
					}
					HX_STACK_LINE(650)
					this1 = tmp10;
				}
				else{
					HX_STACK_LINE(650)
					HX_STACK_DO_THROW(HX_HCSTRING("Invalid constructor arguments for Float32Array","\x8e","\xc1","\xf4","\xd4"));
				}
				HX_STACK_LINE(650)
				tmp8 = this1;
			}
			HX_STACK_LINE(650)
			::lime::utils::ArrayBufferView data1 = tmp8;		HX_STACK_VAR(data1,"data1");
			HX_STACK_LINE(650)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_buffer_data.call(gl->ARRAY_BUFFER,hx::DynamicPtr(data1->buffer),data1->byteOffset,data1->byteLength,gl->STATIC_DRAW);
		}
		HX_STACK_LINE(651)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_buffer.call(gl->ARRAY_BUFFER,(int)0);
	}
	HX_STACK_LINE(655)
	::lime::graphics::opengl::GLBuffer tmp2 = this->__buffer;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(655)
	return tmp2;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getBuffer,return )

::openfl::geom::Rectangle BitmapData_obj::getColorBoundsRect( int mask,int color,hx::Null< bool >  __o_findColor){
bool findColor = __o_findColor.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","getColorBoundsRect",0x21495071,"openfl.display.BitmapData.getColorBoundsRect","openfl/display/BitmapData.hx",660,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(findColor,"findColor")
{
		HX_STACK_LINE(662)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(662)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(662)
		if ((tmp1)){
			HX_STACK_LINE(662)
			int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(662)
			int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
			HX_STACK_LINE(662)
			::openfl::geom::Rectangle tmp4 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(662)
			return tmp4;
		}
		HX_STACK_LINE(664)
		bool tmp2 = this->transparent;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(664)
		bool tmp3 = tmp2;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(664)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(664)
		bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(664)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(664)
		if ((tmp5)){
			HX_STACK_LINE(664)
			int tmp7 = (int(mask) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(664)
			int tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(664)
			int tmp9 = (int(tmp8) & int((int)255));		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(664)
			int tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(664)
			tmp6 = (tmp10 > (int)0);
		}
		else{
			HX_STACK_LINE(664)
			tmp6 = true;
		}
		HX_STACK_LINE(664)
		if ((tmp6)){
			HX_STACK_LINE(666)
			int color1 = color;		HX_STACK_VAR(color1,"color1");
			HX_STACK_LINE(667)
			int tmp7 = (int(color1) >> int((int)24));		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(667)
			int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(667)
			bool tmp9 = (tmp8 == (int)0);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(667)
			if ((tmp9)){
				HX_STACK_LINE(667)
				color1 = (int)0;
			}
		}
		HX_STACK_LINE(671)
		::lime::graphics::Image tmp7 = this->image;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(671)
		int tmp8 = mask;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(671)
		int tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(671)
		bool tmp10 = findColor;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(671)
		::lime::math::Rectangle tmp11 = tmp7->getColorBoundsRect(tmp8,tmp9,tmp10,(int)1);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(671)
		::lime::math::Rectangle rect = tmp11;		HX_STACK_VAR(rect,"rect");
		HX_STACK_LINE(672)
		::openfl::geom::Rectangle tmp12 = ::openfl::geom::Rectangle_obj::__new(rect->x,rect->y,rect->width,rect->height);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(672)
		return tmp12;
	}
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,getColorBoundsRect,return )

int BitmapData_obj::getPixel( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel",0x4b52b53b,"openfl.display.BitmapData.getPixel","openfl/display/BitmapData.hx",677,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(679)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(679)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(679)
	if ((tmp1)){
		HX_STACK_LINE(679)
		return (int)0;
	}
	HX_STACK_LINE(680)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(680)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(680)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(680)
	int tmp5 = tmp2->getPixel(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(680)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel,return )

int BitmapData_obj::getPixel32( int x,int y){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixel32",0xcd56e69a,"openfl.display.BitmapData.getPixel32","openfl/display/BitmapData.hx",685,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x,"x")
	HX_STACK_ARG(y,"y")
	HX_STACK_LINE(687)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(687)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(687)
	if ((tmp1)){
		HX_STACK_LINE(687)
		return (int)0;
	}
	HX_STACK_LINE(688)
	::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(688)
	int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(688)
	int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(688)
	int tmp5 = tmp2->getPixel32(tmp3,tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(688)
	return tmp5;
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,getPixel32,return )

::openfl::utils::ByteArrayData BitmapData_obj::getPixels( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getPixels",0x9d0bded8,"openfl.display.BitmapData.getPixels","openfl/display/BitmapData.hx",693,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(695)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(695)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(695)
	if ((tmp1)){
		HX_STACK_LINE(695)
		return null();
	}
	HX_STACK_LINE(696)
	bool tmp2 = (rect == null());		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(696)
	if ((tmp2)){
		HX_STACK_LINE(696)
		::openfl::geom::Rectangle tmp3 = this->rect;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(696)
		rect = tmp3;
	}
	HX_STACK_LINE(697)
	::lime::graphics::Image tmp3 = this->image;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(697)
	::lime::math::Rectangle tmp4 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(697)
	::haxe::io::Bytes tmp5 = tmp3->getPixels(tmp4,(int)1);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(697)
	::openfl::utils::ByteArrayData tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::fromBytes(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(697)
	return tmp6;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getPixels,return )

Dynamic BitmapData_obj::getSurface( ){
	HX_STACK_FRAME("openfl.display.BitmapData","getSurface",0xa2992c22,"openfl.display.BitmapData.getSurface","openfl/display/BitmapData.hx",702,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_LINE(704)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(704)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(704)
	if ((tmp1)){
		HX_STACK_LINE(704)
		return null();
	}
	HX_STACK_LINE(706)
	Dynamic tmp2 = this->__surface;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(706)
	bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(706)
	if ((tmp3)){
		HX_STACK_LINE(708)
		::lime::graphics::Image tmp4 = this->image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(708)
		Dynamic tmp5 = ::lime::graphics::cairo::_CairoImageSurface::CairoImageSurface_Impl__obj::fromImage(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(708)
		this->__surface = tmp5;
	}
	HX_STACK_LINE(712)
	Dynamic tmp4 = this->__surface;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(712)
	return tmp4;
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,getSurface,return )

::lime::graphics::opengl::GLTexture BitmapData_obj::getTexture( ::lime::graphics::GLRenderContext gl){
	HX_STACK_FRAME("openfl.display.BitmapData","getTexture",0xe4308ed0,"openfl.display.BitmapData.getTexture","openfl/display/BitmapData.hx",717,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(gl,"gl")
	HX_STACK_LINE(719)
	bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(719)
	bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(719)
	if ((tmp1)){
		HX_STACK_LINE(719)
		return null();
	}
	HX_STACK_LINE(721)
	bool tmp2 = this->__usingPingPongTexture;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(721)
	bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(721)
	if ((tmp2)){
		HX_STACK_LINE(721)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp4 = this->__pingPongTexture;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(721)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(721)
		tmp3 = (tmp5 != null());
	}
	else{
		HX_STACK_LINE(721)
		tmp3 = false;
	}
	HX_STACK_LINE(721)
	if ((tmp3)){
		HX_STACK_LINE(723)
		::lime::graphics::opengl::GLTexture tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(723)
		{
			HX_STACK_LINE(723)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp5 = this->__pingPongTexture;		HX_STACK_VAR(tmp5,"tmp5");
			HX_STACK_LINE(723)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp5;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(723)
			bool tmp6 = _this->useOldTexture;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(723)
			if ((tmp6)){
				HX_STACK_LINE(723)
				bool tmp7 = _this->__swapped;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(723)
				::openfl::_internal::renderer::opengl::utils::RenderTexture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(723)
				if ((tmp7)){
					HX_STACK_LINE(723)
					tmp8 = _this->__texture0;
				}
				else{
					HX_STACK_LINE(723)
					tmp8 = _this->__texture1;
				}
				HX_STACK_LINE(723)
				tmp4 = tmp8->texture;
			}
			else{
				HX_STACK_LINE(723)
				bool tmp7 = _this->__swapped;		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(723)
				::openfl::_internal::renderer::opengl::utils::RenderTexture tmp8;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(723)
				if ((tmp7)){
					HX_STACK_LINE(723)
					tmp8 = _this->__texture1;
				}
				else{
					HX_STACK_LINE(723)
					tmp8 = _this->__texture0;
				}
				HX_STACK_LINE(723)
				tmp4 = tmp8->texture;
			}
		}
		HX_STACK_LINE(723)
		return tmp4;
	}
	HX_STACK_LINE(727)
	::lime::graphics::opengl::GLTexture tmp4 = this->__texture;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(727)
	bool tmp5 = (tmp4 == null());		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(727)
	if ((tmp5)){
		HX_STACK_LINE(729)
		int tmp6 = ::lime::graphics::opengl::GL_obj::get_version();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(729)
		::lime::graphics::opengl::GLTexture tmp7 = ::lime::graphics::opengl::GLTexture_obj::__new(tmp6,::lime::graphics::opengl::GL_obj::cffi_lime_gl_create_texture.call());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(729)
		this->__texture = tmp7;
		HX_STACK_LINE(730)
		{
			HX_STACK_LINE(730)
			::lime::graphics::opengl::GLTexture tmp8 = this->__texture;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(730)
			::lime::graphics::opengl::GLTexture texture = tmp8;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(730)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(731)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_S,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(732)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_WRAP_T,gl->CLAMP_TO_EDGE);
		HX_STACK_LINE(733)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MAG_FILTER,gl->NEAREST);
		HX_STACK_LINE(734)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_parameteri.call(gl->TEXTURE_2D,gl->TEXTURE_MIN_FILTER,gl->NEAREST);
		HX_STACK_LINE(735)
		::lime::graphics::Image tmp8 = this->image;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(735)
		tmp8->dirty = true;
	}
	HX_STACK_LINE(739)
	::lime::graphics::Image tmp6 = this->image;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(739)
	bool tmp7 = (tmp6 != null());		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(739)
	bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
	HX_STACK_LINE(739)
	if ((tmp7)){
		HX_STACK_LINE(739)
		::lime::graphics::Image tmp9 = this->image;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(739)
		::lime::graphics::Image tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(739)
		tmp8 = tmp10->dirty;
	}
	else{
		HX_STACK_LINE(739)
		tmp8 = false;
	}
	HX_STACK_LINE(739)
	if ((tmp8)){
		HX_STACK_LINE(741)
		int internalFormat;		HX_STACK_VAR(internalFormat,"internalFormat");
		HX_STACK_LINE(741)
		int format;		HX_STACK_VAR(format,"format");
		HX_STACK_LINE(743)
		Dynamic tmp9 = this->__surface;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(743)
		bool tmp10 = (tmp9 != null());		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(743)
		if ((tmp10)){
			HX_STACK_LINE(745)
			Dynamic tmp11 = this->__surface;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(745)
			::lime::graphics::cairo::_CairoSurface::CairoSurface_Impl__obj::flush(tmp11);
		}
		HX_STACK_LINE(749)
		::lime::graphics::Image tmp11 = this->image;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(749)
		int tmp12 = tmp11->buffer->bitsPerPixel;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(749)
		bool tmp13 = (tmp12 == (int)1);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(749)
		if ((tmp13)){
			HX_STACK_LINE(751)
			internalFormat = gl->ALPHA;
			HX_STACK_LINE(752)
			format = gl->ALPHA;
		}
		else{
			HX_STACK_LINE(768)
			Dynamic tmp14 = ::openfl::display::BitmapData_obj::__isGLES;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(768)
			bool tmp15 = (tmp14 == null());		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(768)
			if ((tmp15)){
				HX_STACK_LINE(770)
				::String version = ((Dynamic)(::lime::graphics::opengl::GL_obj::cffi_lime_gl_get_parameter.call(gl->VERSION)));		HX_STACK_VAR(version,"version");
				HX_STACK_LINE(771)
				int tmp16 = version.indexOf(HX_HCSTRING("OpenGL ES","\x5f","\xcb","\x92","\x95"),null());		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(771)
				int tmp17 = (int)-1;		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(771)
				bool tmp18 = (tmp16 > tmp17);		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(771)
				bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(771)
				if ((tmp18)){
					HX_STACK_LINE(771)
					int tmp20 = version.indexOf(HX_HCSTRING("WebGL","\x99","\x9f","\xe9","\x5a"),null());		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(771)
					int tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(771)
					tmp19 = (tmp21 == (int)-1);
				}
				else{
					HX_STACK_LINE(771)
					tmp19 = false;
				}
				HX_STACK_LINE(771)
				::openfl::display::BitmapData_obj::__isGLES = tmp19;
			}
			HX_STACK_LINE(775)
			Dynamic tmp16 = ::openfl::display::BitmapData_obj::__isGLES;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(775)
			int tmp17;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(775)
			if ((tmp16)){
				HX_STACK_LINE(775)
				tmp17 = gl->BGRA_EXT;
			}
			else{
				HX_STACK_LINE(775)
				tmp17 = gl->RGBA;
			}
			HX_STACK_LINE(775)
			internalFormat = tmp17;
			HX_STACK_LINE(776)
			format = gl->BGRA_EXT;
		}
		HX_STACK_LINE(782)
		{
			HX_STACK_LINE(782)
			::lime::graphics::opengl::GLTexture tmp14 = this->__texture;		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(782)
			::lime::graphics::opengl::GLTexture texture = tmp14;		HX_STACK_VAR(texture,"texture");
			HX_STACK_LINE(782)
			::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(  (((texture == null()))) ? int((int)0) : int(texture->id) ));
		}
		HX_STACK_LINE(784)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(784)
		::lime::graphics::Image textureImage = tmp14;		HX_STACK_VAR(textureImage,"textureImage");
		HX_STACK_LINE(786)
		bool tmp15 = textureImage->get_premultiplied();		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(786)
		bool tmp16 = tmp15;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(786)
		bool tmp17 = !(tmp16);		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(786)
		bool tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(786)
		if ((tmp17)){
			HX_STACK_LINE(786)
			tmp18 = textureImage->get_transparent();
		}
		else{
			HX_STACK_LINE(786)
			tmp18 = false;
		}
		HX_STACK_LINE(786)
		if ((tmp18)){
			HX_STACK_LINE(788)
			::lime::graphics::Image tmp19 = textureImage->clone();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(788)
			textureImage = tmp19;
			HX_STACK_LINE(792)
			textureImage->set_premultiplied(true);
		}
		HX_STACK_LINE(796)
		{
			HX_STACK_LINE(796)
			::lime::utils::ArrayBufferView tmp19 = textureImage->get_data();		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(796)
			::lime::utils::ArrayBufferView pixels = tmp19;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(796)
			{
				HX_STACK_LINE(796)
				bool tmp20 = (pixels == null());		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(796)
				::haxe::io::Bytes tmp21;		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(796)
				if ((tmp20)){
					HX_STACK_LINE(796)
					tmp21 = null();
				}
				else{
					HX_STACK_LINE(796)
					tmp21 = pixels->buffer;
				}
				HX_STACK_LINE(796)
				::haxe::io::Bytes buffer = tmp21;		HX_STACK_VAR(buffer,"buffer");
				HX_STACK_LINE(796)
				::lime::graphics::opengl::GL_obj::cffi_lime_gl_tex_image_2d.call(gl->TEXTURE_2D,(int)0,internalFormat,this->width,this->height,(int)0,format,gl->UNSIGNED_BYTE,hx::DynamicPtr(buffer),(  (((pixels == null()))) ? int((int)0) : int(pixels->byteOffset) ));
			}
		}
		HX_STACK_LINE(797)
		::lime::graphics::opengl::GL_obj::cffi_lime_gl_bind_texture.call(gl->TEXTURE_2D,(int)0);
		HX_STACK_LINE(798)
		::lime::graphics::Image tmp19 = this->image;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(798)
		tmp19->dirty = false;
	}
	HX_STACK_LINE(802)
	::lime::graphics::opengl::GLTexture tmp9 = this->__texture;		HX_STACK_VAR(tmp9,"tmp9");
	HX_STACK_LINE(802)
	return tmp9;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getTexture,return )

Array< int > BitmapData_obj::getVector( ::openfl::geom::Rectangle rect){
	HX_STACK_FRAME("openfl.display.BitmapData","getVector",0xa7bfa06e,"openfl.display.BitmapData.getVector","openfl/display/BitmapData.hx",807,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(rect,"rect")
	HX_STACK_LINE(809)
	::openfl::geom::Rectangle tmp = rect;		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(809)
	::openfl::utils::ByteArrayData tmp1 = this->getPixels(tmp);		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(809)
	::openfl::utils::ByteArrayData pixels = tmp1;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(810)
	::openfl::utils::ByteArrayData tmp2 = pixels;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(810)
	int tmp3 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(810)
	Float tmp4 = (Float(tmp3) / Float((int)4));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(810)
	int tmp5 = ::Std_obj::_int(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(810)
	int length = tmp5;		HX_STACK_VAR(length,"length");
	HX_STACK_LINE(811)
	Array< int > tmp6;		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(811)
	{
		HX_STACK_LINE(811)
		Array< int > this1;		HX_STACK_VAR(this1,"this1");
		HX_STACK_LINE(811)
		int tmp7 = length;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(811)
		this1 = Array_obj< int >::__new()->__SetSizeExact(tmp7);
		HX_STACK_LINE(811)
		tmp6 = this1;
	}
	HX_STACK_LINE(811)
	Array< int > result = tmp6;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(813)
	{
		HX_STACK_LINE(813)
		int _g = (int)0;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(813)
		while((true)){
			HX_STACK_LINE(813)
			bool tmp7 = (_g < length);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(813)
			bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(813)
			if ((tmp8)){
				HX_STACK_LINE(813)
				break;
			}
			HX_STACK_LINE(813)
			int tmp9 = (_g)++;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(813)
			int i = tmp9;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(815)
			{
				HX_STACK_LINE(815)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(815)
				int value = tmp10;		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(815)
				int tmp11 = value;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(815)
				result[i] = tmp11;
			}
		}
	}
	HX_STACK_LINE(819)
	Array< int > tmp7 = result;		HX_STACK_VAR(tmp7,"tmp7");
	HX_STACK_LINE(819)
	return tmp7;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,getVector,return )

Array< ::Dynamic > BitmapData_obj::histogram( ::openfl::geom::Rectangle hRect){
	HX_STACK_FRAME("openfl.display.BitmapData","histogram",0xf93f4519,"openfl.display.BitmapData.histogram","openfl/display/BitmapData.hx",824,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(hRect,"hRect")
	HX_STACK_LINE(826)
	bool tmp = (hRect != null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(826)
	::openfl::geom::Rectangle tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(826)
	if ((tmp)){
		HX_STACK_LINE(826)
		tmp1 = hRect;
	}
	else{
		HX_STACK_LINE(826)
		int tmp2 = this->width;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(826)
		int tmp3 = this->height;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(826)
		tmp1 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,tmp2,tmp3);
	}
	HX_STACK_LINE(826)
	::openfl::geom::Rectangle rect = tmp1;		HX_STACK_VAR(rect,"rect");
	HX_STACK_LINE(827)
	::openfl::geom::Rectangle tmp2 = rect;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(827)
	::openfl::utils::ByteArrayData tmp3 = this->getPixels(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(827)
	::openfl::utils::ByteArrayData pixels = tmp3;		HX_STACK_VAR(pixels,"pixels");
	HX_STACK_LINE(828)
	Array< ::Dynamic > result;		HX_STACK_VAR(result,"result");
	HX_STACK_LINE(828)
	{
		HX_STACK_LINE(828)
		Array< ::Dynamic > _g = Array_obj< ::Dynamic >::__new();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(828)
		{
			HX_STACK_LINE(828)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(828)
			while((true)){
				HX_STACK_LINE(828)
				bool tmp4 = (_g1 < (int)4);		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(828)
				bool tmp5 = !(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(828)
				if ((tmp5)){
					HX_STACK_LINE(828)
					break;
				}
				HX_STACK_LINE(828)
				int tmp6 = (_g1)++;		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(828)
				int i = tmp6;		HX_STACK_VAR(i,"i");
				struct _Function_4_1{
					inline static Array< int > Block( ){
						HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","openfl/display/BitmapData.hx",828,0xdd12d5b9)
						{
							HX_STACK_LINE(828)
							Array< int > _g2 = Array_obj< int >::__new();		HX_STACK_VAR(_g2,"_g2");
							HX_STACK_LINE(828)
							{
								HX_STACK_LINE(828)
								int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
								HX_STACK_LINE(828)
								while((true)){
									HX_STACK_LINE(828)
									bool tmp7 = (_g3 < (int)256);		HX_STACK_VAR(tmp7,"tmp7");
									HX_STACK_LINE(828)
									bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
									HX_STACK_LINE(828)
									if ((tmp8)){
										HX_STACK_LINE(828)
										break;
									}
									HX_STACK_LINE(828)
									int tmp9 = (_g3)++;		HX_STACK_VAR(tmp9,"tmp9");
									HX_STACK_LINE(828)
									int j = tmp9;		HX_STACK_VAR(j,"j");
									HX_STACK_LINE(828)
									_g2->push((int)0);
								}
							}
							HX_STACK_LINE(828)
							return _g2;
						}
						return null();
					}
				};
				HX_STACK_LINE(828)
				_g->push(_Function_4_1::Block());
			}
		}
		HX_STACK_LINE(828)
		result = _g;
	}
	HX_STACK_LINE(830)
	{
		HX_STACK_LINE(830)
		int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(830)
		::openfl::utils::ByteArrayData tmp4 = pixels;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(830)
		int tmp5 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(830)
		int _g1 = tmp5;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(830)
		while((true)){
			HX_STACK_LINE(830)
			bool tmp6 = (_g2 < _g1);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(830)
			bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(830)
			if ((tmp7)){
				HX_STACK_LINE(830)
				break;
			}
			HX_STACK_LINE(830)
			int tmp8 = (_g2)++;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(830)
			int i = tmp8;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(832)
			int tmp9 = hx::Mod(i,(int)4);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(832)
			int tmp10 = pixels->readUnsignedByte();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(832)
			++(result->__get(tmp9).StaticCast< Array< int > >()[tmp10]);
		}
	}
	HX_STACK_LINE(836)
	return result;
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,histogram,return )

bool BitmapData_obj::hitTest( ::openfl::geom::Point firstPoint,int firstAlphaThreshold,Dynamic secondObject,::openfl::geom::Point secondBitmapDataPoint,hx::Null< int >  __o_secondAlphaThreshold){
int secondAlphaThreshold = __o_secondAlphaThreshold.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","hitTest",0xb5e8cf7a,"openfl.display.BitmapData.hitTest","openfl/display/BitmapData.hx",841,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(firstPoint,"firstPoint")
	HX_STACK_ARG(firstAlphaThreshold,"firstAlphaThreshold")
	HX_STACK_ARG(secondObject,"secondObject")
	HX_STACK_ARG(secondBitmapDataPoint,"secondBitmapDataPoint")
	HX_STACK_ARG(secondAlphaThreshold,"secondAlphaThreshold")
{
		HX_STACK_LINE(843)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(843)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(843)
		if ((tmp1)){
			HX_STACK_LINE(843)
			return false;
		}
		HX_STACK_LINE(845)
		Dynamic tmp2 = secondObject;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(845)
		bool tmp3 = ::Std_obj::is(tmp2,hx::ClassOf< ::openfl::display::Bitmap >());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(845)
		if ((tmp3)){
			HX_STACK_LINE(847)
			::openfl::display::Bitmap tmp4;		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(847)
			tmp4 = hx::TCast< ::openfl::display::Bitmap >::cast(secondObject);
			HX_STACK_LINE(847)
			secondObject = tmp4->bitmapData;
		}
		HX_STACK_LINE(851)
		Dynamic tmp4 = secondObject;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(851)
		bool tmp5 = ::Std_obj::is(tmp4,hx::ClassOf< ::openfl::geom::Point >());		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(851)
		if ((tmp5)){
			HX_STACK_LINE(853)
			::openfl::geom::Point secondPoint = ((::openfl::geom::Point)(secondObject));		HX_STACK_VAR(secondPoint,"secondPoint");
			HX_STACK_LINE(855)
			Float tmp6 = (secondPoint->x - firstPoint->x);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(855)
			int tmp7 = ::Std_obj::_int(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(855)
			int x = tmp7;		HX_STACK_VAR(x,"x");
			HX_STACK_LINE(856)
			Float tmp8 = (secondPoint->y - firstPoint->y);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(856)
			int tmp9 = ::Std_obj::_int(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(856)
			int y = tmp9;		HX_STACK_VAR(y,"y");
			HX_STACK_LINE(858)
			::openfl::geom::Rectangle tmp10 = this->rect;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(858)
			int tmp11 = x;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(858)
			int tmp12 = y;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(858)
			bool tmp13 = tmp10->contains(tmp11,tmp12);		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(858)
			if ((tmp13)){
				HX_STACK_LINE(860)
				int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(860)
				int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(860)
				int tmp16 = this->getPixel32(tmp14,tmp15);		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(860)
				int pixel = tmp16;		HX_STACK_VAR(pixel,"pixel");
				HX_STACK_LINE(862)
				int tmp17 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(862)
				int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(862)
				int tmp19 = firstAlphaThreshold;		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(862)
				bool tmp20 = (tmp18 >= tmp19);		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(862)
				if ((tmp20)){
					HX_STACK_LINE(864)
					return true;
				}
			}
		}
		else{
			HX_STACK_LINE(870)
			Dynamic tmp6 = secondObject;		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(870)
			bool tmp7 = ::Std_obj::is(tmp6,hx::ClassOf< ::openfl::display::BitmapData >());		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(870)
			if ((tmp7)){
				HX_STACK_LINE(872)
				::openfl::display::BitmapData secondBitmapData = ((::openfl::display::BitmapData)(secondObject));		HX_STACK_VAR(secondBitmapData,"secondBitmapData");
				HX_STACK_LINE(873)
				int x;		HX_STACK_VAR(x,"x");
				HX_STACK_LINE(873)
				int y;		HX_STACK_VAR(y,"y");
				HX_STACK_LINE(875)
				bool tmp8 = (secondBitmapDataPoint == null());		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(875)
				if ((tmp8)){
					HX_STACK_LINE(877)
					x = (int)0;
					HX_STACK_LINE(878)
					y = (int)0;
				}
				else{
					HX_STACK_LINE(882)
					Float tmp9 = (secondBitmapDataPoint->x - firstPoint->x);		HX_STACK_VAR(tmp9,"tmp9");
					HX_STACK_LINE(882)
					int tmp10 = ::Std_obj::_int(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(882)
					x = tmp10;
					HX_STACK_LINE(883)
					Float tmp11 = (secondBitmapDataPoint->y - firstPoint->y);		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(883)
					int tmp12 = ::Std_obj::_int(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(883)
					y = tmp12;
				}
				HX_STACK_LINE(887)
				::openfl::geom::Rectangle tmp9 = this->rect;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(887)
				int tmp10 = x;		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(887)
				int tmp11 = y;		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(887)
				bool tmp12 = tmp9->contains(tmp10,tmp11);		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(887)
				if ((tmp12)){
					HX_STACK_LINE(889)
					::openfl::geom::Rectangle tmp13 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(889)
					::openfl::geom::Rectangle hitRect = tmp13;		HX_STACK_VAR(hitRect,"hitRect");
					HX_STACK_LINE(890)
					int tmp14 = x;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(890)
					int tmp15 = y;		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(890)
					int tmp16 = secondBitmapData->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(890)
					int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(890)
					int tmp18 = x;		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(890)
					int tmp19 = (tmp17 - tmp18);		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(890)
					Float tmp20 = ::Math_obj::min(tmp16,tmp19);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(890)
					int tmp21 = secondBitmapData->height;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(890)
					int tmp22 = this->height;		HX_STACK_VAR(tmp22,"tmp22");
					HX_STACK_LINE(890)
					int tmp23 = y;		HX_STACK_VAR(tmp23,"tmp23");
					HX_STACK_LINE(890)
					int tmp24 = (tmp22 - tmp23);		HX_STACK_VAR(tmp24,"tmp24");
					HX_STACK_LINE(890)
					Float tmp25 = ::Math_obj::min(tmp21,tmp24);		HX_STACK_VAR(tmp25,"tmp25");
					HX_STACK_LINE(890)
					hitRect->setTo(tmp14,tmp15,tmp20,tmp25);
					HX_STACK_LINE(892)
					::openfl::geom::Rectangle tmp26 = hitRect;		HX_STACK_VAR(tmp26,"tmp26");
					HX_STACK_LINE(892)
					::openfl::utils::ByteArrayData tmp27 = this->getPixels(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
					HX_STACK_LINE(892)
					::openfl::utils::ByteArrayData pixels = tmp27;		HX_STACK_VAR(pixels,"pixels");
					HX_STACK_LINE(894)
					int tmp28 = x;		HX_STACK_VAR(tmp28,"tmp28");
					HX_STACK_LINE(894)
					int tmp29 = -(tmp28);		HX_STACK_VAR(tmp29,"tmp29");
					HX_STACK_LINE(894)
					int tmp30 = y;		HX_STACK_VAR(tmp30,"tmp30");
					HX_STACK_LINE(894)
					int tmp31 = -(tmp30);		HX_STACK_VAR(tmp31,"tmp31");
					HX_STACK_LINE(894)
					hitRect->offset(tmp29,tmp31);
					HX_STACK_LINE(895)
					::openfl::geom::Rectangle tmp32 = hitRect;		HX_STACK_VAR(tmp32,"tmp32");
					HX_STACK_LINE(895)
					::openfl::utils::ByteArrayData tmp33 = secondBitmapData->getPixels(tmp32);		HX_STACK_VAR(tmp33,"tmp33");
					HX_STACK_LINE(895)
					::openfl::utils::ByteArrayData testPixels = tmp33;		HX_STACK_VAR(testPixels,"testPixels");
					HX_STACK_LINE(897)
					Float tmp34 = (hitRect->width * hitRect->height);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(897)
					int tmp35 = ::Std_obj::_int(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(897)
					int length = tmp35;		HX_STACK_VAR(length,"length");
					HX_STACK_LINE(898)
					int pixel;		HX_STACK_VAR(pixel,"pixel");
					HX_STACK_LINE(898)
					int testPixel;		HX_STACK_VAR(testPixel,"testPixel");
					HX_STACK_LINE(900)
					{
						HX_STACK_LINE(900)
						int _g = (int)0;		HX_STACK_VAR(_g,"_g");
						HX_STACK_LINE(900)
						while((true)){
							HX_STACK_LINE(900)
							bool tmp36 = (_g < length);		HX_STACK_VAR(tmp36,"tmp36");
							HX_STACK_LINE(900)
							bool tmp37 = !(tmp36);		HX_STACK_VAR(tmp37,"tmp37");
							HX_STACK_LINE(900)
							if ((tmp37)){
								HX_STACK_LINE(900)
								break;
							}
							HX_STACK_LINE(900)
							int tmp38 = (_g)++;		HX_STACK_VAR(tmp38,"tmp38");
							HX_STACK_LINE(900)
							int i = tmp38;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(902)
							int tmp39 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp39,"tmp39");
							HX_STACK_LINE(902)
							pixel = tmp39;
							HX_STACK_LINE(903)
							int tmp40 = testPixels->readUnsignedInt();		HX_STACK_VAR(tmp40,"tmp40");
							HX_STACK_LINE(903)
							testPixel = tmp40;
							HX_STACK_LINE(905)
							int tmp41 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(905)
							int tmp42 = (int(tmp41) & int((int)255));		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(905)
							int tmp43 = firstAlphaThreshold;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(905)
							bool tmp44 = (tmp42 >= tmp43);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(905)
							bool tmp45;		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(905)
							if ((tmp44)){
								HX_STACK_LINE(905)
								int tmp46 = (int(testPixel) >> int((int)24));		HX_STACK_VAR(tmp46,"tmp46");
								HX_STACK_LINE(905)
								int tmp47 = tmp46;		HX_STACK_VAR(tmp47,"tmp47");
								HX_STACK_LINE(905)
								int tmp48 = (int(tmp47) & int((int)255));		HX_STACK_VAR(tmp48,"tmp48");
								HX_STACK_LINE(905)
								int tmp49 = tmp48;		HX_STACK_VAR(tmp49,"tmp49");
								HX_STACK_LINE(905)
								int tmp50 = secondAlphaThreshold;		HX_STACK_VAR(tmp50,"tmp50");
								HX_STACK_LINE(905)
								tmp45 = (tmp49 >= tmp50);
							}
							else{
								HX_STACK_LINE(905)
								tmp45 = false;
							}
							HX_STACK_LINE(905)
							if ((tmp45)){
								HX_STACK_LINE(907)
								return true;
							}
						}
					}
					HX_STACK_LINE(913)
					return false;
				}
			}
			else{
				HX_STACK_LINE(917)
				Dynamic tmp8 = secondObject;		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(917)
				bool tmp9 = ::Std_obj::is(tmp8,hx::ClassOf< ::openfl::geom::Rectangle >());		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(917)
				if ((tmp9)){
					HX_STACK_LINE(919)
					::openfl::geom::Rectangle tmp10 = ::openfl::geom::Rectangle_obj::__temp;		HX_STACK_VAR(tmp10,"tmp10");
					HX_STACK_LINE(919)
					::openfl::geom::Rectangle secondRectangle = tmp10;		HX_STACK_VAR(secondRectangle,"secondRectangle");
					HX_STACK_LINE(920)
					::openfl::geom::Rectangle tmp11 = ((::openfl::geom::Rectangle)(secondObject));		HX_STACK_VAR(tmp11,"tmp11");
					HX_STACK_LINE(920)
					secondRectangle->copyFrom(tmp11);
					HX_STACK_LINE(921)
					Float tmp12 = firstPoint->x;		HX_STACK_VAR(tmp12,"tmp12");
					HX_STACK_LINE(921)
					Float tmp13 = -(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(921)
					Float tmp14 = firstPoint->y;		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(921)
					Float tmp15 = -(tmp14);		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(921)
					secondRectangle->offset(tmp13,tmp15);
					HX_STACK_LINE(922)
					int tmp16 = this->width;		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(922)
					int tmp17 = this->height;		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(922)
					secondRectangle->__contract((int)0,(int)0,tmp16,tmp17);
					HX_STACK_LINE(924)
					bool tmp18 = (secondRectangle->width > (int)0);		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(924)
					bool tmp19;		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(924)
					if ((tmp18)){
						HX_STACK_LINE(924)
						tmp19 = (secondRectangle->height > (int)0);
					}
					else{
						HX_STACK_LINE(924)
						tmp19 = false;
					}
					HX_STACK_LINE(924)
					if ((tmp19)){
						HX_STACK_LINE(926)
						::openfl::geom::Rectangle tmp20 = secondRectangle;		HX_STACK_VAR(tmp20,"tmp20");
						HX_STACK_LINE(926)
						::openfl::utils::ByteArrayData tmp21 = this->getPixels(tmp20);		HX_STACK_VAR(tmp21,"tmp21");
						HX_STACK_LINE(926)
						::openfl::utils::ByteArrayData pixels = tmp21;		HX_STACK_VAR(pixels,"pixels");
						HX_STACK_LINE(927)
						::openfl::utils::ByteArrayData tmp22 = pixels;		HX_STACK_VAR(tmp22,"tmp22");
						HX_STACK_LINE(927)
						int tmp23 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp22);		HX_STACK_VAR(tmp23,"tmp23");
						HX_STACK_LINE(927)
						Float tmp24 = (Float(tmp23) / Float((int)4));		HX_STACK_VAR(tmp24,"tmp24");
						HX_STACK_LINE(927)
						int tmp25 = ::Std_obj::_int(tmp24);		HX_STACK_VAR(tmp25,"tmp25");
						HX_STACK_LINE(927)
						int length = tmp25;		HX_STACK_VAR(length,"length");
						HX_STACK_LINE(928)
						int pixel;		HX_STACK_VAR(pixel,"pixel");
						HX_STACK_LINE(930)
						{
							HX_STACK_LINE(930)
							int _g = (int)0;		HX_STACK_VAR(_g,"_g");
							HX_STACK_LINE(930)
							while((true)){
								HX_STACK_LINE(930)
								bool tmp26 = (_g < length);		HX_STACK_VAR(tmp26,"tmp26");
								HX_STACK_LINE(930)
								bool tmp27 = !(tmp26);		HX_STACK_VAR(tmp27,"tmp27");
								HX_STACK_LINE(930)
								if ((tmp27)){
									HX_STACK_LINE(930)
									break;
								}
								HX_STACK_LINE(930)
								int tmp28 = (_g)++;		HX_STACK_VAR(tmp28,"tmp28");
								HX_STACK_LINE(930)
								int i = tmp28;		HX_STACK_VAR(i,"i");
								HX_STACK_LINE(932)
								int tmp29 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp29,"tmp29");
								HX_STACK_LINE(932)
								pixel = tmp29;
								HX_STACK_LINE(934)
								int tmp30 = (int(pixel) >> int((int)24));		HX_STACK_VAR(tmp30,"tmp30");
								HX_STACK_LINE(934)
								int tmp31 = (int(tmp30) & int((int)255));		HX_STACK_VAR(tmp31,"tmp31");
								HX_STACK_LINE(934)
								int tmp32 = firstAlphaThreshold;		HX_STACK_VAR(tmp32,"tmp32");
								HX_STACK_LINE(934)
								bool tmp33 = (tmp31 >= tmp32);		HX_STACK_VAR(tmp33,"tmp33");
								HX_STACK_LINE(934)
								if ((tmp33)){
									HX_STACK_LINE(936)
									return true;
								}
							}
						}
					}
				}
			}
		}
		HX_STACK_LINE(946)
		return false;
	}
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,hitTest,return )

Void BitmapData_obj::lock( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","lock",0xf6efc996,"openfl.display.BitmapData.lock","openfl/display/BitmapData.hx",951,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,lock,(void))

Void BitmapData_obj::merge( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,int redMultiplier,int greenMultiplier,int blueMultiplier,int alphaMultiplier){
{
		HX_STACK_FRAME("openfl.display.BitmapData","merge",0xa7b66aad,"openfl.display.BitmapData.merge","openfl/display/BitmapData.hx",958,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redMultiplier,"redMultiplier")
		HX_STACK_ARG(greenMultiplier,"greenMultiplier")
		HX_STACK_ARG(blueMultiplier,"blueMultiplier")
		HX_STACK_ARG(alphaMultiplier,"alphaMultiplier")
		HX_STACK_LINE(960)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(960)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(960)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(960)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(960)
		bool tmp4 = tmp3;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(960)
		bool tmp5;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(960)
		if ((tmp4)){
			HX_STACK_LINE(960)
			tmp5 = (sourceBitmapData == null());
		}
		else{
			HX_STACK_LINE(960)
			tmp5 = true;
		}
		HX_STACK_LINE(960)
		bool tmp6 = !(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(960)
		bool tmp7 = tmp6;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(960)
		bool tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(960)
		if ((tmp7)){
			HX_STACK_LINE(960)
			bool tmp9 = sourceBitmapData->__isValid;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(960)
			bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(960)
			bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(960)
			tmp8 = !(tmp11);
		}
		else{
			HX_STACK_LINE(960)
			tmp8 = true;
		}
		HX_STACK_LINE(960)
		bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(960)
		bool tmp10 = tmp9;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(960)
		bool tmp11;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(960)
		if ((tmp10)){
			HX_STACK_LINE(960)
			tmp11 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(960)
			tmp11 = true;
		}
		HX_STACK_LINE(960)
		bool tmp12 = !(tmp11);		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(960)
		bool tmp13;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(960)
		if ((tmp12)){
			HX_STACK_LINE(960)
			tmp13 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(960)
			tmp13 = true;
		}
		HX_STACK_LINE(960)
		if ((tmp13)){
			HX_STACK_LINE(960)
			return null();
		}
		HX_STACK_LINE(961)
		::lime::graphics::Image tmp14 = this->image;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(961)
		::lime::graphics::Image tmp15 = sourceBitmapData->image;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(961)
		::lime::math::Rectangle tmp16 = sourceRect->__toLimeRectangle();		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(961)
		::lime::math::Vector2 tmp17 = destPoint->__toLimeVector2();		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(961)
		int tmp18 = redMultiplier;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(961)
		int tmp19 = greenMultiplier;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(961)
		int tmp20 = blueMultiplier;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(961)
		int tmp21 = alphaMultiplier;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(961)
		tmp14->merge(tmp15,tmp16,tmp17,tmp18,tmp19,tmp20,tmp21);
		HX_STACK_LINE(962)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,merge,(void))

Void BitmapData_obj::noise( int randomSeed,hx::Null< int >  __o_low,hx::Null< int >  __o_high,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale){
int low = __o_low.Default(0);
int high = __o_high.Default(255);
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","noise",0x41b2578f,"openfl.display.BitmapData.noise","openfl/display/BitmapData.hx",967,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(low,"low")
	HX_STACK_ARG(high,"high")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
{
		HX_STACK_LINE(969)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(969)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(969)
		if ((tmp1)){
			HX_STACK_LINE(969)
			return null();
		}
		HX_STACK_LINE(971)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.noise","\x45","\x4b","\xe1","\x5b"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC5(BitmapData_obj,noise,(void))

Void BitmapData_obj::paletteMap( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,Array< int > redArray,Array< int > greenArray,Array< int > blueArray,Array< int > alphaArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","paletteMap",0xfc19eecc,"openfl.display.BitmapData.paletteMap","openfl/display/BitmapData.hx",976,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
		HX_STACK_ARG(sourceRect,"sourceRect")
		HX_STACK_ARG(destPoint,"destPoint")
		HX_STACK_ARG(redArray,"redArray")
		HX_STACK_ARG(greenArray,"greenArray")
		HX_STACK_ARG(blueArray,"blueArray")
		HX_STACK_ARG(alphaArray,"alphaArray")
		HX_STACK_LINE(978)
		Float tmp = sourceRect->width;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(978)
		int tmp1 = ::Std_obj::_int(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(978)
		int sw = tmp1;		HX_STACK_VAR(sw,"sw");
		HX_STACK_LINE(979)
		Float tmp2 = sourceRect->height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(979)
		int tmp3 = ::Std_obj::_int(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(979)
		int sh = tmp3;		HX_STACK_VAR(sh,"sh");
		HX_STACK_LINE(981)
		::openfl::geom::Rectangle tmp4 = sourceRect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(981)
		::openfl::utils::ByteArrayData tmp5 = this->getPixels(tmp4);		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(981)
		::openfl::utils::ByteArrayData pixels = tmp5;		HX_STACK_VAR(pixels,"pixels");
		HX_STACK_LINE(982)
		pixels->position = (int)0;
		HX_STACK_LINE(984)
		int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
		HX_STACK_LINE(984)
		int r;		HX_STACK_VAR(r,"r");
		HX_STACK_LINE(984)
		int g;		HX_STACK_VAR(g,"g");
		HX_STACK_LINE(984)
		int b;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(984)
		int a;		HX_STACK_VAR(a,"a");
		HX_STACK_LINE(984)
		int color;		HX_STACK_VAR(color,"color");
		HX_STACK_LINE(984)
		int c1;		HX_STACK_VAR(c1,"c1");
		HX_STACK_LINE(984)
		int c2;		HX_STACK_VAR(c2,"c2");
		HX_STACK_LINE(984)
		int c3;		HX_STACK_VAR(c3,"c3");
		HX_STACK_LINE(984)
		int c4;		HX_STACK_VAR(c4,"c4");
		HX_STACK_LINE(986)
		{
			HX_STACK_LINE(986)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(986)
			int tmp6 = (sh * sw);		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(986)
			int _g = tmp6;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(986)
			while((true)){
				HX_STACK_LINE(986)
				bool tmp7 = (_g1 < _g);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(986)
				bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(986)
				if ((tmp8)){
					HX_STACK_LINE(986)
					break;
				}
				HX_STACK_LINE(986)
				int tmp9 = (_g1)++;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(986)
				int i = tmp9;		HX_STACK_VAR(i,"i");
				HX_STACK_LINE(988)
				int tmp10 = pixels->readUnsignedInt();		HX_STACK_VAR(tmp10,"tmp10");
				HX_STACK_LINE(988)
				pixelValue = tmp10;
				HX_STACK_LINE(990)
				bool tmp11 = (alphaArray == null());		HX_STACK_VAR(tmp11,"tmp11");
				HX_STACK_LINE(990)
				int tmp12;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(990)
				if ((tmp11)){
					HX_STACK_LINE(990)
					tmp12 = (int(pixelValue) & int((int)-16777216));
				}
				else{
					HX_STACK_LINE(990)
					int tmp13 = (int(pixelValue) >> int((int)24));		HX_STACK_VAR(tmp13,"tmp13");
					HX_STACK_LINE(990)
					int tmp14 = (int(tmp13) & int((int)255));		HX_STACK_VAR(tmp14,"tmp14");
					HX_STACK_LINE(990)
					tmp12 = alphaArray->__get(tmp14);
				}
				HX_STACK_LINE(990)
				c1 = tmp12;
				HX_STACK_LINE(991)
				bool tmp13 = (redArray == null());		HX_STACK_VAR(tmp13,"tmp13");
				HX_STACK_LINE(991)
				int tmp14;		HX_STACK_VAR(tmp14,"tmp14");
				HX_STACK_LINE(991)
				if ((tmp13)){
					HX_STACK_LINE(991)
					tmp14 = (int(pixelValue) & int((int)16711680));
				}
				else{
					HX_STACK_LINE(991)
					int tmp15 = (int(pixelValue) >> int((int)16));		HX_STACK_VAR(tmp15,"tmp15");
					HX_STACK_LINE(991)
					int tmp16 = (int(tmp15) & int((int)255));		HX_STACK_VAR(tmp16,"tmp16");
					HX_STACK_LINE(991)
					tmp14 = redArray->__get(tmp16);
				}
				HX_STACK_LINE(991)
				c2 = tmp14;
				HX_STACK_LINE(992)
				bool tmp15 = (greenArray == null());		HX_STACK_VAR(tmp15,"tmp15");
				HX_STACK_LINE(992)
				int tmp16;		HX_STACK_VAR(tmp16,"tmp16");
				HX_STACK_LINE(992)
				if ((tmp15)){
					HX_STACK_LINE(992)
					tmp16 = (int(pixelValue) & int((int)65280));
				}
				else{
					HX_STACK_LINE(992)
					int tmp17 = (int(pixelValue) >> int((int)8));		HX_STACK_VAR(tmp17,"tmp17");
					HX_STACK_LINE(992)
					int tmp18 = (int(tmp17) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
					HX_STACK_LINE(992)
					tmp16 = greenArray->__get(tmp18);
				}
				HX_STACK_LINE(992)
				c3 = tmp16;
				HX_STACK_LINE(993)
				bool tmp17 = (blueArray == null());		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(993)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(993)
				if ((tmp17)){
					HX_STACK_LINE(993)
					tmp18 = (int(pixelValue) & int((int)255));
				}
				else{
					HX_STACK_LINE(993)
					int tmp19 = (int(pixelValue) & int((int)255));		HX_STACK_VAR(tmp19,"tmp19");
					HX_STACK_LINE(993)
					tmp18 = blueArray->__get(tmp19);
				}
				HX_STACK_LINE(993)
				c4 = tmp18;
				HX_STACK_LINE(995)
				int tmp19 = (int(c1) >> int((int)24));		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(995)
				int tmp20 = (int(tmp19) & int((int)255));		HX_STACK_VAR(tmp20,"tmp20");
				HX_STACK_LINE(995)
				int tmp21 = (int(c2) >> int((int)24));		HX_STACK_VAR(tmp21,"tmp21");
				HX_STACK_LINE(995)
				int tmp22 = (int(tmp21) & int((int)255));		HX_STACK_VAR(tmp22,"tmp22");
				HX_STACK_LINE(995)
				int tmp23 = (tmp20 + tmp22);		HX_STACK_VAR(tmp23,"tmp23");
				HX_STACK_LINE(995)
				int tmp24 = (int(c3) >> int((int)24));		HX_STACK_VAR(tmp24,"tmp24");
				HX_STACK_LINE(995)
				int tmp25 = (int(tmp24) & int((int)255));		HX_STACK_VAR(tmp25,"tmp25");
				HX_STACK_LINE(995)
				int tmp26 = (tmp23 + tmp25);		HX_STACK_VAR(tmp26,"tmp26");
				HX_STACK_LINE(995)
				int tmp27 = (int(c4) >> int((int)24));		HX_STACK_VAR(tmp27,"tmp27");
				HX_STACK_LINE(995)
				int tmp28 = (int(tmp27) & int((int)255));		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(995)
				int tmp29 = (tmp26 + tmp28);		HX_STACK_VAR(tmp29,"tmp29");
				HX_STACK_LINE(995)
				a = tmp29;
				HX_STACK_LINE(996)
				bool tmp30 = (a > (int)255);		HX_STACK_VAR(tmp30,"tmp30");
				HX_STACK_LINE(996)
				if ((tmp30)){
					HX_STACK_LINE(996)
					(a == (int)255);
				}
				HX_STACK_LINE(998)
				int tmp31 = (int(c1) >> int((int)16));		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(998)
				int tmp32 = (int(tmp31) & int((int)255));		HX_STACK_VAR(tmp32,"tmp32");
				HX_STACK_LINE(998)
				int tmp33 = (int(c2) >> int((int)16));		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(998)
				int tmp34 = (int(tmp33) & int((int)255));		HX_STACK_VAR(tmp34,"tmp34");
				HX_STACK_LINE(998)
				int tmp35 = (tmp32 + tmp34);		HX_STACK_VAR(tmp35,"tmp35");
				HX_STACK_LINE(998)
				int tmp36 = (int(c3) >> int((int)16));		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(998)
				int tmp37 = (int(tmp36) & int((int)255));		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(998)
				int tmp38 = (tmp35 + tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(998)
				int tmp39 = (int(c4) >> int((int)16));		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(998)
				int tmp40 = (int(tmp39) & int((int)255));		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(998)
				int tmp41 = (tmp38 + tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(998)
				r = tmp41;
				HX_STACK_LINE(999)
				bool tmp42 = (r > (int)255);		HX_STACK_VAR(tmp42,"tmp42");
				HX_STACK_LINE(999)
				if ((tmp42)){
					HX_STACK_LINE(999)
					(r == (int)255);
				}
				HX_STACK_LINE(1001)
				int tmp43 = (int(c1) >> int((int)8));		HX_STACK_VAR(tmp43,"tmp43");
				HX_STACK_LINE(1001)
				int tmp44 = (int(tmp43) & int((int)255));		HX_STACK_VAR(tmp44,"tmp44");
				HX_STACK_LINE(1001)
				int tmp45 = (int(c2) >> int((int)8));		HX_STACK_VAR(tmp45,"tmp45");
				HX_STACK_LINE(1001)
				int tmp46 = (int(tmp45) & int((int)255));		HX_STACK_VAR(tmp46,"tmp46");
				HX_STACK_LINE(1001)
				int tmp47 = (tmp44 + tmp46);		HX_STACK_VAR(tmp47,"tmp47");
				HX_STACK_LINE(1001)
				int tmp48 = (int(c3) >> int((int)8));		HX_STACK_VAR(tmp48,"tmp48");
				HX_STACK_LINE(1001)
				int tmp49 = (int(tmp48) & int((int)255));		HX_STACK_VAR(tmp49,"tmp49");
				HX_STACK_LINE(1001)
				int tmp50 = (tmp47 + tmp49);		HX_STACK_VAR(tmp50,"tmp50");
				HX_STACK_LINE(1001)
				int tmp51 = (int(c4) >> int((int)8));		HX_STACK_VAR(tmp51,"tmp51");
				HX_STACK_LINE(1001)
				int tmp52 = (int(tmp51) & int((int)255));		HX_STACK_VAR(tmp52,"tmp52");
				HX_STACK_LINE(1001)
				int tmp53 = (tmp50 + tmp52);		HX_STACK_VAR(tmp53,"tmp53");
				HX_STACK_LINE(1001)
				g = tmp53;
				HX_STACK_LINE(1002)
				bool tmp54 = (g > (int)255);		HX_STACK_VAR(tmp54,"tmp54");
				HX_STACK_LINE(1002)
				if ((tmp54)){
					HX_STACK_LINE(1002)
					(g == (int)255);
				}
				HX_STACK_LINE(1004)
				int tmp55 = (int(c1) & int((int)255));		HX_STACK_VAR(tmp55,"tmp55");
				HX_STACK_LINE(1004)
				int tmp56 = (int(c2) & int((int)255));		HX_STACK_VAR(tmp56,"tmp56");
				HX_STACK_LINE(1004)
				int tmp57 = (tmp55 + tmp56);		HX_STACK_VAR(tmp57,"tmp57");
				HX_STACK_LINE(1004)
				int tmp58 = (int(c3) & int((int)255));		HX_STACK_VAR(tmp58,"tmp58");
				HX_STACK_LINE(1004)
				int tmp59 = (tmp57 + tmp58);		HX_STACK_VAR(tmp59,"tmp59");
				HX_STACK_LINE(1004)
				int tmp60 = (int(c4) & int((int)255));		HX_STACK_VAR(tmp60,"tmp60");
				HX_STACK_LINE(1004)
				int tmp61 = (tmp59 + tmp60);		HX_STACK_VAR(tmp61,"tmp61");
				HX_STACK_LINE(1004)
				b = tmp61;
				HX_STACK_LINE(1005)
				bool tmp62 = (b > (int)255);		HX_STACK_VAR(tmp62,"tmp62");
				HX_STACK_LINE(1005)
				if ((tmp62)){
					HX_STACK_LINE(1005)
					(b == (int)255);
				}
				HX_STACK_LINE(1007)
				int tmp63 = (int(a) << int((int)24));		HX_STACK_VAR(tmp63,"tmp63");
				HX_STACK_LINE(1007)
				int tmp64 = (int(r) << int((int)16));		HX_STACK_VAR(tmp64,"tmp64");
				HX_STACK_LINE(1007)
				int tmp65 = (int(tmp63) | int(tmp64));		HX_STACK_VAR(tmp65,"tmp65");
				HX_STACK_LINE(1007)
				int tmp66 = (int(g) << int((int)8));		HX_STACK_VAR(tmp66,"tmp66");
				HX_STACK_LINE(1007)
				int tmp67 = (int(tmp65) | int(tmp66));		HX_STACK_VAR(tmp67,"tmp67");
				HX_STACK_LINE(1007)
				int tmp68 = b;		HX_STACK_VAR(tmp68,"tmp68");
				HX_STACK_LINE(1007)
				int tmp69 = (int(tmp67) | int(tmp68));		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1007)
				color = tmp69;
				HX_STACK_LINE(1009)
				int tmp70 = (i * (int)4);		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1009)
				pixels->position = tmp70;
				HX_STACK_LINE(1010)
				int tmp71 = color;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1010)
				pixels->writeUnsignedInt(tmp71);
			}
		}
		HX_STACK_LINE(1014)
		pixels->position = (int)0;
		HX_STACK_LINE(1015)
		::openfl::geom::Rectangle tmp6 = ::openfl::geom::Rectangle_obj::__new(destPoint->x,destPoint->y,sw,sh);		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1015)
		::openfl::geom::Rectangle destRect = tmp6;		HX_STACK_VAR(destRect,"destRect");
		HX_STACK_LINE(1016)
		::openfl::geom::Rectangle tmp7 = destRect;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1016)
		::openfl::utils::ByteArrayData tmp8 = pixels;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1016)
		this->setPixels(tmp7,tmp8);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC7(BitmapData_obj,paletteMap,(void))

Void BitmapData_obj::perlinNoise( Float baseX,Float baseY,int numOctaves,int randomSeed,bool stitch,bool fractalNoise,hx::Null< int >  __o_channelOptions,hx::Null< bool >  __o_grayScale,Array< ::Dynamic > offsets){
int channelOptions = __o_channelOptions.Default(7);
bool grayScale = __o_grayScale.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","perlinNoise",0xc682321b,"openfl.display.BitmapData.perlinNoise","openfl/display/BitmapData.hx",1023,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(baseX,"baseX")
	HX_STACK_ARG(baseY,"baseY")
	HX_STACK_ARG(numOctaves,"numOctaves")
	HX_STACK_ARG(randomSeed,"randomSeed")
	HX_STACK_ARG(stitch,"stitch")
	HX_STACK_ARG(fractalNoise,"fractalNoise")
	HX_STACK_ARG(channelOptions,"channelOptions")
	HX_STACK_ARG(grayScale,"grayScale")
	HX_STACK_ARG(offsets,"offsets")
{
		HX_STACK_LINE(1023)
		::openfl::Lib_obj::notImplemented(HX_HCSTRING("BitmapData.perlinNoise","\x51","\xd2","\x2b","\x27"));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC9(BitmapData_obj,perlinNoise,(void))

Void BitmapData_obj::scroll( int x,int y){
{
		HX_STACK_FRAME("openfl.display.BitmapData","scroll",0x57440678,"openfl.display.BitmapData.scroll","openfl/display/BitmapData.hx",1028,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_LINE(1030)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1030)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1030)
		if ((tmp1)){
			HX_STACK_LINE(1030)
			return null();
		}
		HX_STACK_LINE(1031)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1031)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1031)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1031)
		tmp2->scroll(tmp3,tmp4);
		HX_STACK_LINE(1032)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,scroll,(void))

Void BitmapData_obj::setPixel( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel",0xf9b00eaf,"openfl.display.BitmapData.setPixel","openfl/display/BitmapData.hx",1037,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1039)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1039)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1039)
		if ((tmp1)){
			HX_STACK_LINE(1039)
			return null();
		}
		HX_STACK_LINE(1040)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1040)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1040)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1040)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1040)
		tmp2->setPixel(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1041)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel,(void))

Void BitmapData_obj::setPixel32( int x,int y,int color){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixel32",0xd0d4850e,"openfl.display.BitmapData.setPixel32","openfl/display/BitmapData.hx",1046,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(x,"x")
		HX_STACK_ARG(y,"y")
		HX_STACK_ARG(color,"color")
		HX_STACK_LINE(1048)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1048)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1048)
		if ((tmp1)){
			HX_STACK_LINE(1048)
			return null();
		}
		HX_STACK_LINE(1049)
		::lime::graphics::Image tmp2 = this->image;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1049)
		int tmp3 = x;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1049)
		int tmp4 = y;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1049)
		int tmp5 = color;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1049)
		tmp2->setPixel32(tmp3,tmp4,tmp5,(int)1);
		HX_STACK_LINE(1050)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,setPixel32,(void))

Void BitmapData_obj::setPixels( ::openfl::geom::Rectangle rect,::openfl::utils::ByteArrayData byteArray){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setPixels",0x805ccae4,"openfl.display.BitmapData.setPixels","openfl/display/BitmapData.hx",1055,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(byteArray,"byteArray")
		HX_STACK_LINE(1057)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1057)
		bool tmp1 = tmp;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1057)
		bool tmp2 = !(tmp1);		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1057)
		bool tmp3 = !(tmp2);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1057)
		bool tmp4;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1057)
		if ((tmp3)){
			HX_STACK_LINE(1057)
			tmp4 = (rect == null());
		}
		else{
			HX_STACK_LINE(1057)
			tmp4 = true;
		}
		HX_STACK_LINE(1057)
		if ((tmp4)){
			HX_STACK_LINE(1057)
			return null();
		}
		HX_STACK_LINE(1058)
		::lime::graphics::Image tmp5 = this->image;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1058)
		::lime::math::Rectangle tmp6 = rect->__toLimeRectangle();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1058)
		::openfl::utils::ByteArrayData tmp7 = byteArray;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1058)
		::haxe::io::Bytes tmp8 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1058)
		tmp5->setPixels(tmp6,tmp8,(int)1);
		HX_STACK_LINE(1059)
		this->__usingPingPongTexture = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setPixels,(void))

Void BitmapData_obj::setVector( ::openfl::geom::Rectangle rect,Array< int > inputVector){
{
		HX_STACK_FRAME("openfl.display.BitmapData","setVector",0x8b108c7a,"openfl.display.BitmapData.setVector","openfl/display/BitmapData.hx",1064,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(rect,"rect")
		HX_STACK_ARG(inputVector,"inputVector")
		HX_STACK_LINE(1066)
		::openfl::utils::ByteArrayData tmp;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1066)
		{
			HX_STACK_LINE(1066)
			int length = (int)0;		HX_STACK_VAR(length,"length");
			HX_STACK_LINE(1066)
			::openfl::utils::ByteArrayData tmp1 = ::openfl::utils::ByteArrayData_obj::__new(length);		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1066)
			tmp = tmp1;
		}
		HX_STACK_LINE(1066)
		::openfl::utils::ByteArrayData byteArray = tmp;		HX_STACK_VAR(byteArray,"byteArray");
		HX_STACK_LINE(1067)
		::openfl::utils::ByteArrayData tmp1 = byteArray;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1067)
		int tmp2 = inputVector->length;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1067)
		int tmp3 = (tmp2 * (int)4);		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1067)
		::openfl::utils::_ByteArray::ByteArray_Impl__obj::set_length(tmp1,tmp3);
		HX_STACK_LINE(1069)
		{
			HX_STACK_LINE(1069)
			int _g = (int)0;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(1069)
			while((true)){
				HX_STACK_LINE(1069)
				int tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1069)
				int tmp5 = inputVector->length;		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(1069)
				bool tmp6 = (tmp4 < tmp5);		HX_STACK_VAR(tmp6,"tmp6");
				HX_STACK_LINE(1069)
				bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
				HX_STACK_LINE(1069)
				if ((tmp7)){
					HX_STACK_LINE(1069)
					break;
				}
				HX_STACK_LINE(1069)
				int tmp8 = inputVector->__get(_g);		HX_STACK_VAR(tmp8,"tmp8");
				HX_STACK_LINE(1069)
				Dynamic color = ((Dynamic)(tmp8));		HX_STACK_VAR(color,"color");
				HX_STACK_LINE(1069)
				++(_g);
				HX_STACK_LINE(1071)
				Dynamic tmp9 = color;		HX_STACK_VAR(tmp9,"tmp9");
				HX_STACK_LINE(1071)
				byteArray->writeUnsignedInt(tmp9);
			}
		}
		HX_STACK_LINE(1075)
		byteArray->position = (int)0;
		HX_STACK_LINE(1076)
		::openfl::geom::Rectangle tmp4 = rect;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1076)
		::openfl::utils::ByteArrayData tmp5 = byteArray;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1076)
		this->setPixels(tmp4,tmp5);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,setVector,(void))

int BitmapData_obj::threshold( ::openfl::display::BitmapData sourceBitmapData,::openfl::geom::Rectangle sourceRect,::openfl::geom::Point destPoint,::String operation,int threshold,hx::Null< int >  __o_color,hx::Null< int >  __o_mask,hx::Null< bool >  __o_copySource){
int color = __o_color.Default(0);
int mask = __o_mask.Default(-1);
bool copySource = __o_copySource.Default(false);
	HX_STACK_FRAME("openfl.display.BitmapData","threshold",0xc8af2a20,"openfl.display.BitmapData.threshold","openfl/display/BitmapData.hx",1081,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(sourceBitmapData,"sourceBitmapData")
	HX_STACK_ARG(sourceRect,"sourceRect")
	HX_STACK_ARG(destPoint,"destPoint")
	HX_STACK_ARG(operation,"operation")
	HX_STACK_ARG(threshold,"threshold")
	HX_STACK_ARG(color,"color")
	HX_STACK_ARG(mask,"mask")
	HX_STACK_ARG(copySource,"copySource")
{
		HX_STACK_LINE(1083)
		bool tmp = (sourceBitmapData == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1083)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1083)
		bool tmp2 = tmp1;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1083)
		bool tmp3;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1083)
		if ((tmp2)){
			HX_STACK_LINE(1083)
			tmp3 = (sourceRect == null());
		}
		else{
			HX_STACK_LINE(1083)
			tmp3 = true;
		}
		HX_STACK_LINE(1083)
		bool tmp4 = !(tmp3);		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1083)
		bool tmp5 = tmp4;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1083)
		bool tmp6;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1083)
		if ((tmp5)){
			HX_STACK_LINE(1083)
			tmp6 = (destPoint == null());
		}
		else{
			HX_STACK_LINE(1083)
			tmp6 = true;
		}
		HX_STACK_LINE(1083)
		bool tmp7 = !(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1083)
		bool tmp8 = tmp7;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1083)
		bool tmp9;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1083)
		if ((tmp8)){
			HX_STACK_LINE(1083)
			tmp9 = (sourceRect->x > sourceBitmapData->width);
		}
		else{
			HX_STACK_LINE(1083)
			tmp9 = true;
		}
		HX_STACK_LINE(1083)
		bool tmp10 = !(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1083)
		bool tmp11 = tmp10;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1083)
		bool tmp12;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1083)
		if ((tmp11)){
			HX_STACK_LINE(1083)
			tmp12 = (sourceRect->y > sourceBitmapData->height);
		}
		else{
			HX_STACK_LINE(1083)
			tmp12 = true;
		}
		HX_STACK_LINE(1083)
		bool tmp13 = !(tmp12);		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1083)
		bool tmp14 = tmp13;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1083)
		bool tmp15;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1083)
		if ((tmp14)){
			HX_STACK_LINE(1083)
			Float tmp16 = destPoint->x;		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1083)
			int tmp17 = this->width;		HX_STACK_VAR(tmp17,"tmp17");
			HX_STACK_LINE(1083)
			int tmp18 = tmp17;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1083)
			int tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1083)
			tmp15 = (tmp16 > tmp19);
		}
		else{
			HX_STACK_LINE(1083)
			tmp15 = true;
		}
		HX_STACK_LINE(1083)
		bool tmp16 = !(tmp15);		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1083)
		bool tmp17;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1083)
		if ((tmp16)){
			HX_STACK_LINE(1083)
			Float tmp18 = destPoint->y;		HX_STACK_VAR(tmp18,"tmp18");
			HX_STACK_LINE(1083)
			int tmp19 = this->height;		HX_STACK_VAR(tmp19,"tmp19");
			HX_STACK_LINE(1083)
			int tmp20 = tmp19;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1083)
			tmp17 = (tmp18 > tmp20);
		}
		else{
			HX_STACK_LINE(1083)
			tmp17 = true;
		}
		HX_STACK_LINE(1083)
		if ((tmp17)){
			HX_STACK_LINE(1083)
			return (int)0;
		}
		HX_STACK_LINE(1085)
		bool tmp18 = (sourceBitmapData == hx::ObjectPtr<OBJ_>(this));		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1085)
		bool tmp19 = tmp18;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1085)
		bool tmp20;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1085)
		if ((tmp19)){
			HX_STACK_LINE(1085)
			::openfl::geom::Rectangle tmp21 = this->rect;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1085)
			::openfl::geom::Rectangle tmp22 = tmp21;		HX_STACK_VAR(tmp22,"tmp22");
			HX_STACK_LINE(1085)
			::openfl::geom::Rectangle tmp23 = tmp22;		HX_STACK_VAR(tmp23,"tmp23");
			HX_STACK_LINE(1085)
			::openfl::geom::Rectangle tmp24 = tmp23;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1085)
			::openfl::geom::Rectangle tmp25 = tmp24;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1085)
			tmp20 = sourceRect->equals(tmp25);
		}
		else{
			HX_STACK_LINE(1085)
			tmp20 = false;
		}
		HX_STACK_LINE(1085)
		bool tmp21 = tmp20;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1085)
		bool tmp22;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1085)
		if ((tmp21)){
			HX_STACK_LINE(1085)
			tmp22 = (destPoint->x == (int)0);
		}
		else{
			HX_STACK_LINE(1085)
			tmp22 = false;
		}
		HX_STACK_LINE(1085)
		bool tmp23;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1085)
		if ((tmp22)){
			HX_STACK_LINE(1085)
			tmp23 = (destPoint->y == (int)0);
		}
		else{
			HX_STACK_LINE(1085)
			tmp23 = false;
		}
		HX_STACK_LINE(1085)
		if ((tmp23)){
			HX_STACK_LINE(1087)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1093)
			int tmp24 = this->width;		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1093)
			int tmp25 = this->height;		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1093)
			int tmp26 = (tmp24 * tmp25);		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1093)
			int tmp27 = (tmp26 * (int)4);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1093)
			::openfl::utils::ByteArrayData tmp28 = ::openfl::utils::ByteArrayData_obj::__new(tmp27);		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1093)
			::openfl::utils::ByteArrayData memory = tmp28;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1095)
			::openfl::geom::Rectangle tmp29 = this->rect;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1095)
			::openfl::utils::ByteArrayData tmp30 = this->getPixels(tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1095)
			memory = tmp30;
			HX_STACK_LINE(1096)
			memory->position = (int)0;
			HX_STACK_LINE(1097)
			::openfl::utils::ByteArrayData tmp31 = memory;		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1097)
			::openfl::Memory_obj::select(tmp31);
			HX_STACK_LINE(1099)
			int tmp32 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1099)
			int thresholdMask = tmp32;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1101)
			int width_yy;		HX_STACK_VAR(width_yy,"width_yy");
			HX_STACK_LINE(1101)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1101)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1101)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1101)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1101)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1103)
			{
				HX_STACK_LINE(1103)
				int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
				HX_STACK_LINE(1103)
				int tmp33 = this->height;		HX_STACK_VAR(tmp33,"tmp33");
				HX_STACK_LINE(1103)
				int _g = tmp33;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1103)
				while((true)){
					HX_STACK_LINE(1103)
					bool tmp34 = (_g1 < _g);		HX_STACK_VAR(tmp34,"tmp34");
					HX_STACK_LINE(1103)
					bool tmp35 = !(tmp34);		HX_STACK_VAR(tmp35,"tmp35");
					HX_STACK_LINE(1103)
					if ((tmp35)){
						HX_STACK_LINE(1103)
						break;
					}
					HX_STACK_LINE(1103)
					int tmp36 = (_g1)++;		HX_STACK_VAR(tmp36,"tmp36");
					HX_STACK_LINE(1103)
					int yy = tmp36;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1105)
					int tmp37 = this->width;		HX_STACK_VAR(tmp37,"tmp37");
					HX_STACK_LINE(1105)
					int tmp38 = yy;		HX_STACK_VAR(tmp38,"tmp38");
					HX_STACK_LINE(1105)
					int tmp39 = (tmp37 * tmp38);		HX_STACK_VAR(tmp39,"tmp39");
					HX_STACK_LINE(1105)
					width_yy = tmp39;
					HX_STACK_LINE(1107)
					{
						HX_STACK_LINE(1107)
						int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
						HX_STACK_LINE(1107)
						int tmp40 = this->width;		HX_STACK_VAR(tmp40,"tmp40");
						HX_STACK_LINE(1107)
						int _g2 = tmp40;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1107)
						while((true)){
							HX_STACK_LINE(1107)
							bool tmp41 = (_g3 < _g2);		HX_STACK_VAR(tmp41,"tmp41");
							HX_STACK_LINE(1107)
							bool tmp42 = !(tmp41);		HX_STACK_VAR(tmp42,"tmp42");
							HX_STACK_LINE(1107)
							if ((tmp42)){
								HX_STACK_LINE(1107)
								break;
							}
							HX_STACK_LINE(1107)
							int tmp43 = (_g3)++;		HX_STACK_VAR(tmp43,"tmp43");
							HX_STACK_LINE(1107)
							int xx = tmp43;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1109)
							int tmp44 = (width_yy + xx);		HX_STACK_VAR(tmp44,"tmp44");
							HX_STACK_LINE(1109)
							int tmp45 = (tmp44 * (int)4);		HX_STACK_VAR(tmp45,"tmp45");
							HX_STACK_LINE(1109)
							position = tmp45;
							HX_STACK_LINE(1110)
							int tmp46 = position;		HX_STACK_VAR(tmp46,"tmp46");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1110,0xdd12d5b9)
								{
									HX_STACK_LINE(1110)
									::openfl::utils::ByteArrayData tmp47 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp47,"tmp47");
									HX_STACK_LINE(1110)
									int tmp48 = tmp47->readInt();		HX_STACK_VAR(tmp48,"tmp48");
									HX_STACK_LINE(1110)
									return tmp48;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1110)
							int tmp47 = ::openfl::Memory_obj::_setPositionTemporarily(tmp46, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp47,"tmp47");
							HX_STACK_LINE(1110)
							pixelValue = tmp47;
							HX_STACK_LINE(1111)
							int tmp48 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp48,"tmp48");
							HX_STACK_LINE(1111)
							pixelMask = tmp48;
							HX_STACK_LINE(1113)
							int tmp49 = pixelMask;		HX_STACK_VAR(tmp49,"tmp49");
							HX_STACK_LINE(1113)
							int tmp50 = thresholdMask;		HX_STACK_VAR(tmp50,"tmp50");
							HX_STACK_LINE(1113)
							int tmp51 = ::openfl::display::BitmapData_obj::__ucompare(tmp49,tmp50);		HX_STACK_VAR(tmp51,"tmp51");
							HX_STACK_LINE(1113)
							i = tmp51;
							HX_STACK_LINE(1114)
							test = false;
							HX_STACK_LINE(1116)
							bool tmp52 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp52,"tmp52");
							HX_STACK_LINE(1116)
							if ((tmp52)){
								HX_STACK_LINE(1116)
								bool tmp53 = (i == (int)0);		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1116)
								test = tmp53;
							}
							else{
								HX_STACK_LINE(1117)
								bool tmp53 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp53,"tmp53");
								HX_STACK_LINE(1117)
								if ((tmp53)){
									HX_STACK_LINE(1117)
									bool tmp54 = (i == (int)-1);		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1117)
									test = tmp54;
								}
								else{
									HX_STACK_LINE(1118)
									bool tmp54 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp54,"tmp54");
									HX_STACK_LINE(1118)
									if ((tmp54)){
										HX_STACK_LINE(1118)
										bool tmp55 = (i == (int)1);		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1118)
										test = tmp55;
									}
									else{
										HX_STACK_LINE(1119)
										bool tmp55 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp55,"tmp55");
										HX_STACK_LINE(1119)
										if ((tmp55)){
											HX_STACK_LINE(1119)
											bool tmp56 = (i != (int)0);		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1119)
											test = tmp56;
										}
										else{
											HX_STACK_LINE(1120)
											bool tmp56 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1120)
											if ((tmp56)){
												HX_STACK_LINE(1120)
												bool tmp57 = (i == (int)0);		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1120)
												bool tmp58 = !(tmp57);		HX_STACK_VAR(tmp58,"tmp58");
												HX_STACK_LINE(1120)
												bool tmp59;		HX_STACK_VAR(tmp59,"tmp59");
												HX_STACK_LINE(1120)
												if ((tmp58)){
													HX_STACK_LINE(1120)
													tmp59 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1120)
													tmp59 = true;
												}
												HX_STACK_LINE(1120)
												test = tmp59;
											}
											else{
												HX_STACK_LINE(1121)
												bool tmp57 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp57,"tmp57");
												HX_STACK_LINE(1121)
												if ((tmp57)){
													HX_STACK_LINE(1121)
													bool tmp58 = (i == (int)0);		HX_STACK_VAR(tmp58,"tmp58");
													HX_STACK_LINE(1121)
													bool tmp59 = !(tmp58);		HX_STACK_VAR(tmp59,"tmp59");
													HX_STACK_LINE(1121)
													bool tmp60;		HX_STACK_VAR(tmp60,"tmp60");
													HX_STACK_LINE(1121)
													if ((tmp59)){
														HX_STACK_LINE(1121)
														tmp60 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1121)
														tmp60 = true;
													}
													HX_STACK_LINE(1121)
													test = tmp60;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1123)
							bool tmp53 = test;		HX_STACK_VAR(tmp53,"tmp53");
							HX_STACK_LINE(1123)
							if ((tmp53)){
								HX_STACK_LINE(1125)
								{
									HX_STACK_LINE(1125)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1125)
									int tmp54 = position;		HX_STACK_VAR(tmp54,"tmp54");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1125,0xdd12d5b9)
										{
											HX_STACK_LINE(1125)
											::openfl::utils::ByteArrayData tmp55 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp55,"tmp55");
											HX_STACK_LINE(1125)
											int tmp56 = v;		HX_STACK_VAR(tmp56,"tmp56");
											HX_STACK_LINE(1125)
											tmp55->writeInt(tmp56);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1125)
									::openfl::Memory_obj::_setPositionTemporarily(tmp54, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1126)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1134)
			memory->position = (int)0;
			HX_STACK_LINE(1135)
			::openfl::geom::Rectangle tmp33 = this->rect;		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1135)
			::openfl::utils::ByteArrayData tmp34 = memory;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1135)
			this->setPixels(tmp33,tmp34);
			HX_STACK_LINE(1136)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1137)
			int tmp35 = hits;		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1137)
			return tmp35;
		}
		else{
			HX_STACK_LINE(1141)
			::openfl::geom::Rectangle tmp24 = sourceRect->clone();		HX_STACK_VAR(tmp24,"tmp24");
			HX_STACK_LINE(1141)
			sourceRect = tmp24;
			HX_STACK_LINE(1143)
			Float tmp25 = sourceRect->get_right();		HX_STACK_VAR(tmp25,"tmp25");
			HX_STACK_LINE(1143)
			int tmp26 = sourceBitmapData->width;		HX_STACK_VAR(tmp26,"tmp26");
			HX_STACK_LINE(1143)
			bool tmp27 = (tmp25 > tmp26);		HX_STACK_VAR(tmp27,"tmp27");
			HX_STACK_LINE(1143)
			if ((tmp27)){
				HX_STACK_LINE(1145)
				Float tmp28 = (sourceBitmapData->width - sourceRect->x);		HX_STACK_VAR(tmp28,"tmp28");
				HX_STACK_LINE(1145)
				sourceRect->width = tmp28;
			}
			HX_STACK_LINE(1149)
			Float tmp28 = sourceRect->get_bottom();		HX_STACK_VAR(tmp28,"tmp28");
			HX_STACK_LINE(1149)
			int tmp29 = sourceBitmapData->height;		HX_STACK_VAR(tmp29,"tmp29");
			HX_STACK_LINE(1149)
			bool tmp30 = (tmp28 > tmp29);		HX_STACK_VAR(tmp30,"tmp30");
			HX_STACK_LINE(1149)
			if ((tmp30)){
				HX_STACK_LINE(1151)
				Float tmp31 = (sourceBitmapData->height - sourceRect->y);		HX_STACK_VAR(tmp31,"tmp31");
				HX_STACK_LINE(1151)
				sourceRect->height = tmp31;
			}
			HX_STACK_LINE(1155)
			::openfl::geom::Rectangle tmp31 = sourceRect->clone();		HX_STACK_VAR(tmp31,"tmp31");
			HX_STACK_LINE(1155)
			::openfl::geom::Rectangle targetRect = tmp31;		HX_STACK_VAR(targetRect,"targetRect");
			HX_STACK_LINE(1156)
			::openfl::geom::Point tmp32 = destPoint;		HX_STACK_VAR(tmp32,"tmp32");
			HX_STACK_LINE(1156)
			targetRect->offsetPoint(tmp32);
			HX_STACK_LINE(1158)
			Float tmp33 = targetRect->get_right();		HX_STACK_VAR(tmp33,"tmp33");
			HX_STACK_LINE(1158)
			int tmp34 = this->width;		HX_STACK_VAR(tmp34,"tmp34");
			HX_STACK_LINE(1158)
			bool tmp35 = (tmp33 > tmp34);		HX_STACK_VAR(tmp35,"tmp35");
			HX_STACK_LINE(1158)
			if ((tmp35)){
				HX_STACK_LINE(1160)
				int tmp36 = this->width;		HX_STACK_VAR(tmp36,"tmp36");
				HX_STACK_LINE(1160)
				Float tmp37 = targetRect->x;		HX_STACK_VAR(tmp37,"tmp37");
				HX_STACK_LINE(1160)
				Float tmp38 = (tmp36 - tmp37);		HX_STACK_VAR(tmp38,"tmp38");
				HX_STACK_LINE(1160)
				targetRect->width = tmp38;
			}
			HX_STACK_LINE(1164)
			Float tmp36 = targetRect->get_bottom();		HX_STACK_VAR(tmp36,"tmp36");
			HX_STACK_LINE(1164)
			int tmp37 = this->height;		HX_STACK_VAR(tmp37,"tmp37");
			HX_STACK_LINE(1164)
			bool tmp38 = (tmp36 > tmp37);		HX_STACK_VAR(tmp38,"tmp38");
			HX_STACK_LINE(1164)
			if ((tmp38)){
				HX_STACK_LINE(1166)
				int tmp39 = this->height;		HX_STACK_VAR(tmp39,"tmp39");
				HX_STACK_LINE(1166)
				Float tmp40 = targetRect->y;		HX_STACK_VAR(tmp40,"tmp40");
				HX_STACK_LINE(1166)
				Float tmp41 = (tmp39 - tmp40);		HX_STACK_VAR(tmp41,"tmp41");
				HX_STACK_LINE(1166)
				targetRect->height = tmp41;
			}
			HX_STACK_LINE(1170)
			Float tmp39 = sourceRect->width;		HX_STACK_VAR(tmp39,"tmp39");
			HX_STACK_LINE(1170)
			Float tmp40 = targetRect->width;		HX_STACK_VAR(tmp40,"tmp40");
			HX_STACK_LINE(1170)
			Float tmp41 = ::Math_obj::min(tmp39,tmp40);		HX_STACK_VAR(tmp41,"tmp41");
			HX_STACK_LINE(1170)
			sourceRect->width = tmp41;
			HX_STACK_LINE(1171)
			Float tmp42 = sourceRect->height;		HX_STACK_VAR(tmp42,"tmp42");
			HX_STACK_LINE(1171)
			Float tmp43 = targetRect->height;		HX_STACK_VAR(tmp43,"tmp43");
			HX_STACK_LINE(1171)
			Float tmp44 = ::Math_obj::min(tmp42,tmp43);		HX_STACK_VAR(tmp44,"tmp44");
			HX_STACK_LINE(1171)
			sourceRect->height = tmp44;
			HX_STACK_LINE(1173)
			Float tmp45 = sourceRect->x;		HX_STACK_VAR(tmp45,"tmp45");
			HX_STACK_LINE(1173)
			int tmp46 = ::Std_obj::_int(tmp45);		HX_STACK_VAR(tmp46,"tmp46");
			HX_STACK_LINE(1173)
			int sx = tmp46;		HX_STACK_VAR(sx,"sx");
			HX_STACK_LINE(1174)
			Float tmp47 = sourceRect->y;		HX_STACK_VAR(tmp47,"tmp47");
			HX_STACK_LINE(1174)
			int tmp48 = ::Std_obj::_int(tmp47);		HX_STACK_VAR(tmp48,"tmp48");
			HX_STACK_LINE(1174)
			int sy = tmp48;		HX_STACK_VAR(sy,"sy");
			HX_STACK_LINE(1175)
			Float tmp49 = sourceRect->width;		HX_STACK_VAR(tmp49,"tmp49");
			HX_STACK_LINE(1175)
			int tmp50 = ::Std_obj::_int(tmp49);		HX_STACK_VAR(tmp50,"tmp50");
			HX_STACK_LINE(1175)
			int sw = tmp50;		HX_STACK_VAR(sw,"sw");
			HX_STACK_LINE(1176)
			Float tmp51 = sourceRect->height;		HX_STACK_VAR(tmp51,"tmp51");
			HX_STACK_LINE(1176)
			int tmp52 = ::Std_obj::_int(tmp51);		HX_STACK_VAR(tmp52,"tmp52");
			HX_STACK_LINE(1176)
			int sh = tmp52;		HX_STACK_VAR(sh,"sh");
			HX_STACK_LINE(1178)
			Float tmp53 = destPoint->x;		HX_STACK_VAR(tmp53,"tmp53");
			HX_STACK_LINE(1178)
			int tmp54 = ::Std_obj::_int(tmp53);		HX_STACK_VAR(tmp54,"tmp54");
			HX_STACK_LINE(1178)
			int dx = tmp54;		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(1179)
			Float tmp55 = destPoint->y;		HX_STACK_VAR(tmp55,"tmp55");
			HX_STACK_LINE(1179)
			int tmp56 = ::Std_obj::_int(tmp55);		HX_STACK_VAR(tmp56,"tmp56");
			HX_STACK_LINE(1179)
			int dy = tmp56;		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(1181)
			int tmp57 = this->width;		HX_STACK_VAR(tmp57,"tmp57");
			HX_STACK_LINE(1181)
			int tmp58 = sw;		HX_STACK_VAR(tmp58,"tmp58");
			HX_STACK_LINE(1181)
			int tmp59 = (tmp57 - tmp58);		HX_STACK_VAR(tmp59,"tmp59");
			HX_STACK_LINE(1181)
			int tmp60 = dx;		HX_STACK_VAR(tmp60,"tmp60");
			HX_STACK_LINE(1181)
			int tmp61 = (tmp59 - tmp60);		HX_STACK_VAR(tmp61,"tmp61");
			HX_STACK_LINE(1181)
			int bw = tmp61;		HX_STACK_VAR(bw,"bw");
			HX_STACK_LINE(1182)
			int tmp62 = this->height;		HX_STACK_VAR(tmp62,"tmp62");
			HX_STACK_LINE(1182)
			int tmp63 = sh;		HX_STACK_VAR(tmp63,"tmp63");
			HX_STACK_LINE(1182)
			int tmp64 = (tmp62 - tmp63);		HX_STACK_VAR(tmp64,"tmp64");
			HX_STACK_LINE(1182)
			int tmp65 = dy;		HX_STACK_VAR(tmp65,"tmp65");
			HX_STACK_LINE(1182)
			int tmp66 = (tmp64 - tmp65);		HX_STACK_VAR(tmp66,"tmp66");
			HX_STACK_LINE(1182)
			int bh = tmp66;		HX_STACK_VAR(bh,"bh");
			HX_STACK_LINE(1184)
			bool tmp67 = (bw < (int)0);		HX_STACK_VAR(tmp67,"tmp67");
			HX_STACK_LINE(1184)
			int tmp68;		HX_STACK_VAR(tmp68,"tmp68");
			HX_STACK_LINE(1184)
			if ((tmp67)){
				HX_STACK_LINE(1184)
				int tmp69 = sw;		HX_STACK_VAR(tmp69,"tmp69");
				HX_STACK_LINE(1184)
				int tmp70 = this->width;		HX_STACK_VAR(tmp70,"tmp70");
				HX_STACK_LINE(1184)
				int tmp71 = sw;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1184)
				int tmp72 = (tmp70 - tmp71);		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1184)
				int tmp73 = dx;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1184)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1184)
				tmp68 = (tmp69 + tmp74);
			}
			else{
				HX_STACK_LINE(1184)
				tmp68 = sw;
			}
			HX_STACK_LINE(1184)
			int dw = tmp68;		HX_STACK_VAR(dw,"dw");
			HX_STACK_LINE(1185)
			bool tmp69 = (bw < (int)0);		HX_STACK_VAR(tmp69,"tmp69");
			HX_STACK_LINE(1185)
			int tmp70;		HX_STACK_VAR(tmp70,"tmp70");
			HX_STACK_LINE(1185)
			if ((tmp69)){
				HX_STACK_LINE(1185)
				int tmp71 = sh;		HX_STACK_VAR(tmp71,"tmp71");
				HX_STACK_LINE(1185)
				int tmp72 = this->height;		HX_STACK_VAR(tmp72,"tmp72");
				HX_STACK_LINE(1185)
				int tmp73 = sh;		HX_STACK_VAR(tmp73,"tmp73");
				HX_STACK_LINE(1185)
				int tmp74 = (tmp72 - tmp73);		HX_STACK_VAR(tmp74,"tmp74");
				HX_STACK_LINE(1185)
				int tmp75 = dy;		HX_STACK_VAR(tmp75,"tmp75");
				HX_STACK_LINE(1185)
				int tmp76 = (tmp74 - tmp75);		HX_STACK_VAR(tmp76,"tmp76");
				HX_STACK_LINE(1185)
				tmp70 = (tmp71 + tmp76);
			}
			else{
				HX_STACK_LINE(1185)
				tmp70 = sh;
			}
			HX_STACK_LINE(1185)
			int dh = tmp70;		HX_STACK_VAR(dh,"dh");
			HX_STACK_LINE(1187)
			int hits = (int)0;		HX_STACK_VAR(hits,"hits");
			HX_STACK_LINE(1189)
			int tmp71 = (sw * sh);		HX_STACK_VAR(tmp71,"tmp71");
			HX_STACK_LINE(1189)
			int tmp72 = (tmp71 * (int)4);		HX_STACK_VAR(tmp72,"tmp72");
			HX_STACK_LINE(1189)
			int canvasMemory = tmp72;		HX_STACK_VAR(canvasMemory,"canvasMemory");
			HX_STACK_LINE(1190)
			int tmp73 = (sw * sh);		HX_STACK_VAR(tmp73,"tmp73");
			HX_STACK_LINE(1190)
			int tmp74 = (tmp73 * (int)4);		HX_STACK_VAR(tmp74,"tmp74");
			HX_STACK_LINE(1190)
			int sourceMemory = tmp74;		HX_STACK_VAR(sourceMemory,"sourceMemory");
			HX_STACK_LINE(1191)
			int tmp75 = (canvasMemory + sourceMemory);		HX_STACK_VAR(tmp75,"tmp75");
			HX_STACK_LINE(1191)
			int totalMemory = tmp75;		HX_STACK_VAR(totalMemory,"totalMemory");
			HX_STACK_LINE(1197)
			::openfl::utils::ByteArrayData tmp76 = ::openfl::utils::ByteArrayData_obj::__new(totalMemory);		HX_STACK_VAR(tmp76,"tmp76");
			HX_STACK_LINE(1197)
			::openfl::utils::ByteArrayData memory = tmp76;		HX_STACK_VAR(memory,"memory");
			HX_STACK_LINE(1200)
			memory->position = (int)0;
			HX_STACK_LINE(1202)
			::openfl::geom::Rectangle tmp77 = sourceRect;		HX_STACK_VAR(tmp77,"tmp77");
			HX_STACK_LINE(1202)
			::openfl::utils::ByteArrayData tmp78 = sourceBitmapData->getPixels(tmp77);		HX_STACK_VAR(tmp78,"tmp78");
			HX_STACK_LINE(1202)
			::openfl::utils::ByteArrayData pixels = tmp78;		HX_STACK_VAR(pixels,"pixels");
			HX_STACK_LINE(1204)
			bool tmp79 = copySource;		HX_STACK_VAR(tmp79,"tmp79");
			HX_STACK_LINE(1204)
			if ((tmp79)){
				HX_STACK_LINE(1206)
				::openfl::utils::ByteArrayData tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1206)
				memory->writeBytes(tmp80,null(),null());
			}
			else{
				HX_STACK_LINE(1210)
				::openfl::geom::Rectangle tmp80 = targetRect;		HX_STACK_VAR(tmp80,"tmp80");
				HX_STACK_LINE(1210)
				::openfl::utils::ByteArrayData tmp81 = this->getPixels(tmp80);		HX_STACK_VAR(tmp81,"tmp81");
				HX_STACK_LINE(1210)
				memory->writeBytes(tmp81,null(),null());
			}
			HX_STACK_LINE(1214)
			memory->position = canvasMemory;
			HX_STACK_LINE(1215)
			::openfl::utils::ByteArrayData tmp80 = pixels;		HX_STACK_VAR(tmp80,"tmp80");
			HX_STACK_LINE(1215)
			memory->writeBytes(tmp80,null(),null());
			HX_STACK_LINE(1217)
			memory->position = (int)0;
			HX_STACK_LINE(1218)
			::openfl::utils::ByteArrayData tmp81 = memory;		HX_STACK_VAR(tmp81,"tmp81");
			HX_STACK_LINE(1218)
			::openfl::Memory_obj::select(tmp81);
			HX_STACK_LINE(1220)
			int tmp82 = (int(threshold) & int(mask));		HX_STACK_VAR(tmp82,"tmp82");
			HX_STACK_LINE(1220)
			int thresholdMask = tmp82;		HX_STACK_VAR(thresholdMask,"thresholdMask");
			HX_STACK_LINE(1222)
			int position;		HX_STACK_VAR(position,"position");
			HX_STACK_LINE(1222)
			int pixelMask;		HX_STACK_VAR(pixelMask,"pixelMask");
			HX_STACK_LINE(1222)
			int pixelValue;		HX_STACK_VAR(pixelValue,"pixelValue");
			HX_STACK_LINE(1222)
			int i;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(1222)
			bool test;		HX_STACK_VAR(test,"test");
			HX_STACK_LINE(1224)
			{
				HX_STACK_LINE(1224)
				int _g = (int)0;		HX_STACK_VAR(_g,"_g");
				HX_STACK_LINE(1224)
				while((true)){
					HX_STACK_LINE(1224)
					bool tmp83 = (_g < dh);		HX_STACK_VAR(tmp83,"tmp83");
					HX_STACK_LINE(1224)
					bool tmp84 = !(tmp83);		HX_STACK_VAR(tmp84,"tmp84");
					HX_STACK_LINE(1224)
					if ((tmp84)){
						HX_STACK_LINE(1224)
						break;
					}
					HX_STACK_LINE(1224)
					int tmp85 = (_g)++;		HX_STACK_VAR(tmp85,"tmp85");
					HX_STACK_LINE(1224)
					int yy = tmp85;		HX_STACK_VAR(yy,"yy");
					HX_STACK_LINE(1226)
					{
						HX_STACK_LINE(1226)
						int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1226)
						while((true)){
							HX_STACK_LINE(1226)
							bool tmp86 = (_g1 < dw);		HX_STACK_VAR(tmp86,"tmp86");
							HX_STACK_LINE(1226)
							bool tmp87 = !(tmp86);		HX_STACK_VAR(tmp87,"tmp87");
							HX_STACK_LINE(1226)
							if ((tmp87)){
								HX_STACK_LINE(1226)
								break;
							}
							HX_STACK_LINE(1226)
							int tmp88 = (_g1)++;		HX_STACK_VAR(tmp88,"tmp88");
							HX_STACK_LINE(1226)
							int xx = tmp88;		HX_STACK_VAR(xx,"xx");
							HX_STACK_LINE(1228)
							int tmp89 = (xx + sx);		HX_STACK_VAR(tmp89,"tmp89");
							HX_STACK_LINE(1228)
							int tmp90 = (yy + sy);		HX_STACK_VAR(tmp90,"tmp90");
							HX_STACK_LINE(1228)
							int tmp91 = sw;		HX_STACK_VAR(tmp91,"tmp91");
							HX_STACK_LINE(1228)
							int tmp92 = (tmp90 * tmp91);		HX_STACK_VAR(tmp92,"tmp92");
							HX_STACK_LINE(1228)
							int tmp93 = (tmp89 + tmp92);		HX_STACK_VAR(tmp93,"tmp93");
							HX_STACK_LINE(1228)
							int tmp94 = (tmp93 * (int)4);		HX_STACK_VAR(tmp94,"tmp94");
							HX_STACK_LINE(1228)
							position = tmp94;
							HX_STACK_LINE(1229)
							int tmp95 = (canvasMemory + position);		HX_STACK_VAR(tmp95,"tmp95");

							HX_BEGIN_LOCAL_FUNC_S0(hx::LocalFunc,_Function_6_1)
							int __ArgCount() const { return 0; }
							int run(){
								HX_STACK_FRAME("*","_Function_6_1",0x5204b87c,"*._Function_6_1","openfl/display/BitmapData.hx",1229,0xdd12d5b9)
								{
									HX_STACK_LINE(1229)
									::openfl::utils::ByteArrayData tmp96 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp96,"tmp96");
									HX_STACK_LINE(1229)
									int tmp97 = tmp96->readInt();		HX_STACK_VAR(tmp97,"tmp97");
									HX_STACK_LINE(1229)
									return tmp97;
								}
								return null();
							}
							HX_END_LOCAL_FUNC0(return)

							HX_STACK_LINE(1229)
							int tmp96 = ::openfl::Memory_obj::_setPositionTemporarily(tmp95, Dynamic(new _Function_6_1()));		HX_STACK_VAR(tmp96,"tmp96");
							HX_STACK_LINE(1229)
							pixelValue = tmp96;
							HX_STACK_LINE(1230)
							int tmp97 = (int(pixelValue) & int(mask));		HX_STACK_VAR(tmp97,"tmp97");
							HX_STACK_LINE(1230)
							pixelMask = tmp97;
							HX_STACK_LINE(1232)
							int tmp98 = pixelMask;		HX_STACK_VAR(tmp98,"tmp98");
							HX_STACK_LINE(1232)
							int tmp99 = thresholdMask;		HX_STACK_VAR(tmp99,"tmp99");
							HX_STACK_LINE(1232)
							int tmp100 = ::openfl::display::BitmapData_obj::__ucompare(tmp98,tmp99);		HX_STACK_VAR(tmp100,"tmp100");
							HX_STACK_LINE(1232)
							i = tmp100;
							HX_STACK_LINE(1233)
							test = false;
							HX_STACK_LINE(1235)
							bool tmp101 = (operation == HX_HCSTRING("==","\x60","\x35","\x00","\x00"));		HX_STACK_VAR(tmp101,"tmp101");
							HX_STACK_LINE(1235)
							if ((tmp101)){
								HX_STACK_LINE(1235)
								bool tmp102 = (i == (int)0);		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1235)
								test = tmp102;
							}
							else{
								HX_STACK_LINE(1236)
								bool tmp102 = (operation == HX_HCSTRING("<","\x3c","\x00","\x00","\x00"));		HX_STACK_VAR(tmp102,"tmp102");
								HX_STACK_LINE(1236)
								if ((tmp102)){
									HX_STACK_LINE(1236)
									bool tmp103 = (i == (int)-1);		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1236)
									test = tmp103;
								}
								else{
									HX_STACK_LINE(1237)
									bool tmp103 = (operation == HX_HCSTRING(">","\x3e","\x00","\x00","\x00"));		HX_STACK_VAR(tmp103,"tmp103");
									HX_STACK_LINE(1237)
									if ((tmp103)){
										HX_STACK_LINE(1237)
										bool tmp104 = (i == (int)1);		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1237)
										test = tmp104;
									}
									else{
										HX_STACK_LINE(1238)
										bool tmp104 = (operation == HX_HCSTRING("!=","\xfc","\x1c","\x00","\x00"));		HX_STACK_VAR(tmp104,"tmp104");
										HX_STACK_LINE(1238)
										if ((tmp104)){
											HX_STACK_LINE(1238)
											bool tmp105 = (i != (int)0);		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1238)
											test = tmp105;
										}
										else{
											HX_STACK_LINE(1239)
											bool tmp105 = (operation == HX_HCSTRING("<=","\x81","\x34","\x00","\x00"));		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1239)
											if ((tmp105)){
												HX_STACK_LINE(1239)
												bool tmp106 = (i == (int)0);		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1239)
												bool tmp107 = !(tmp106);		HX_STACK_VAR(tmp107,"tmp107");
												HX_STACK_LINE(1239)
												bool tmp108;		HX_STACK_VAR(tmp108,"tmp108");
												HX_STACK_LINE(1239)
												if ((tmp107)){
													HX_STACK_LINE(1239)
													tmp108 = (i == (int)-1);
												}
												else{
													HX_STACK_LINE(1239)
													tmp108 = true;
												}
												HX_STACK_LINE(1239)
												test = tmp108;
											}
											else{
												HX_STACK_LINE(1240)
												bool tmp106 = (operation == HX_HCSTRING(">=","\x3f","\x36","\x00","\x00"));		HX_STACK_VAR(tmp106,"tmp106");
												HX_STACK_LINE(1240)
												if ((tmp106)){
													HX_STACK_LINE(1240)
													bool tmp107 = (i == (int)0);		HX_STACK_VAR(tmp107,"tmp107");
													HX_STACK_LINE(1240)
													bool tmp108 = !(tmp107);		HX_STACK_VAR(tmp108,"tmp108");
													HX_STACK_LINE(1240)
													bool tmp109;		HX_STACK_VAR(tmp109,"tmp109");
													HX_STACK_LINE(1240)
													if ((tmp108)){
														HX_STACK_LINE(1240)
														tmp109 = (i == (int)1);
													}
													else{
														HX_STACK_LINE(1240)
														tmp109 = true;
													}
													HX_STACK_LINE(1240)
													test = tmp109;
												}
											}
										}
									}
								}
							}
							HX_STACK_LINE(1242)
							bool tmp102 = test;		HX_STACK_VAR(tmp102,"tmp102");
							HX_STACK_LINE(1242)
							if ((tmp102)){
								HX_STACK_LINE(1244)
								{
									HX_STACK_LINE(1244)
									int v = color;		HX_STACK_VAR(v,"v");
									HX_STACK_LINE(1244)
									int tmp103 = position;		HX_STACK_VAR(tmp103,"tmp103");

									HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_Function_8_1,int,v)
									int __ArgCount() const { return 0; }
									Void run(){
										HX_STACK_FRAME("*","_Function_8_1",0x52063cfe,"*._Function_8_1","openfl/display/BitmapData.hx",1244,0xdd12d5b9)
										{
											HX_STACK_LINE(1244)
											::openfl::utils::ByteArrayData tmp104 = ::openfl::Memory_obj::gcRef;		HX_STACK_VAR(tmp104,"tmp104");
											HX_STACK_LINE(1244)
											int tmp105 = v;		HX_STACK_VAR(tmp105,"tmp105");
											HX_STACK_LINE(1244)
											tmp104->writeInt(tmp105);
										}
										return null();
									}
									HX_END_LOCAL_FUNC0((void))

									HX_STACK_LINE(1244)
									::openfl::Memory_obj::_setPositionTemporarily(tmp103, Dynamic(new _Function_8_1(v)));
								}
								HX_STACK_LINE(1245)
								(hits)++;
							}
						}
					}
				}
			}
			HX_STACK_LINE(1253)
			memory->position = (int)0;
			HX_STACK_LINE(1254)
			::openfl::geom::Rectangle tmp83 = targetRect;		HX_STACK_VAR(tmp83,"tmp83");
			HX_STACK_LINE(1254)
			::openfl::utils::ByteArrayData tmp84 = memory;		HX_STACK_VAR(tmp84,"tmp84");
			HX_STACK_LINE(1254)
			this->setPixels(tmp83,tmp84);
			HX_STACK_LINE(1255)
			::openfl::Memory_obj::select(null());
			HX_STACK_LINE(1256)
			int tmp85 = hits;		HX_STACK_VAR(tmp85,"tmp85");
			HX_STACK_LINE(1256)
			return tmp85;
		}
		HX_STACK_LINE(1085)
		return (int)0;
	}
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,threshold,return )

Void BitmapData_obj::unlock( ::openfl::geom::Rectangle changeRect){
{
		HX_STACK_FRAME("openfl.display.BitmapData","unlock",0x756bd12f,"openfl.display.BitmapData.unlock","openfl/display/BitmapData.hx",1263,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(changeRect,"changeRect")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,unlock,(void))

Void BitmapData_obj::__createUVs( hx::Null< Float >  __o_x0,hx::Null< Float >  __o_y0,hx::Null< Float >  __o_x1,hx::Null< Float >  __o_y1,hx::Null< Float >  __o_x2,hx::Null< Float >  __o_y2,hx::Null< Float >  __o_x3,hx::Null< Float >  __o_y3){
Float x0 = __o_x0.Default(0);
Float y0 = __o_y0.Default(0);
Float x1 = __o_x1.Default(1);
Float y1 = __o_y1.Default(0);
Float x2 = __o_x2.Default(1);
Float y2 = __o_y2.Default(1);
Float x3 = __o_x3.Default(0);
Float y3 = __o_y3.Default(1);
	HX_STACK_FRAME("openfl.display.BitmapData","__createUVs",0xb29ce00b,"openfl.display.BitmapData.__createUVs","openfl/display/BitmapData.hx",1279,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(x0,"x0")
	HX_STACK_ARG(y0,"y0")
	HX_STACK_ARG(x1,"x1")
	HX_STACK_ARG(y1,"y1")
	HX_STACK_ARG(x2,"x2")
	HX_STACK_ARG(y2,"y2")
	HX_STACK_ARG(x3,"x3")
	HX_STACK_ARG(y3,"y3")
{
		HX_STACK_LINE(1281)
		::openfl::display::TextureUvs tmp = this->__uvData;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1281)
		bool tmp1 = (tmp == null());		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1281)
		if ((tmp1)){
			HX_STACK_LINE(1281)
			::openfl::display::TextureUvs tmp2 = ::openfl::display::TextureUvs_obj::__new();		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1281)
			this->__uvData = tmp2;
		}
		HX_STACK_LINE(1283)
		::openfl::display::TextureUvs tmp2 = this->__uvData;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1283)
		tmp2->x0 = x0;
		HX_STACK_LINE(1284)
		::openfl::display::TextureUvs tmp3 = this->__uvData;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1284)
		tmp3->y0 = y0;
		HX_STACK_LINE(1285)
		::openfl::display::TextureUvs tmp4 = this->__uvData;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1285)
		tmp4->x1 = x1;
		HX_STACK_LINE(1286)
		::openfl::display::TextureUvs tmp5 = this->__uvData;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1286)
		tmp5->y1 = y1;
		HX_STACK_LINE(1287)
		::openfl::display::TextureUvs tmp6 = this->__uvData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1287)
		tmp6->x2 = x2;
		HX_STACK_LINE(1288)
		::openfl::display::TextureUvs tmp7 = this->__uvData;		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1288)
		tmp7->y2 = y2;
		HX_STACK_LINE(1289)
		::openfl::display::TextureUvs tmp8 = this->__uvData;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1289)
		tmp8->x3 = x3;
		HX_STACK_LINE(1290)
		::openfl::display::TextureUvs tmp9 = this->__uvData;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1290)
		tmp9->y3 = y3;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(BitmapData_obj,__createUVs,(void))

Void BitmapData_obj::__drawGL( ::openfl::_internal::renderer::RenderSession renderSession,::openfl::display::IBitmapDrawable source,::openfl::geom::Matrix matrix,::openfl::geom::ColorTransform colorTransform,::openfl::display::BlendMode blendMode,::openfl::geom::Rectangle clipRect,Dynamic __o_smoothing,Dynamic __o_drawSelf,Dynamic __o_clearBuffer,Dynamic __o_readPixels,Dynamic __o_powerOfTwo){
Dynamic smoothing = __o_smoothing.Default(false);
Dynamic drawSelf = __o_drawSelf.Default(false);
Dynamic clearBuffer = __o_clearBuffer.Default(false);
Dynamic readPixels = __o_readPixels.Default(false);
Dynamic powerOfTwo = __o_powerOfTwo.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","__drawGL",0xb0ddbd74,"openfl.display.BitmapData.__drawGL","openfl/display/BitmapData.hx",1368,0xdd12d5b9)
	HX_STACK_THIS(this)
	HX_STACK_ARG(renderSession,"renderSession")
	HX_STACK_ARG(source,"source")
	HX_STACK_ARG(matrix,"matrix")
	HX_STACK_ARG(colorTransform,"colorTransform")
	HX_STACK_ARG(blendMode,"blendMode")
	HX_STACK_ARG(clipRect,"clipRect")
	HX_STACK_ARG(smoothing,"smoothing")
	HX_STACK_ARG(drawSelf,"drawSelf")
	HX_STACK_ARG(clearBuffer,"clearBuffer")
	HX_STACK_ARG(readPixels,"readPixels")
	HX_STACK_ARG(powerOfTwo,"powerOfTwo")
{
		HX_STACK_LINE(1370)
		::openfl::_internal::renderer::RenderSession tmp = renderSession;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1370)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp1 = this->__pingPongTexture;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1370)
		::openfl::geom::Rectangle tmp2 = this->rect;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1370)
		Dynamic tmp3 = smoothing;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1370)
		bool tmp4 = this->transparent;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1370)
		Dynamic tmp5 = clearBuffer;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1370)
		Dynamic tmp6 = powerOfTwo;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1370)
		::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp7 = ::openfl::_internal::renderer::opengl::GLBitmap_obj::pushFramebuffer(tmp,tmp1,tmp2,tmp3,tmp4,tmp5,tmp6);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1370)
		this->__pingPongTexture = tmp7;
		HX_STACK_LINE(1371)
		::openfl::_internal::renderer::RenderSession tmp8 = renderSession;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1371)
		Dynamic tmp9 = drawSelf;		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1371)
		::openfl::display::BitmapData tmp10;		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1371)
		if ((tmp9)){
			HX_STACK_LINE(1371)
			tmp10 = hx::ObjectPtr<OBJ_>(this);
		}
		else{
			HX_STACK_LINE(1371)
			tmp10 = null();
		}
		HX_STACK_LINE(1371)
		::openfl::display::IBitmapDrawable tmp11 = source;		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1371)
		::openfl::geom::Matrix tmp12 = matrix;		HX_STACK_VAR(tmp12,"tmp12");
		HX_STACK_LINE(1371)
		::openfl::geom::ColorTransform tmp13 = colorTransform;		HX_STACK_VAR(tmp13,"tmp13");
		HX_STACK_LINE(1371)
		::openfl::display::BlendMode tmp14 = blendMode;		HX_STACK_VAR(tmp14,"tmp14");
		HX_STACK_LINE(1371)
		::openfl::geom::Rectangle tmp15 = clipRect;		HX_STACK_VAR(tmp15,"tmp15");
		HX_STACK_LINE(1371)
		::openfl::_internal::renderer::opengl::GLBitmap_obj::drawBitmapDrawable(tmp8,tmp10,tmp11,tmp12,tmp13,tmp14,tmp15);
		HX_STACK_LINE(1372)
		::openfl::_internal::renderer::RenderSession tmp16 = renderSession;		HX_STACK_VAR(tmp16,"tmp16");
		HX_STACK_LINE(1372)
		Dynamic tmp17 = readPixels;		HX_STACK_VAR(tmp17,"tmp17");
		HX_STACK_LINE(1372)
		::lime::graphics::Image tmp18;		HX_STACK_VAR(tmp18,"tmp18");
		HX_STACK_LINE(1372)
		if ((tmp17)){
			HX_STACK_LINE(1372)
			tmp18 = this->image;
		}
		else{
			HX_STACK_LINE(1372)
			tmp18 = null();
		}
		HX_STACK_LINE(1372)
		::openfl::_internal::renderer::opengl::GLBitmap_obj::popFramebuffer(tmp16,tmp18);
		HX_STACK_LINE(1374)
		::openfl::_internal::renderer::opengl::utils::RenderTexture tmp19;		HX_STACK_VAR(tmp19,"tmp19");
		HX_STACK_LINE(1374)
		{
			HX_STACK_LINE(1374)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture tmp20 = this->__pingPongTexture;		HX_STACK_VAR(tmp20,"tmp20");
			HX_STACK_LINE(1374)
			::openfl::_internal::renderer::opengl::utils::PingPongTexture _this = tmp20;		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(1374)
			bool tmp21 = _this->__swapped;		HX_STACK_VAR(tmp21,"tmp21");
			HX_STACK_LINE(1374)
			if ((tmp21)){
				HX_STACK_LINE(1374)
				tmp19 = _this->__texture1;
			}
			else{
				HX_STACK_LINE(1374)
				tmp19 = _this->__texture0;
			}
		}
		HX_STACK_LINE(1374)
		::openfl::display::TextureUvs uv = tmp19->__uvData;		HX_STACK_VAR(uv,"uv");
		HX_STACK_LINE(1375)
		Float tmp20 = uv->x0;		HX_STACK_VAR(tmp20,"tmp20");
		HX_STACK_LINE(1375)
		Float tmp21 = uv->y0;		HX_STACK_VAR(tmp21,"tmp21");
		HX_STACK_LINE(1375)
		Float tmp22 = uv->x1;		HX_STACK_VAR(tmp22,"tmp22");
		HX_STACK_LINE(1375)
		Float tmp23 = uv->y1;		HX_STACK_VAR(tmp23,"tmp23");
		HX_STACK_LINE(1375)
		Float tmp24 = uv->x2;		HX_STACK_VAR(tmp24,"tmp24");
		HX_STACK_LINE(1375)
		Float tmp25 = uv->y2;		HX_STACK_VAR(tmp25,"tmp25");
		HX_STACK_LINE(1375)
		Float tmp26 = uv->x3;		HX_STACK_VAR(tmp26,"tmp26");
		HX_STACK_LINE(1375)
		Float tmp27 = uv->y3;		HX_STACK_VAR(tmp27,"tmp27");
		HX_STACK_LINE(1375)
		this->__createUVs(tmp20,tmp21,tmp22,tmp23,tmp24,tmp25,tmp26,tmp27);
		HX_STACK_LINE(1377)
		this->__isValid = true;
		HX_STACK_LINE(1378)
		this->__usingPingPongTexture = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC11(BitmapData_obj,__drawGL,(void))

Void BitmapData_obj::__fromBase64( ::String base64,::String type,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBase64",0xceedce64,"openfl.display.BitmapData.__fromBase64","openfl/display/BitmapData.hx",1383,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(base64,"base64")
		HX_STACK_ARG(type,"type")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1383)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1385)
		::String tmp = base64;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1385)
		::String tmp1 = type;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1385,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1387)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1387)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1389)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1389)
				if ((tmp3)){
					HX_STACK_LINE(1391)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1391)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1385)
		::lime::graphics::Image_obj::fromBase64(tmp,tmp1, Dynamic(new _Function_1_1(_g,onload)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBase64,(void))

Void BitmapData_obj::__fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha,Dynamic onload){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromBytes",0xdad6e936,"openfl.display.BitmapData.__fromBytes","openfl/display/BitmapData.hx",1400,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(bytes,"bytes")
		HX_STACK_ARG(rawAlpha,"rawAlpha")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_LINE(1400)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1402)
		::openfl::utils::ByteArrayData tmp = bytes;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1402)
		::haxe::io::Bytes tmp1 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp);		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload,::openfl::utils::ByteArrayData,rawAlpha)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1402,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1404)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1404)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1406)
				bool tmp3 = (rawAlpha != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1406)
				if ((tmp3)){
					HX_STACK_LINE(1413)
					::lime::utils::ArrayBufferView tmp4 = image->buffer->data;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1413)
					::lime::utils::ArrayBufferView data = tmp4;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(1415)
					{
						HX_STACK_LINE(1415)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(1415)
						::openfl::utils::ByteArrayData tmp5 = rawAlpha;		HX_STACK_VAR(tmp5,"tmp5");
						HX_STACK_LINE(1415)
						int tmp6 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp5);		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(1415)
						int _g1 = tmp6;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(1415)
						while((true)){
							HX_STACK_LINE(1415)
							bool tmp7 = (_g2 < _g1);		HX_STACK_VAR(tmp7,"tmp7");
							HX_STACK_LINE(1415)
							bool tmp8 = !(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(1415)
							if ((tmp8)){
								HX_STACK_LINE(1415)
								break;
							}
							HX_STACK_LINE(1415)
							int tmp9 = (_g2)++;		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(1415)
							int i = tmp9;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(1417)
							{
								HX_STACK_LINE(1417)
								int tmp10 = rawAlpha->readUnsignedByte();		HX_STACK_VAR(tmp10,"tmp10");
								HX_STACK_LINE(1417)
								int val = tmp10;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(1417)
								{
									HX_STACK_LINE(1417)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(1417)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(1421)
					image->dirty = true;
				}
				HX_STACK_LINE(1425)
				bool tmp4 = (onload != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(1425)
				if ((tmp4)){
					HX_STACK_LINE(1427)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(1427)
					onload(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1402)
		::lime::graphics::Image_obj::fromBytes(tmp1, Dynamic(new _Function_1_1(_g,onload,rawAlpha)));
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromBytes,(void))

Void BitmapData_obj::__fromFile( ::String path,Dynamic onload,Dynamic onerror){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromFile",0x3aae5011,"openfl.display.BitmapData.__fromFile","openfl/display/BitmapData.hx",1436,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(path,"path")
		HX_STACK_ARG(onload,"onload")
		HX_STACK_ARG(onerror,"onerror")
		HX_STACK_LINE(1436)
		::openfl::display::BitmapData _g = hx::ObjectPtr<OBJ_>(this);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(1438)
		::String tmp = path;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1448)
		Dynamic tmp1 = onerror;		HX_STACK_VAR(tmp1,"tmp1");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_1_1,::openfl::display::BitmapData,_g,Dynamic,onload)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_1_1",0x5200ed37,"*._Function_1_1","openfl/display/BitmapData.hx",1438,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(1440)
				::lime::graphics::Image tmp2 = image;		HX_STACK_VAR(tmp2,"tmp2");
				HX_STACK_LINE(1440)
				_g->__fromImage(tmp2);
				HX_STACK_LINE(1442)
				bool tmp3 = (onload != null());		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(1442)
				if ((tmp3)){
					HX_STACK_LINE(1444)
					::openfl::display::BitmapData tmp4 = _g;		HX_STACK_VAR(tmp4,"tmp4");
					HX_STACK_LINE(1444)
					onload(tmp4).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(1438)
		::lime::graphics::Image_obj::fromFile(tmp, Dynamic(new _Function_1_1(_g,onload)),tmp1);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,__fromFile,(void))

Void BitmapData_obj::__fromImage( ::lime::graphics::Image image){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__fromImage",0xdaa80026,"openfl.display.BitmapData.__fromImage","openfl/display/BitmapData.hx",1453,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(image,"image")
		HX_STACK_LINE(1455)
		bool tmp = (image != null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1455)
		bool tmp1;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1455)
		if ((tmp)){
			HX_STACK_LINE(1455)
			tmp1 = (image->buffer != null());
		}
		else{
			HX_STACK_LINE(1455)
			tmp1 = false;
		}
		HX_STACK_LINE(1455)
		if ((tmp1)){
			HX_STACK_LINE(1457)
			this->image = image;
			HX_STACK_LINE(1459)
			this->width = image->width;
			HX_STACK_LINE(1460)
			this->height = image->height;
			HX_STACK_LINE(1461)
			::openfl::geom::Rectangle tmp2 = ::openfl::geom::Rectangle_obj::__new((int)0,(int)0,image->width,image->height);		HX_STACK_VAR(tmp2,"tmp2");
			HX_STACK_LINE(1461)
			this->rect = tmp2;
			HX_STACK_LINE(1464)
			image->set_format((int)2);
			HX_STACK_LINE(1465)
			image->set_premultiplied(true);
			HX_STACK_LINE(1468)
			this->__isValid = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__fromImage,(void))

Void BitmapData_obj::__renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairo",0x87dae327,"openfl.display.BitmapData.__renderCairo","openfl/display/BitmapData.hx",1475,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1477)
		bool tmp = this->__isValid;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1477)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1477)
		if ((tmp1)){
			HX_STACK_LINE(1477)
			return null();
		}
		HX_STACK_LINE(1479)
		::lime::graphics::cairo::Cairo cairo = renderSession->cairo;		HX_STACK_VAR(cairo,"cairo");
		HX_STACK_LINE(1481)
		::openfl::geom::Matrix tmp2 = this->__worldTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1481)
		bool tmp3 = (tmp2 == null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1481)
		if ((tmp3)){
			HX_STACK_LINE(1481)
			::openfl::geom::Matrix tmp4 = ::openfl::geom::Matrix_obj::__new(null(),null(),null(),null(),null(),null());		HX_STACK_VAR(tmp4,"tmp4");
			HX_STACK_LINE(1481)
			this->__worldTransform = tmp4;
		}
		HX_STACK_LINE(1484)
		::openfl::geom::Matrix tmp4 = this->__worldTransform;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1484)
		::openfl::geom::Matrix transform = tmp4;		HX_STACK_VAR(transform,"transform");
		HX_STACK_LINE(1486)
		bool tmp5 = renderSession->roundPixels;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1486)
		if ((tmp5)){
			HX_STACK_LINE(1488)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1488)
			::lime::math::Matrix3 matrix = tmp6;		HX_STACK_VAR(matrix,"matrix");
			HX_STACK_LINE(1489)
			Float tmp7 = matrix->tx;		HX_STACK_VAR(tmp7,"tmp7");
			HX_STACK_LINE(1489)
			int tmp8 = ::Math_obj::round(tmp7);		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1489)
			matrix->tx = tmp8;
			HX_STACK_LINE(1490)
			Float tmp9 = matrix->ty;		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1490)
			int tmp10 = ::Math_obj::round(tmp9);		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1490)
			matrix->ty = tmp10;
			HX_STACK_LINE(1491)
			::lime::math::Matrix3 tmp11 = matrix;		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1491)
			cairo->set_matrix(tmp11);
		}
		else{
			HX_STACK_LINE(1496)
			::lime::math::Matrix3 tmp6 = transform->__toMatrix3();		HX_STACK_VAR(tmp6,"tmp6");
			HX_STACK_LINE(1496)
			cairo->set_matrix(tmp6);
		}
		HX_STACK_LINE(1501)
		Dynamic tmp6 = this->getSurface();		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(1501)
		Dynamic surface = tmp6;		HX_STACK_VAR(surface,"surface");
		HX_STACK_LINE(1503)
		bool tmp7 = (surface != null());		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1503)
		if ((tmp7)){
			HX_STACK_LINE(1505)
			Dynamic tmp8 = surface;		HX_STACK_VAR(tmp8,"tmp8");
			HX_STACK_LINE(1505)
			Dynamic tmp9 = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
			HX_STACK_LINE(1505)
			Dynamic pattern = tmp9;		HX_STACK_VAR(pattern,"pattern");
			HX_STACK_LINE(1507)
			int tmp10 = cairo->get_antialias();		HX_STACK_VAR(tmp10,"tmp10");
			HX_STACK_LINE(1507)
			bool tmp11 = (tmp10 == (int)1);		HX_STACK_VAR(tmp11,"tmp11");
			HX_STACK_LINE(1507)
			if ((tmp11)){
				HX_STACK_LINE(1509)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1509)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)3);
			}
			else{
				HX_STACK_LINE(1513)
				Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
				HX_STACK_LINE(1513)
				::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(tmp12,(int)1);
			}
			HX_STACK_LINE(1517)
			Dynamic tmp12 = pattern;		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1517)
			cairo->set_source(tmp12);
			HX_STACK_LINE(1518)
			cairo->paint();
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairo,(void))

Void BitmapData_obj::__renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCairoMask",0x1a586fb3,"openfl.display.BitmapData.__renderCairoMask","openfl/display/BitmapData.hx",1525,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCairoMask,(void))

Void BitmapData_obj::__renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvas",0x5afced59,"openfl.display.BitmapData.__renderCanvas","openfl/display/BitmapData.hx",1532,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvas,(void))

Void BitmapData_obj::__renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderCanvasMask",0xf2507ae5,"openfl.display.BitmapData.__renderCanvasMask","openfl/display/BitmapData.hx",1562,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderCanvasMask,(void))

Void BitmapData_obj::__renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__renderGL",0x4c025e06,"openfl.display.BitmapData.__renderGL","openfl/display/BitmapData.hx",1569,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(renderSession,"renderSession")
		HX_STACK_LINE(1571)
		::openfl::geom::Matrix tmp = this->__worldTransform;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1571)
		::openfl::geom::ColorTransform tmp1 = this->__worldColorTransform;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1571)
		::openfl::geom::ColorTransform tmp2 = this->__worldColorTransform;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1571)
		Float tmp3 = tmp2->alphaMultiplier;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1571)
		::openfl::display::BlendMode tmp4 = this->__blendMode;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(1571)
		::openfl::display::Shader tmp5 = this->__shader;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(1571)
		renderSession->spriteBatch->renderBitmapData(hx::ObjectPtr<OBJ_>(this),false,tmp,tmp1,tmp3,tmp4,tmp5,null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__renderGL,(void))

Void BitmapData_obj::__resize( int width,int height){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__resize",0xd982a43f,"openfl.display.BitmapData.__resize","openfl/display/BitmapData.hx",1576,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(width,"width")
		HX_STACK_ARG(height,"height")
		HX_STACK_LINE(1578)
		this->width = width;
		HX_STACK_LINE(1579)
		this->height = height;
		HX_STACK_LINE(1580)
		::openfl::geom::Rectangle tmp = this->rect;		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1580)
		tmp->width = width;
		HX_STACK_LINE(1581)
		::openfl::geom::Rectangle tmp1 = this->rect;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1581)
		tmp1->height = height;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__resize,(void))

Void BitmapData_obj::__sync( ){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__sync",0x0b374be6,"openfl.display.BitmapData.__sync","openfl/display/BitmapData.hx",1586,0xdd12d5b9)
		HX_STACK_THIS(this)
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(BitmapData_obj,__sync,(void))

Void BitmapData_obj::__updateChildren( bool transformOnly){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateChildren",0xeaaf19b3,"openfl.display.BitmapData.__updateChildren","openfl/display/BitmapData.hx",1649,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(transformOnly,"transformOnly")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateChildren,(void))

Void BitmapData_obj::__updateMask( ::openfl::display::Graphics maskGraphics){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateMask",0x378cf760,"openfl.display.BitmapData.__updateMask","openfl/display/BitmapData.hx",1656,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(maskGraphics,"maskGraphics")
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateMask,(void))

Void BitmapData_obj::__updateTransforms( ::openfl::geom::Matrix overrideTransform){
{
		HX_STACK_FRAME("openfl.display.BitmapData","__updateTransforms",0xf11196fb,"openfl.display.BitmapData.__updateTransforms","openfl/display/BitmapData.hx",1663,0xdd12d5b9)
		HX_STACK_THIS(this)
		HX_STACK_ARG(overrideTransform,"overrideTransform")
		HX_STACK_LINE(1665)
		bool tmp = (overrideTransform == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1665)
		if ((tmp)){
			HX_STACK_LINE(1667)
			::openfl::geom::Matrix tmp1 = this->__worldTransform;		HX_STACK_VAR(tmp1,"tmp1");
			HX_STACK_LINE(1667)
			tmp1->identity();
		}
		else{
			HX_STACK_LINE(1671)
			this->__worldTransform = overrideTransform;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(BitmapData_obj,__updateTransforms,(void))

Dynamic BitmapData_obj::__isGLES;

::openfl::display::BitmapData BitmapData_obj::fromBase64( ::String base64,::String type,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBase64",0x8e5a4284,"openfl.display.BitmapData.fromBase64","openfl/display/BitmapData.hx",575,0xdd12d5b9)
	HX_STACK_ARG(base64,"base64")
	HX_STACK_ARG(type,"type")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(577)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(577)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(578)
	{
		HX_STACK_LINE(578)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(578)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(578)
		::String tmp1 = base64;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(578)
		::String tmp2 = type;		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_Function_2_1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",578,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(578)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(578)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(578)
				bool tmp4 = (onload1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(578)
				if ((tmp4)){
					HX_STACK_LINE(578)
					::openfl::display::BitmapData tmp5 = _g;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(578)
					onload1(tmp5).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(578)
		::lime::graphics::Image_obj::fromBase64(tmp1,tmp2, Dynamic(new _Function_2_1(_g,onload1)));
	}
	HX_STACK_LINE(579)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(579)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBase64,return )

::openfl::display::BitmapData BitmapData_obj::fromBytes( ::openfl::utils::ByteArrayData bytes,::openfl::utils::ByteArrayData rawAlpha,Dynamic onload){
	HX_STACK_FRAME("openfl.display.BitmapData","fromBytes",0x062c5916,"openfl.display.BitmapData.fromBytes","openfl/display/BitmapData.hx",584,0xdd12d5b9)
	HX_STACK_ARG(bytes,"bytes")
	HX_STACK_ARG(rawAlpha,"rawAlpha")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_LINE(586)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(586)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(587)
	{
		HX_STACK_LINE(587)
		::openfl::utils::ByteArrayData rawAlpha1 = rawAlpha;		HX_STACK_VAR(rawAlpha1,"rawAlpha1");
		HX_STACK_LINE(587)
		Dynamic onload1 = onload;		HX_STACK_VAR(onload1,"onload1");
		HX_STACK_LINE(587)
		::openfl::display::BitmapData _g = bitmapData;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(587)
		::openfl::utils::ByteArrayData tmp1 = bytes;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(587)
		::haxe::io::Bytes tmp2 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toArrayBuffer(tmp1);		HX_STACK_VAR(tmp2,"tmp2");

		HX_BEGIN_LOCAL_FUNC_S3(hx::LocalFunc,_Function_2_1,::openfl::utils::ByteArrayData,rawAlpha1,::openfl::display::BitmapData,_g,Dynamic,onload1)
		int __ArgCount() const { return 1; }
		Void run(::lime::graphics::Image image){
			HX_STACK_FRAME("*","_Function_2_1",0x5201af78,"*._Function_2_1","openfl/display/BitmapData.hx",587,0xdd12d5b9)
			HX_STACK_ARG(image,"image")
			{
				HX_STACK_LINE(587)
				::lime::graphics::Image tmp3 = image;		HX_STACK_VAR(tmp3,"tmp3");
				HX_STACK_LINE(587)
				_g->__fromImage(tmp3);
				HX_STACK_LINE(587)
				bool tmp4 = (rawAlpha1 != null());		HX_STACK_VAR(tmp4,"tmp4");
				HX_STACK_LINE(587)
				if ((tmp4)){
					HX_STACK_LINE(587)
					::lime::utils::ArrayBufferView tmp5 = image->buffer->data;		HX_STACK_VAR(tmp5,"tmp5");
					HX_STACK_LINE(587)
					::lime::utils::ArrayBufferView data = tmp5;		HX_STACK_VAR(data,"data");
					HX_STACK_LINE(587)
					{
						HX_STACK_LINE(587)
						int _g2 = (int)0;		HX_STACK_VAR(_g2,"_g2");
						HX_STACK_LINE(587)
						::openfl::utils::ByteArrayData tmp6 = rawAlpha1;		HX_STACK_VAR(tmp6,"tmp6");
						HX_STACK_LINE(587)
						int tmp7 = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::get_length(tmp6);		HX_STACK_VAR(tmp7,"tmp7");
						HX_STACK_LINE(587)
						int _g1 = tmp7;		HX_STACK_VAR(_g1,"_g1");
						HX_STACK_LINE(587)
						while((true)){
							HX_STACK_LINE(587)
							bool tmp8 = (_g2 < _g1);		HX_STACK_VAR(tmp8,"tmp8");
							HX_STACK_LINE(587)
							bool tmp9 = !(tmp8);		HX_STACK_VAR(tmp9,"tmp9");
							HX_STACK_LINE(587)
							if ((tmp9)){
								HX_STACK_LINE(587)
								break;
							}
							HX_STACK_LINE(587)
							int tmp10 = (_g2)++;		HX_STACK_VAR(tmp10,"tmp10");
							HX_STACK_LINE(587)
							int i = tmp10;		HX_STACK_VAR(i,"i");
							HX_STACK_LINE(587)
							{
								HX_STACK_LINE(587)
								int tmp11 = rawAlpha1->readUnsignedByte();		HX_STACK_VAR(tmp11,"tmp11");
								HX_STACK_LINE(587)
								int val = tmp11;		HX_STACK_VAR(val,"val");
								HX_STACK_LINE(587)
								{
									HX_STACK_LINE(587)
									::__hxcpp_memory_set_byte(data->buffer->b,(data->byteOffset + (((i * (int)4) + (int)3))),val);
									HX_STACK_LINE(587)
									val;
								}
							}
						}
					}
					HX_STACK_LINE(587)
					image->dirty = true;
				}
				HX_STACK_LINE(587)
				bool tmp5 = (onload1 != null());		HX_STACK_VAR(tmp5,"tmp5");
				HX_STACK_LINE(587)
				if ((tmp5)){
					HX_STACK_LINE(587)
					::openfl::display::BitmapData tmp6 = _g;		HX_STACK_VAR(tmp6,"tmp6");
					HX_STACK_LINE(587)
					onload1(tmp6).Cast< Void >();
				}
			}
			return null();
		}
		HX_END_LOCAL_FUNC1((void))

		HX_STACK_LINE(587)
		::lime::graphics::Image_obj::fromBytes(tmp2, Dynamic(new _Function_2_1(rawAlpha1,_g,onload1)));
	}
	HX_STACK_LINE(588)
	::openfl::display::BitmapData tmp1 = bitmapData;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(588)
	return tmp1;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromBytes,return )

::openfl::display::BitmapData BitmapData_obj::fromFile( ::String path,Dynamic onload,Dynamic onerror){
	HX_STACK_FRAME("openfl.display.BitmapData","fromFile",0xca5f7c31,"openfl.display.BitmapData.fromFile","openfl/display/BitmapData.hx",607,0xdd12d5b9)
	HX_STACK_ARG(path,"path")
	HX_STACK_ARG(onload,"onload")
	HX_STACK_ARG(onerror,"onerror")
	HX_STACK_LINE(609)
	::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,true,null());		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(609)
	::openfl::display::BitmapData bitmapData = tmp;		HX_STACK_VAR(bitmapData,"bitmapData");
	HX_STACK_LINE(610)
	::String tmp1 = path;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(610)
	Dynamic tmp2 = onload;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(610)
	Dynamic tmp3 = onerror;		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(610)
	bitmapData->__fromFile(tmp1,tmp2,tmp3);
	HX_STACK_LINE(611)
	::openfl::display::BitmapData tmp4 = bitmapData;		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(611)
	return tmp4;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(BitmapData_obj,fromFile,return )

::openfl::display::BitmapData BitmapData_obj::fromImage( ::lime::graphics::Image image,hx::Null< bool >  __o_transparent){
bool transparent = __o_transparent.Default(true);
	HX_STACK_FRAME("openfl.display.BitmapData","fromImage",0x05fd7006,"openfl.display.BitmapData.fromImage","openfl/display/BitmapData.hx",616,0xdd12d5b9)
	HX_STACK_ARG(image,"image")
	HX_STACK_ARG(transparent,"transparent")
{
		HX_STACK_LINE(618)
		bool tmp = (image == null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(618)
		bool tmp1 = !(tmp);		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(618)
		bool tmp2;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(618)
		if ((tmp1)){
			HX_STACK_LINE(618)
			tmp2 = (image->buffer == null());
		}
		else{
			HX_STACK_LINE(618)
			tmp2 = true;
		}
		HX_STACK_LINE(618)
		if ((tmp2)){
			HX_STACK_LINE(618)
			return null();
		}
		HX_STACK_LINE(620)
		::openfl::display::BitmapData tmp3 = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,transparent,null());		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(620)
		::openfl::display::BitmapData bitmapData = tmp3;		HX_STACK_VAR(bitmapData,"bitmapData");
		HX_STACK_LINE(621)
		::lime::graphics::Image tmp4 = image;		HX_STACK_VAR(tmp4,"tmp4");
		HX_STACK_LINE(621)
		bitmapData->__fromImage(tmp4);
		HX_STACK_LINE(622)
		bool tmp5 = transparent;		HX_STACK_VAR(tmp5,"tmp5");
		HX_STACK_LINE(622)
		bitmapData->image->set_transparent(tmp5);
		HX_STACK_LINE(623)
		::openfl::display::BitmapData tmp6 = bitmapData;		HX_STACK_VAR(tmp6,"tmp6");
		HX_STACK_LINE(623)
		return tmp6;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,fromImage,return )

::openfl::display::BitmapData BitmapData_obj::__asRenderTexture( hx::Null< int >  __o_width,hx::Null< int >  __o_height){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
	HX_STACK_FRAME("openfl.display.BitmapData","__asRenderTexture",0xfc831c28,"openfl.display.BitmapData.__asRenderTexture","openfl/display/BitmapData.hx",1270,0xdd12d5b9)
	HX_STACK_ARG(width,"width")
	HX_STACK_ARG(height,"height")
{
		HX_STACK_LINE(1272)
		::openfl::display::BitmapData tmp = ::openfl::display::BitmapData_obj::__new((int)0,(int)0,null(),null());		HX_STACK_VAR(tmp,"tmp");
		HX_STACK_LINE(1272)
		::openfl::display::BitmapData b = tmp;		HX_STACK_VAR(b,"b");
		HX_STACK_LINE(1273)
		int tmp1 = width;		HX_STACK_VAR(tmp1,"tmp1");
		HX_STACK_LINE(1273)
		int tmp2 = height;		HX_STACK_VAR(tmp2,"tmp2");
		HX_STACK_LINE(1273)
		b->__resize(tmp1,tmp2);
		HX_STACK_LINE(1275)
		::openfl::display::BitmapData tmp3 = b;		HX_STACK_VAR(tmp3,"tmp3");
		HX_STACK_LINE(1275)
		return tmp3;
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__asRenderTexture,return )

int BitmapData_obj::__ucompare( int n1,int n2){
	HX_STACK_FRAME("openfl.display.BitmapData","__ucompare",0x409df3db,"openfl.display.BitmapData.__ucompare","openfl/display/BitmapData.hx",1595,0xdd12d5b9)
	HX_STACK_ARG(n1,"n1")
	HX_STACK_ARG(n2,"n2")
	HX_STACK_LINE(1597)
	int tmp1;		HX_STACK_VAR(tmp1,"tmp1");
	HX_STACK_LINE(1598)
	int tmp2;		HX_STACK_VAR(tmp2,"tmp2");
	HX_STACK_LINE(1600)
	int tmp = (int(n1) >> int((int)24));		HX_STACK_VAR(tmp,"tmp");
	HX_STACK_LINE(1600)
	int tmp3 = (int(tmp) & int((int)255));		HX_STACK_VAR(tmp3,"tmp3");
	HX_STACK_LINE(1600)
	tmp1 = tmp3;
	HX_STACK_LINE(1601)
	int tmp4 = (int(n2) >> int((int)24));		HX_STACK_VAR(tmp4,"tmp4");
	HX_STACK_LINE(1601)
	int tmp5 = (int(tmp4) & int((int)255));		HX_STACK_VAR(tmp5,"tmp5");
	HX_STACK_LINE(1601)
	tmp2 = tmp5;
	HX_STACK_LINE(1603)
	bool tmp6 = (tmp1 != tmp2);		HX_STACK_VAR(tmp6,"tmp6");
	HX_STACK_LINE(1603)
	if ((tmp6)){
		HX_STACK_LINE(1605)
		bool tmp7 = (tmp1 > tmp2);		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1605)
		int tmp8;		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1605)
		if ((tmp7)){
			HX_STACK_LINE(1605)
			tmp8 = (int)1;
		}
		else{
			HX_STACK_LINE(1605)
			tmp8 = (int)-1;
		}
		HX_STACK_LINE(1605)
		return tmp8;
	}
	else{
		HX_STACK_LINE(1609)
		int tmp7 = (int(n1) >> int((int)16));		HX_STACK_VAR(tmp7,"tmp7");
		HX_STACK_LINE(1609)
		int tmp8 = (int(tmp7) & int((int)255));		HX_STACK_VAR(tmp8,"tmp8");
		HX_STACK_LINE(1609)
		tmp1 = tmp8;
		HX_STACK_LINE(1610)
		int tmp9 = (int(n2) >> int((int)16));		HX_STACK_VAR(tmp9,"tmp9");
		HX_STACK_LINE(1610)
		int tmp10 = (int(tmp9) & int((int)255));		HX_STACK_VAR(tmp10,"tmp10");
		HX_STACK_LINE(1610)
		tmp2 = tmp10;
		HX_STACK_LINE(1612)
		bool tmp11 = (tmp1 != tmp2);		HX_STACK_VAR(tmp11,"tmp11");
		HX_STACK_LINE(1612)
		if ((tmp11)){
			HX_STACK_LINE(1614)
			bool tmp12 = (tmp1 > tmp2);		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1614)
			int tmp13;		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1614)
			if ((tmp12)){
				HX_STACK_LINE(1614)
				tmp13 = (int)1;
			}
			else{
				HX_STACK_LINE(1614)
				tmp13 = (int)-1;
			}
			HX_STACK_LINE(1614)
			return tmp13;
		}
		else{
			HX_STACK_LINE(1618)
			int tmp12 = (int(n1) >> int((int)8));		HX_STACK_VAR(tmp12,"tmp12");
			HX_STACK_LINE(1618)
			int tmp13 = (int(tmp12) & int((int)255));		HX_STACK_VAR(tmp13,"tmp13");
			HX_STACK_LINE(1618)
			tmp1 = tmp13;
			HX_STACK_LINE(1619)
			int tmp14 = (int(n2) >> int((int)8));		HX_STACK_VAR(tmp14,"tmp14");
			HX_STACK_LINE(1619)
			int tmp15 = (int(tmp14) & int((int)255));		HX_STACK_VAR(tmp15,"tmp15");
			HX_STACK_LINE(1619)
			tmp2 = tmp15;
			HX_STACK_LINE(1621)
			bool tmp16 = (tmp1 != tmp2);		HX_STACK_VAR(tmp16,"tmp16");
			HX_STACK_LINE(1621)
			if ((tmp16)){
				HX_STACK_LINE(1623)
				bool tmp17 = (tmp1 > tmp2);		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1623)
				int tmp18;		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1623)
				if ((tmp17)){
					HX_STACK_LINE(1623)
					tmp18 = (int)1;
				}
				else{
					HX_STACK_LINE(1623)
					tmp18 = (int)-1;
				}
				HX_STACK_LINE(1623)
				return tmp18;
			}
			else{
				HX_STACK_LINE(1627)
				int tmp17 = (int(n1) & int((int)255));		HX_STACK_VAR(tmp17,"tmp17");
				HX_STACK_LINE(1627)
				tmp1 = tmp17;
				HX_STACK_LINE(1628)
				int tmp18 = (int(n2) & int((int)255));		HX_STACK_VAR(tmp18,"tmp18");
				HX_STACK_LINE(1628)
				tmp2 = tmp18;
				HX_STACK_LINE(1630)
				bool tmp19 = (tmp1 != tmp2);		HX_STACK_VAR(tmp19,"tmp19");
				HX_STACK_LINE(1630)
				if ((tmp19)){
					HX_STACK_LINE(1632)
					bool tmp20 = (tmp1 > tmp2);		HX_STACK_VAR(tmp20,"tmp20");
					HX_STACK_LINE(1632)
					int tmp21;		HX_STACK_VAR(tmp21,"tmp21");
					HX_STACK_LINE(1632)
					if ((tmp20)){
						HX_STACK_LINE(1632)
						tmp21 = (int)1;
					}
					else{
						HX_STACK_LINE(1632)
						tmp21 = (int)-1;
					}
					HX_STACK_LINE(1632)
					return tmp21;
				}
				else{
					HX_STACK_LINE(1636)
					return (int)0;
				}
			}
		}
	}
	HX_STACK_LINE(1603)
	return (int)0;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BitmapData_obj,__ucompare,return )


BitmapData_obj::BitmapData_obj()
{
}

void BitmapData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapData);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(image,"image");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_MARK_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_MARK_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_MARK_MEMBER_NAME(__blendMode,"__blendMode");
	HX_MARK_MEMBER_NAME(__shader,"__shader");
	HX_MARK_MEMBER_NAME(__buffer,"__buffer");
	HX_MARK_MEMBER_NAME(__isValid,"__isValid");
	HX_MARK_MEMBER_NAME(__surface,"__surface");
	HX_MARK_MEMBER_NAME(__texture,"__texture");
	HX_MARK_MEMBER_NAME(__textureImage,"__textureImage");
	HX_MARK_MEMBER_NAME(__pingPongTexture,"__pingPongTexture");
	HX_MARK_MEMBER_NAME(__usingPingPongTexture,"__usingPingPongTexture");
	HX_MARK_MEMBER_NAME(__uvData,"__uvData");
	HX_MARK_END_CLASS();
}

void BitmapData_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(image,"image");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(__worldTransform,"__worldTransform");
	HX_VISIT_MEMBER_NAME(__worldColorTransform,"__worldColorTransform");
	HX_VISIT_MEMBER_NAME(__cacheAsBitmap,"__cacheAsBitmap");
	HX_VISIT_MEMBER_NAME(__blendMode,"__blendMode");
	HX_VISIT_MEMBER_NAME(__shader,"__shader");
	HX_VISIT_MEMBER_NAME(__buffer,"__buffer");
	HX_VISIT_MEMBER_NAME(__isValid,"__isValid");
	HX_VISIT_MEMBER_NAME(__surface,"__surface");
	HX_VISIT_MEMBER_NAME(__texture,"__texture");
	HX_VISIT_MEMBER_NAME(__textureImage,"__textureImage");
	HX_VISIT_MEMBER_NAME(__pingPongTexture,"__pingPongTexture");
	HX_VISIT_MEMBER_NAME(__usingPingPongTexture,"__usingPingPongTexture");
	HX_VISIT_MEMBER_NAME(__uvData,"__uvData");
}

Dynamic BitmapData_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"lock") ) { return lock_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { return image; }
		if (HX_FIELD_EQ(inName,"width") ) { return width; }
		if (HX_FIELD_EQ(inName,"clone") ) { return clone_dyn(); }
		if (HX_FIELD_EQ(inName,"merge") ) { return merge_dyn(); }
		if (HX_FIELD_EQ(inName,"noise") ) { return noise_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return height; }
		if (HX_FIELD_EQ(inName,"encode") ) { return encode_dyn(); }
		if (HX_FIELD_EQ(inName,"scroll") ) { return scroll_dyn(); }
		if (HX_FIELD_EQ(inName,"unlock") ) { return unlock_dyn(); }
		if (HX_FIELD_EQ(inName,"__sync") ) { return __sync_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"compare") ) { return compare_dyn(); }
		if (HX_FIELD_EQ(inName,"dispose") ) { return dispose_dyn(); }
		if (HX_FIELD_EQ(inName,"hitTest") ) { return hitTest_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__shader") ) { return __shader; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { return __buffer; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { return __uvData; }
		if (HX_FIELD_EQ(inName,"fillRect") ) { return fillRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel") ) { return getPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel") ) { return setPixel_dyn(); }
		if (HX_FIELD_EQ(inName,"__drawGL") ) { return __drawGL_dyn(); }
		if (HX_FIELD_EQ(inName,"__resize") ) { return __resize_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { return __isValid; }
		if (HX_FIELD_EQ(inName,"__surface") ) { return __surface; }
		if (HX_FIELD_EQ(inName,"__texture") ) { return __texture; }
		if (HX_FIELD_EQ(inName,"floodFill") ) { return floodFill_dyn(); }
		if (HX_FIELD_EQ(inName,"getBuffer") ) { return getBuffer_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixels") ) { return getPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getVector") ) { return getVector_dyn(); }
		if (HX_FIELD_EQ(inName,"histogram") ) { return histogram_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixels") ) { return setPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"setVector") ) { return setVector_dyn(); }
		if (HX_FIELD_EQ(inName,"threshold") ) { return threshold_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"copyPixels") ) { return copyPixels_dyn(); }
		if (HX_FIELD_EQ(inName,"getPixel32") ) { return getPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"getSurface") ) { return getSurface_dyn(); }
		if (HX_FIELD_EQ(inName,"getTexture") ) { return getTexture_dyn(); }
		if (HX_FIELD_EQ(inName,"paletteMap") ) { return paletteMap_dyn(); }
		if (HX_FIELD_EQ(inName,"setPixel32") ) { return setPixel32_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return __fromFile_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return __renderGL_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return transparent; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { return __blendMode; }
		if (HX_FIELD_EQ(inName,"applyFilter") ) { return applyFilter_dyn(); }
		if (HX_FIELD_EQ(inName,"copyChannel") ) { return copyChannel_dyn(); }
		if (HX_FIELD_EQ(inName,"perlinNoise") ) { return perlinNoise_dyn(); }
		if (HX_FIELD_EQ(inName,"__createUVs") ) { return __createUVs_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return __fromBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"__fromImage") ) { return __fromImage_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__fromBase64") ) { return __fromBase64_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return __updateMask_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return __renderCairo_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { return __textureImage; }
		if (HX_FIELD_EQ(inName,"colorTransform") ) { return colorTransform_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return __renderCanvas_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { return __cacheAsBitmap; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { return __worldTransform; }
		if (HX_FIELD_EQ(inName,"__updateChildren") ) { return __updateChildren_dyn(); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__pingPongTexture") ) { return __pingPongTexture; }
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return __renderCairoMask_dyn(); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"generateFilterRect") ) { return generateFilterRect_dyn(); }
		if (HX_FIELD_EQ(inName,"getColorBoundsRect") ) { return getColorBoundsRect_dyn(); }
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return __renderCanvasMask_dyn(); }
		if (HX_FIELD_EQ(inName,"__updateTransforms") ) { return __updateTransforms_dyn(); }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { return __worldColorTransform; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__usingPingPongTexture") ) { return __usingPingPongTexture; }
	}
	return super::__Field(inName,inCallProp);
}

bool BitmapData_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__isGLES") ) { outValue = __isGLES; return true;  }
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true;  }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"fromImage") ) { outValue = fromImage_dyn(); return true;  }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromBase64") ) { outValue = fromBase64_dyn(); return true;  }
		if (HX_FIELD_EQ(inName,"__ucompare") ) { outValue = __ucompare_dyn(); return true;  }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__asRenderTexture") ) { outValue = __asRenderTexture_dyn(); return true;  }
	}
	return false;
}

Dynamic BitmapData_obj::__SetField(const ::String &inName,const Dynamic &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::openfl::geom::Rectangle >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"image") ) { image=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__shader") ) { __shader=inValue.Cast< ::openfl::display::Shader >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__buffer") ) { __buffer=inValue.Cast< ::lime::graphics::opengl::GLBuffer >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__uvData") ) { __uvData=inValue.Cast< ::openfl::display::TextureUvs >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__isValid") ) { __isValid=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__surface") ) { __surface=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__texture") ) { __texture=inValue.Cast< ::lime::graphics::opengl::GLTexture >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__blendMode") ) { __blendMode=inValue.Cast< ::openfl::display::BlendMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__textureImage") ) { __textureImage=inValue.Cast< ::lime::graphics::Image >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__cacheAsBitmap") ) { __cacheAsBitmap=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__worldTransform") ) { __worldTransform=inValue.Cast< ::openfl::geom::Matrix >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__pingPongTexture") ) { __pingPongTexture=inValue.Cast< ::openfl::_internal::renderer::opengl::utils::PingPongTexture >(); return inValue; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"__worldColorTransform") ) { __worldColorTransform=inValue.Cast< ::openfl::geom::ColorTransform >(); return inValue; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"__usingPingPongTexture") ) { __usingPingPongTexture=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool BitmapData_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__isGLES") ) { __isGLES=ioValue.Cast< Dynamic >(); return true; }
	}
	return false;
}

void BitmapData_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"));
	outFields->push(HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"));
	outFields->push(HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"));
	outFields->push(HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"));
	outFields->push(HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"));
	outFields->push(HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"));
	outFields->push(HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"));
	outFields->push(HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"));
	outFields->push(HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"));
	outFields->push(HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"));
	outFields->push(HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"));
	outFields->push(HX_HCSTRING("__pingPongTexture","\x51","\xc7","\x46","\xb0"));
	outFields->push(HX_HCSTRING("__usingPingPongTexture","\xad","\x58","\x22","\x5a"));
	outFields->push(HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(BitmapData_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,image),HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd")},
	{hx::fsObject /*::openfl::geom::Rectangle*/ ,(int)offsetof(BitmapData_obj,rect),HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(BitmapData_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(BitmapData_obj,__worldTransform),HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a")},
	{hx::fsObject /*::openfl::geom::ColorTransform*/ ,(int)offsetof(BitmapData_obj,__worldColorTransform),HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__cacheAsBitmap),HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1")},
	{hx::fsObject /*::openfl::display::BlendMode*/ ,(int)offsetof(BitmapData_obj,__blendMode),HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a")},
	{hx::fsObject /*::openfl::display::Shader*/ ,(int)offsetof(BitmapData_obj,__shader),HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5")},
	{hx::fsObject /*::lime::graphics::opengl::GLBuffer*/ ,(int)offsetof(BitmapData_obj,__buffer),HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__isValid),HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapData_obj,__surface),HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde")},
	{hx::fsObject /*::lime::graphics::opengl::GLTexture*/ ,(int)offsetof(BitmapData_obj,__texture),HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20")},
	{hx::fsObject /*::lime::graphics::Image*/ ,(int)offsetof(BitmapData_obj,__textureImage),HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6")},
	{hx::fsObject /*::openfl::_internal::renderer::opengl::utils::PingPongTexture*/ ,(int)offsetof(BitmapData_obj,__pingPongTexture),HX_HCSTRING("__pingPongTexture","\x51","\xc7","\x46","\xb0")},
	{hx::fsBool,(int)offsetof(BitmapData_obj,__usingPingPongTexture),HX_HCSTRING("__usingPingPongTexture","\xad","\x58","\x22","\x5a")},
	{hx::fsObject /*::openfl::display::TextureUvs*/ ,(int)offsetof(BitmapData_obj,__uvData),HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &BitmapData_obj::__isGLES,HX_HCSTRING("__isGLES","\xdd","\x11","\xe5","\x09")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("image","\x5b","\x1f","\x69","\xbd"),
	HX_HCSTRING("rect","\x24","\x4d","\xa7","\x4b"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__worldTransform","\xda","\xa7","\xd8","\x9a"),
	HX_HCSTRING("__worldColorTransform","\x5b","\xce","\x21","\xa3"),
	HX_HCSTRING("__cacheAsBitmap","\xc3","\xbb","\xc1","\xf1"),
	HX_HCSTRING("__blendMode","\x34","\x2d","\x64","\x3a"),
	HX_HCSTRING("__shader","\x45","\x2a","\x50","\xc5"),
	HX_HCSTRING("__buffer","\x20","\x28","\xc4","\x78"),
	HX_HCSTRING("__isValid","\x92","\x69","\x8c","\x4f"),
	HX_HCSTRING("__surface","\x0d","\xb7","\x97","\xde"),
	HX_HCSTRING("__texture","\xbb","\x19","\x2f","\x20"),
	HX_HCSTRING("__textureImage","\xa0","\x4f","\xc9","\xd6"),
	HX_HCSTRING("__pingPongTexture","\x51","\xc7","\x46","\xb0"),
	HX_HCSTRING("__usingPingPongTexture","\xad","\x58","\x22","\x5a"),
	HX_HCSTRING("__uvData","\x4b","\x98","\x75","\x8e"),
	HX_HCSTRING("applyFilter","\xc6","\xdf","\x2f","\xc1"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("colorTransform","\x89","\xd7","\x3f","\xad"),
	HX_HCSTRING("compare","\xa5","\x18","\x69","\x83"),
	HX_HCSTRING("copyChannel","\x8e","\x7d","\xe6","\x22"),
	HX_HCSTRING("copyPixels","\xc2","\x54","\x6e","\x42"),
	HX_HCSTRING("dispose","\x9f","\x80","\x4c","\xbb"),
	HX_HCSTRING("draw","\x04","\x2c","\x70","\x42"),
	HX_HCSTRING("encode","\x16","\xf2","\xe3","\xf9"),
	HX_HCSTRING("fillRect","\x47","\x45","\xb9","\x6c"),
	HX_HCSTRING("floodFill","\x61","\x83","\x8a","\x59"),
	HX_HCSTRING("generateFilterRect","\x91","\x2c","\x98","\x7e"),
	HX_HCSTRING("getBuffer","\x36","\x46","\xeb","\x4c"),
	HX_HCSTRING("getColorBoundsRect","\x86","\xad","\xe8","\x80"),
	HX_HCSTRING("getPixel","\x10","\xd6","\x7a","\x22"),
	HX_HCSTRING("getPixel32","\xaf","\xa6","\x68","\xd7"),
	HX_HCSTRING("getPixels","\x63","\x78","\x00","\x09"),
	HX_HCSTRING("getSurface","\x37","\xec","\xaa","\xac"),
	HX_HCSTRING("getTexture","\xe5","\x4e","\x42","\xee"),
	HX_HCSTRING("getVector","\xf9","\x39","\xb4","\x13"),
	HX_HCSTRING("histogram","\xa4","\xde","\x33","\x65"),
	HX_HCSTRING("hitTest","\x45","\x60","\x7f","\xe2"),
	HX_HCSTRING("lock","\xeb","\x9b","\xb7","\x47"),
	HX_HCSTRING("merge","\xb8","\xa2","\xc6","\x05"),
	HX_HCSTRING("noise","\x9a","\x8f","\xc2","\x9f"),
	HX_HCSTRING("paletteMap","\xe1","\xae","\x2b","\x06"),
	HX_HCSTRING("perlinNoise","\x66","\x84","\xf8","\x8b"),
	HX_HCSTRING("scroll","\x0d","\xd8","\x64","\x47"),
	HX_HCSTRING("setPixel","\x84","\x2f","\xd8","\xd0"),
	HX_HCSTRING("setPixel32","\x23","\x45","\xe6","\xda"),
	HX_HCSTRING("setPixels","\x6f","\x64","\x51","\xec"),
	HX_HCSTRING("setVector","\x05","\x26","\x05","\xf7"),
	HX_HCSTRING("threshold","\xab","\xc3","\xa3","\x34"),
	HX_HCSTRING("unlock","\xc4","\xa2","\x8c","\x65"),
	HX_HCSTRING("__createUVs","\x56","\x32","\x13","\x78"),
	HX_HCSTRING("__drawGL","\x49","\xde","\x05","\x88"),
	HX_HCSTRING("__fromBase64","\xb9","\x7d","\xff","\xd0"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	HX_HCSTRING("__fromImage","\x71","\x52","\x1e","\xa0"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__resize","\x14","\xc5","\xaa","\xb0"),
	HX_HCSTRING("__sync","\x7b","\x1d","\x58","\xfb"),
	HX_HCSTRING("__updateChildren","\x88","\x97","\xd3","\xd9"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("__updateTransforms","\x10","\xf4","\xb0","\x50"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(BitmapData_obj::__isGLES,"__isGLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(BitmapData_obj::__isGLES,"__isGLES");
};

#endif

hx::Class BitmapData_obj::__mClass;

static ::String sStaticFields[] = {
	HX_HCSTRING("__isGLES","\xdd","\x11","\xe5","\x09"),
	HX_HCSTRING("fromBase64","\x99","\x02","\x6c","\x98"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("fromImage","\x91","\x09","\xf2","\x71"),
	HX_HCSTRING("__asRenderTexture","\xb3","\xb8","\x4c","\x4d"),
	HX_HCSTRING("__ucompare","\xf0","\xb3","\xaf","\x4a"),
	::String(null()) };

void BitmapData_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.BitmapData","\xa3","\x12","\x41","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BitmapData_obj::__GetStatic;
	__mClass->mSetStaticField = &BitmapData_obj::__SetStatic;
	__mClass->mMarkFunc = sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapData_obj >;
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

void BitmapData_obj::__boot()
{
	__isGLES= null();
}

} // end namespace openfl
} // end namespace display
