#include "unity.h"
#include "main.h"

	void setUp()
	{	}
	void tearDown()
	{	}

	void test_display_options(void)
	{
      TEST_ASSERT_EQUAL(printf("\n1. Create new account \n2. Cash Deposit \n3. Cash withdrawl \n4. Account information \n5. Log out \n6. Clear the screen and display available options \n\n"),test_display_options());
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
