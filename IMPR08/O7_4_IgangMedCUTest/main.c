/*
 * Formålet med denne opgave at hjælpe dig i gang med brug af unit testing frameworket CUTest for C programmer.
 * Der findes også en video som hjælper dig i gang med CuTest.
 *
 * Naviger til http://cutest.sourceforge.net/ og download CUTest. I oktober 2018 har den seneste version af CUTest
 * nummer 1.5. Det du downloader er en ganske lille pakket fil (en zip-fil) med nogle få C programmer.
 * Udtræk filerne fra den pakkede fil, og læs derefter README file. Denne udgør brugervejledningen til CUTest.
 *
 * Når du skal bruge CUTest er det lettest at kopiere filerne CUTest.C og CUTest.h til det katalog, hvor
 * du har det C program, som du ønsker at teste.
 *
 * I README filen kan du læse, hvordan du oversætter og kører et testprogram, som er lavet med brug af CUTest.
 * Prøv det gerne selv af på de programmer med tests, der er vist på den tilhørende slide (eller på et af dine
 * egne programmer du ønsker at teste).
 */

#include <stdio.h>
#include <stdlib.h>
#include "CuTest.h"

int isLeapYear(int yr);

/* Function Under Test */
int daysInMonth(int month, int year){
  int numberOfDays;
  switch(month){
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
      numberOfDays = 31; break;
    case 4: case 6: case 9: case 11:
      numberOfDays = 30; break;
    case 2:
      if (isLeapYear(year)) numberOfDays = 29;
      else numberOfDays = 28; break;
    default: exit(-1);  break;
  }
  return numberOfDays;
}

/* Test function of daysInMonth */
void testDaysInMonthJan(CuTest *tc){
  int actual = daysInMonth(1, 2010);
  int expected = 31;
}

void testDaysInMonthFeb(CuTest *tc){
  int actual = daysInMonth(2, 2010);
  int expected = 28;
  CuAssertIntEquals(tc, expected, actual);
}

void testDaysInMonthApr(CuTest *tc){
  int actual = daysInMonth(4, 2010);
  int expected = 30;
  CuAssertIntEquals(tc, expected, actual);
}

void testDaysInMonthDec(CuTest *tc){
  int actual = daysInMonth(12, 2010);
  int expected = 31;
  CuAssertIntEquals(tc, expected, actual);
}

/* Stub */
int isLeapYear(int year){
  return 0;
}

/* Test case management: Adding the test case to a test suite */
/* This is where the tests are run */
CuSuite* daysInMonthGetSuite(void) {
  CuSuite* suite = CuSuiteNew();
  SUITE_ADD_TEST(suite, testDaysInMonthJan);
  SUITE_ADD_TEST(suite, testDaysInMonthFeb);
  SUITE_ADD_TEST(suite, testDaysInMonthApr);
  SUITE_ADD_TEST(suite, testDaysInMonthDec);
  return suite;
}