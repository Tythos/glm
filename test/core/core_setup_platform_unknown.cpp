#ifndef GLM_FORCE_PLATFORM_UNKNOWN
#	define GLM_FORCE_PLATFORM_UNKNOWN
#endif
#ifndef GLM_FORCE_COMPILER_UNKNOWN
#	define GLM_FORCE_COMPILER_UNKNOWN
#endif
#ifndef GLM_FORCE_ARCH_UNKNOWN
#	define GLM_FORCE_ARCH_UNKNOWN
#endif
#ifndef GLM_FORCE_CXX_UNKNOWN
#	define GLM_FORCE_CXX_UNKNOWN
#endif
#include <glm/glm.hpp>
#include <glm/ext.hpp>

#ifdef IS_MSVC_NATIVE_UNIT_TEST
namespace core_setup_platform_unknown {
#endif

	int main()
	{
		int Error = 0;

		return Error;
	}

#ifdef IS_MSVC_NATIVE_UNIT_TEST
}
#endif
