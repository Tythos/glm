#define IS_MSVC_NATIVE_UNIT_TEST

#include "CppUnitTest.h"
#include "../core/core_force_aligned_gentypes.cpp"
#include "../core/core_force_arch_unknown.cpp"
#include "../core/core_force_compiler_unknown.cpp"
#include "../core/core_force_ctor_init.cpp"
#include "../core/core_force_cxx_unknown.cpp"
#include "../core/core_force_cxx03.cpp"
#include "../core/core_force_cxx98.cpp"
#include "../core/core_force_depth_zero_to_one.cpp"
#include "../core/core_force_explicit_ctor.cpp"
#include "../core/core_force_inline.cpp"
#include "../core/core_force_left_handed.cpp"
#include "../core/core_force_platform_unknown.cpp"
#include "../core/core_force_pure.cpp"
#include "../core/core_force_quat_xyzw.cpp"
#include "../core/core_force_size_t_length.cpp"
#include "../core/core_force_unrestricted_gentype.cpp"
#include "../core/core_force_xyzw_only.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test_core
{
	TEST_CLASS(test_force)
	{
	public:

		TEST_METHOD(TestAlignedGentypes)
		{
			Assert::AreEqual(0, core_force_aligned_gentypes::main());
		}

		TEST_METHOD(TestArchUnknowns) {
			Assert::AreEqual(0, core_force_arch_unknown::main());
		}

		TEST_METHOD(TestCompilerUnknown) {
			Assert::AreEqual(0, core_force_compiler_unknown::main());
		}

		TEST_METHOD(TestCtorInit) {
			Assert::AreEqual(0, core_force_ctor_init::main());
		}

		TEST_METHOD(TestCxxUnknown) {
			Assert::AreEqual(0, core_force_cxx_unknown::main());
		}

		TEST_METHOD(TestCxx03) {
			Assert::AreEqual(0, core_force_cxx03::main());
		}

		TEST_METHOD(TestCxx98) {
			Assert::AreEqual(0, core_force_cxx98::main());
		}

		TEST_METHOD(TestDepthZeroToOne) {
			Assert::AreEqual(0, core_force_depth_zero_to_one::main());
		}

		TEST_METHOD(TestExplicitCtor) {
			Assert::AreEqual(0, core_force_explicit_ctor::main());
		}

		TEST_METHOD(TestInline) {
			Assert::AreEqual(0, core_force_inline::main());
		}

		TEST_METHOD(TestLeftHanded) {
			Assert::AreEqual(0, core_force_left_handed::main());
		}

		TEST_METHOD(TestPlatformUnknown) {
			Assert::AreEqual(0, core_force_platform_unknown::main());
		}

		TEST_METHOD(TestPure) {
			Assert::AreEqual(0, core_force_pure::main());
		}

		TEST_METHOD(TestQuatXyzw) {
			Assert::AreEqual(0, core_force_quat_xyzw::main());
		}

		TEST_METHOD(TestSizeTLength) {
			Assert::AreEqual(0, core_force_size_t_length::main());
		}

		TEST_METHOD(TestUnrestrictedGentype) {
			Assert::AreEqual(0, core_force_unrestricted_gentype::main());
		}

		TEST_METHOD(TestXyzwOnly) {
			Assert::AreEqual(0, core_force_xyzw_only::main());
		}
	};
}
