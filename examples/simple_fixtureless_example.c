#include "metal_test.h"

METAL_FIXTURE_DEFINE {};
METAL_SETUP {};
METAL_TEARDOWN {};

METAL_SUITE_BEGIN
{
   METAL_TEST(example_passing_test)
   {
      int test_value = 1;
      METAL_ASSERT(test_value);
   }

   METAL_TEST(example_failing_test) 
   {
      int test_value = 0;
      METAL_ASSERT(test_value);
      METAL_ASSERT(test_value);
   }

   METAL_TEST(example_second_failing_test) 
   {
      METAL_ASSERT_EQ((unsigned int)-5,0);
   }
}
METAL_SUITE_END 
