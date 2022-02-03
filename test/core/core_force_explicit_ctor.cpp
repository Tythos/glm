#define GLM_FORCE_EXPLICIT_CTOR

#include <glm/glm.hpp>
#include <glm/ext.hpp>

#ifdef IS_MSVC_NATIVE_UNIT_TEST
namespace core_force_explicit_ctor {
#endif

	int main()
	{
		int Error = 0;

		glm::ivec4 B(1);
		Error += B == glm::ivec4(1) ? 0 : 1;

		//glm::vec4 A = B;

		return Error;
	}

#ifdef IS_MSVC_NATIVE_UNIT_TEST
}
#endif
