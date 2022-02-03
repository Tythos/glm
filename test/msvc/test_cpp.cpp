#define IS_MSVC_NATIVE_UNIT_TEST

#include "CppUnitTest.h"
#include "../core/core_cpp_constexpr.cpp"
#include "../core/core_cpp_defaulted_ctor.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test_core
{
	TEST_CLASS(test_cpp)
	{
	public:
		
		TEST_METHOD(TestConstExpr)
		{
			Assert::AreEqual(0, core_cpp_constexpr::main());
		}

		TEST_METHOD(TestDefaultedCtor) {
			Assert::AreEqual(0, core_cpp_defaulted_ctor::main());
		}
	};
}
