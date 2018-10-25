#include <stdio.h>
#include "CuTest.h"

char* StrToUpper(char* str) {
  char* p;
  for (p = str ; *p ; ++p) *p = toupper(*p);
  return str;
}

char* StrToMixed(char* str) {
  char* p;
  for (p = str ; *p ; ++p) {
    *p = toupper(*p);
  }
  return str;
}

void TestStrToUpper(CuTest *tc) {
  char* input = strdup("hello world");
  char* actual = StrToUpper(input);
  char* expected = "HELLO WORLD";
  CuAssertStrEquals(tc, expected, actual);
}

void TestStrToMixed(CuTest *tc) {
  char* input = strdup("hello world");
  char* actual = StrToMixed(input);
  char* expected = "HELLO world";
  CuAssertStrEquals(tc, expected, actual);
}

CuSuite* StrUtilGetSuite() {
  CuSuite* suite = CuSuiteNew();
  SUITE_ADD_TEST(suite, TestStrToUpper);
  SUITE_ADD_TEST(suite, TestStrToMixed);
  return suite;
}
