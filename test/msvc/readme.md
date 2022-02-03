# GLM Test MSVC

## Organization

This MSVC solution organizes native unit test classes/methods from different folders under "glm/test". Each project corresponds to the unit tests for a folder.

Within the project's unit tests, we group test entry points by common topic. For example, all "core/core_cpp_...cpp" files are organized into a single .CPP file that contains a single test class. That test class has one method for invoking the main entry point for that file.

## Test Mapping

Assertions within test methods simply check to see that the main() function returns a value of 0. This works because most GLM unit test implementations currently add up and return the number of failures.

Some conditional namespace wrapping is required to avoid collision of the "main()" symbol within a specific group of unit tests. This has been done with (we hope) a minimally-intrusive modification to the original test files. (No modifications to the GLM source itself have been made.) This checks to see if a IS_MSVC_NATIVE_UNIT_TEST macro has been defined; if so, the contents of that unit test file are wrapped in a namespace. This name of this namespace is identical to the filename. The test method then invokes "::main()" from that namespace when checking assertions.

## Using

One the solution is loaded, you should be able to 1) build the test solution right away, then 2) run all tests from Visual Studio's "Test Explorer" ("CTRL+E, T"). At present, we have noticed that a number of test cases don't pass in MSVC! This is a good thing, and worth investigating.

The planned structure of test projects and groups looks something like the following; note that, at present, only the core unit tests ("test_core" project) are implemented. Many projects will have a "misc" batch that captures unit tests that don't fall into a clear common grouping.

* core
  * cpp
  * force
  * func
  * setup
  * type
* ext
  * matrix
  * quaternion
  * scalar
  * vector
* gtc
  * matrix
  * misc
  * type
* gtx
  * color
  * exte
  * fast
  * matrix
  * misc
  * norm
  * rotate
  * scalar
  * simd
  * type
  * vec
* perf
  * matrix
  * vector
