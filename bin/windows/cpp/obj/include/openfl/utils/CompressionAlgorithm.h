#ifndef INCLUDED_openfl_utils_CompressionAlgorithm
#define INCLUDED_openfl_utils_CompressionAlgorithm

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,utils,CompressionAlgorithm)
namespace openfl{
namespace utils{


class CompressionAlgorithm_obj : public hx::EnumBase_obj
{
	typedef hx::EnumBase_obj super;
		typedef CompressionAlgorithm_obj OBJ_;

	public:
		CompressionAlgorithm_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		::String GetEnumName( ) const { return HX_HCSTRING("openfl.utils.CompressionAlgorithm","\xc4","\xe9","\xab","\x59"); }
		::String __ToString() const { return HX_HCSTRING("CompressionAlgorithm.","\xc5","\x9b","\x61","\x8f") + tag; }

		static ::openfl::utils::CompressionAlgorithm DEFLATE;
		static inline ::openfl::utils::CompressionAlgorithm DEFLATE_dyn() { return DEFLATE; }
		static ::openfl::utils::CompressionAlgorithm GZIP;
		static inline ::openfl::utils::CompressionAlgorithm GZIP_dyn() { return GZIP; }
		static ::openfl::utils::CompressionAlgorithm LZMA;
		static inline ::openfl::utils::CompressionAlgorithm LZMA_dyn() { return LZMA; }
		static ::openfl::utils::CompressionAlgorithm ZLIB;
		static inline ::openfl::utils::CompressionAlgorithm ZLIB_dyn() { return ZLIB; }
};

} // end namespace openfl
} // end namespace utils

#endif /* INCLUDED_openfl_utils_CompressionAlgorithm */ 
