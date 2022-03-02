#include "calculator.h"
#include "unity.h"

void test_add(void);
void test_sub(void);
void test_mul(void);

/* Required by the unity test framework */
void setUp(void){}
/* Required by the unity test framework */
void tearDown(void){}

int main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  /* Close the Unity Test Framework */
  return UNITY_END();
}

void test_add(void)
{
    TEST_ASSERT_EQUAL(20,addition(10,10));
}
void test_sub(void)
{
    TEST_ASSERT_EQUAL(20,subtraction(10,10));
}
void test_mul(void)
{
    TEST_ASSERT_EQUAL(100,multiplication(10,10));
}