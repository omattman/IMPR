/*
 * Write a function that will merge the contents of two sorted (ascending order)
 * arrays of type double values, storing the result in an array output parameter
 * (still in ascending order). The function should not assume that both its input
 * parameter arrays are the same length but can assume that one array does not
 * contain two copies of the same value. The result array should also contain no
 * duplicate values.
 *
 * Hint: When one of the input arrays has been exhausted, do not forget to copy
 * the remaining data in the other array into the result array. Test your function
 * with cases in which (1) the first array is exhausted first, (2) the second array
 * is exhausted first, and (3) the two arrays are exhausted at the same time (i.e.,
 * they end with the same value). Remember that the arrays input to this function
 * must already be sorted.
 */


#include <stdio.h>

void merge(double a, int m, double b, int n, int sorted[]);

int main(void) {
  double s1[10] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};
  double s2[10] = {6.0, 7.0, 8.0, 9.0, 10.0, 11.0, 12.0, 13.0, 14.0, 15.0};
  int sorted[20];

  int aSize, bSize, mSize, i, j;

  int s1_length = sizeof(s1)/sizeof(double);
  int s2_length = sizeof(s2)/sizeof(double);

  for(i = 0; i < s1_length; i++) {
    Merged[i] = a[i];
  }

  mSize = aSize + bSize;

  for(i = 0, j = aSize; j < mSize && i < bSize; i++, j++)
  {
    Merged[j] = b[i];
  }

  printf("\n a[%d] Array Elements After Merging \n", mSize);
  for(i = 0; i < mSize; i++)
  {
    printf(" %d \t ",Merged[i]);
  }

  return 0;
}