#include "unity.h"
#include "tryexeception.h"
#include "exception.h"
#include "CExceptionConfig.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_tryexception_3(void)
{
  tryException(3);
}

void test_tryexception_1(void)
{
  tryException(0);
}