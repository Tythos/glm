#define GLM_FORCE_SIZE_T_LENGTH
#include <glm/glm.hpp>
#include <glm/ext.hpp>

#ifdef IS_MSVC_NATIVE_UNIT_TEST
namespace core_setup_force_size_t_length {
#endif

	template <typename genType>
	genType add(genType const& a, genType const& b)
	{
		genType result(0);
		for (glm::length_t i = 0; i < a.length(); ++i)
			result[i] = a[i] + b[i];
		return result;
	}

	int main()
	{
		int Error = 0;

		glm::ivec4 v(1);
		Error += add(v, v) == glm::ivec4(2) ? 0 : 1;

		return Error;
	}

#ifdef IS_MSVC_NATIVE_UNIT_TEST
}
#endif
