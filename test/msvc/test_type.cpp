#define IS_MSVC_NATIVE_UNIT_TEST

#include "CppUnitTest.h"
#include "../core/core_type_aligned.cpp"
#include "../core/core_type_cast.cpp"
#include "../core/core_type_ctor.cpp"
#include "../core/core_type_int.cpp"
#include "../core/core_type_length.cpp"
#include "../core/core_type_mat2x2.cpp"
#include "../core/core_type_mat2x3.cpp"
#include "../core/core_type_mat2x4.cpp"
#include "../core/core_type_mat3x2.cpp"
#include "../core/core_type_mat3x3.cpp"
#include "../core/core_type_mat3x4.cpp"
#include "../core/core_type_mat4x2.cpp"
#include "../core/core_type_mat4x3.cpp"
#include "../core/core_type_mat4x4.cpp"
#include "../core/core_type_vec1.cpp"
#include "../core/core_type_vec2.cpp"
#include "../core/core_type_vec3.cpp"
#include "../core/core_type_vec4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test_core
{
	TEST_CLASS(test_type)
	{
	public:

		TEST_METHOD(TestAligned)
		{
			Assert::AreEqual(0, core_type_aligned::main());
		}

		TEST_METHOD(TestCast)
		{
			Assert::AreEqual(0, core_type_cast::main());
		}

		TEST_METHOD(TestCtor)
		{
			Assert::AreEqual(0, core_type_ctor::main());
		}

		TEST_METHOD(TestInt)
		{
			Assert::AreEqual(0, core_type_int::main());
		}

		TEST_METHOD(TestLegth)
		{
			Assert::AreEqual(0, core_type_length::main());
		}

		TEST_METHOD(TestMat2x2)
		{
			Assert::AreEqual(0, core_type_mat2x2::main());
		}

		TEST_METHOD(TestMat2x3)
		{
			Assert::AreEqual(0, core_type_mat2x3::main());
		}

		TEST_METHOD(TestMat2x4)
		{
			Assert::AreEqual(0, core_type_mat2x4::main());
		}

		TEST_METHOD(TestMat3x2)
		{
			Assert::AreEqual(0, core_type_mat3x2::main());
		}

		TEST_METHOD(TestMat3x3)
		{
			Assert::AreEqual(0, core_type_mat3x3::main());
		}

		TEST_METHOD(TestMat3x4)
		{
			Assert::AreEqual(0, core_type_mat3x4::main());
		}

		TEST_METHOD(TestMat4x2)
		{
			Assert::AreEqual(0, core_type_mat4x2::main());
		}

		TEST_METHOD(TestMat4x3)
		{
			Assert::AreEqual(0, core_type_mat4x3::main());
		}

		TEST_METHOD(TestMat4x4)
		{
			Assert::AreEqual(0, core_type_mat4x4::main());
		}

		TEST_METHOD(TestVec1)
		{
			Assert::AreEqual(0, core_type_vec1::main());
		}

		TEST_METHOD(TestVec2)
		{
			Assert::AreEqual(0, core_type_vec2::main());
		}

		TEST_METHOD(TestVec3)
		{
			Assert::AreEqual(0, core_type_vec3::main());
		}

		TEST_METHOD(TestVec4)
		{
			Assert::AreEqual(0, core_type_vec4::main());
		}
	};
}
