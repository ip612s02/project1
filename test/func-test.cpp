#include "ctest.h"
#include "../src/deposit.h"

CTEST(Summa, test_summa_5+10=15)
{
	int result = Summa (15, 19);
	int expected = 34;
	ASSERT_EQUAL(expected, result);
}
CTEST(Minus, test_minus_10-5=5)
{
	int result = Minus (77, 31);
	int expected = 46;
	ASSERT_EQUAL(expected, result);
}
CTEST(Product, test_product_7*12=84)
{
	int result = Product (5, 10);
	int expected = 15;
	ASSERT_EQUAL(expected, result);
}
CTEST(Divit, test_divit_21/3=7)
{
	int result = Divit (21, 3);
	int expected = 7;
	ASSERT_EQUAL(expected, result);
}
CTEST(Fact, test_fact_5)
{
	int result = Fact (5);
	int expected = 120;
	ASSERT_EQUAL(expected, result);
}
