#include <stdio.h>

typedef int index;
typedef int element;

void do_partitioning(element[], index, index, index*, index*);
void swap(index*, index*);
void prn_array(char* s, int a[], int from, int to);
void partitioning_info(element a[], index from, index to,
                       index point_left, index point_right);

/* Sort the array interval a[from..to] */
void quicksort(element a[], index from, index to){
  index point1, point2;

  if (from < to){
    do_partitioning(a, from, to, &point1, &point2);
    partitioning_info(a, from, to, point1, point2);
    quicksort(a, from, point1);
    quicksort(a, point2, to);
  }
}

void partitioning_info(element a[], index from, index to,
                       index point_left, index point_right){
  printf("Partitioning a[%i .. %i]\n", from, to);
  prn_array("Small:", a, from, point_left); printf("\n");
  prn_array("Large:", a, point_left+1, to); printf("\n\n");
}

/* Do a partitioning of a, and return the partitioning
   points in *point_left and *point_right */
void do_partitioning(element a[], index from, index to,
                     index *point_left, index *point_right){
  index i,j;
  element partitioning_el;

  i = from - 1; j = to + 1;
  partitioning_el = a[from];
  do{
    do {i++;} while (a[i] < partitioning_el);
    do {j--;} while (a[j] > partitioning_el);
    if (i < j) swap(&a[i],&a[j]);
  } while (i < j);

  if (i > j) {
    *point_left = j; *point_right = i;}
  else {
    *point_left = j-1; *point_right = i+1;}
}


int main(void) {

  int   a[] = {7, 3, 66, 3, -5, 22, -77, 2};
  int   n;

  n = sizeof(a) / sizeof(int);
  prn_array("Before", a, 0, n-1); printf("\n\n");
  quicksort(a, 0, n-1);
  prn_array(" After", a, 0, n-1); printf("\n\n");
  putchar('\n');

  return 0;
}


void swap(element *p, element *q)
{
  element   tmp;

  tmp = *p;
  *p = *q;
  *q = tmp;
}

void prn_array(char* s , int a[], int from, int to)
{
  int   i;

  printf("%s a[%i,%i]: ", s, from, to);
  for (i = from; i <= to; ++i)
    printf("%5d", a[i]);
}