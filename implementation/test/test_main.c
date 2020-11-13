#include "unity.h"
#include "main.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_display_options()
	{
      TEST_ASSERT_EQUAL_STRING("1. Create new account \n",display_options1(1));
	}

	/*void test_sum(void)
	{
  		TEST_ASSERT_EQUAL(30, sum(10, 20));
  		TEST_ASSERT_EQUAL(-30, sum(-50, 20));
	}*/

	int test_main(void)
	{
	  	UNITY_BEGIN();

	  	RUN_TEST(test_display_options);

  		return UNITY_END();
	}
