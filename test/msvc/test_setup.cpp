#define IS_MSVC_NATIVE_UNIT_TEST

#include "CppUnitTest.h"
#include "../core/core_setup_force_cxx98.cpp"
#include "../core/core_setup_force_size_t_length.cpp"
#include "../core/core_setup_message.cpp"
#include "../core/core_setup_platform_unknown.cpp"
#include "../core/core_setup_precision.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test_core
{
	TEST_CLASS(test_setup)
	{
	public:

		TEST_METHOD(TestForceCxx98)
		{
			Assert::AreEqual(0, core_setup_force_cxx98::main());
		}

		TEST_METHOD(TestForceSizeTLength) {
			Assert::AreEqual(0, core_setup_force_size_t_length::main());
		}

		TEST_METHOD(TestMessage) {
			Assert::AreEqual(0, core_setup_message::main());
		}

		TEST_METHOD(TestPlatformUnknown) {
			Assert::AreEqual(0, core_setup_platform_unknown::main());
		}

		TEST_METHOD(TestPrecision) {
			Assert::AreEqual(0, core_setup_precision::main());
		}
	};
}
