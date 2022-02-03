#define IS_MSVC_NATIVE_UNIT_TEST

#include "CppUnitTest.h"
#include "../core/core_func_common.cpp"
#include "../core/core_func_exponential.cpp"
#include "../core/core_func_geometric.cpp"
#include "../core/core_func_integer.cpp"
#include "../core/core_func_integer_bit_count.cpp"
#include "../core/core_func_integer_find_lsb.cpp"
#include "../core/core_func_integer_find_msb.cpp"
#include "../core/core_func_matrix.cpp"
#include "../core/core_func_noise.cpp"
/*#include "../core/core_func_packing.cpp"*/
#include "../core/core_func_swizzle.cpp"
#include "../core/core_func_trigonometric.cpp"
#include "../core/core_func_vector_relational.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test_core
{
	TEST_CLASS(test_func)
	{
	public:


		TEST_METHOD(TestCommon) {
			Assert::AreEqual(0, core_func_common::main());
		}

		TEST_METHOD(TestExponential) {
			Assert::AreEqual(0, core_func_exponential::main());
		}

		TEST_METHOD(TestGeometric) {
			Assert::AreEqual(0, core_func_geometric::main());
		}

		TEST_METHOD(TestInteger) {
			Assert::AreEqual(0, core_func_integer::main());
		}

		TEST_METHOD(TestIntegerBitCount) {
			Assert::AreEqual(0, core_func_integer_bit_count::main());
		}

		TEST_METHOD(TestIntegerFindLsb) {
			Assert::AreEqual(0, core_func_integer_find_lsb::main());
		}

		TEST_METHOD(TestIntegerFindMsb) {
			Assert::AreEqual(0, core_func_integer_find_msb::main());
		}

		TEST_METHOD(TestMatrix) {
			Assert::AreEqual(0, core_func_matrix::main());
		}

		TEST_METHOD(TestNoise) {
			Assert::AreEqual(0, core_func_noise::main());
		}

		/*TEST_METHOD(TestPacking) {
			Assert::AreEqual(0, core_func_packing::main());
		}*/

		TEST_METHOD(TestSwizzle) {
			Assert::AreEqual(0, core_func_swizzle::main());
		}

		TEST_METHOD(TestTrigonometric) {
			Assert::AreEqual(0, core_func_trigonometric::main());
		}

		TEST_METHOD(TestVectorRelational) {
			Assert::AreEqual(0, core_func_vector_relational::main());
		}
	};
}
