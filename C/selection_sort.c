#include <stdio.h>

void selection(int a[], int);

int main()
{
  int a[10], n, i;
  printf("\nEnter the number of elements:");
  scanf("%d", &n);
  printf("\nEnter the array elements:");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  selection(a, n);
  printf("\nSorted array:\n");
  for (i = 0; i < n; i++)
    printf("%d\t", a[i]);
  printf("\n");
  return 0;
}

void selection(int a[], int n)
{
  int i, j, min, comp, temp;
  for (i = 0; i < n; i++)
  {
    min = i;
    comp = 0;
    for (j = i + 1; j < n; j++)
    {
      if (a[min] > a[j])
      {
        comp++;
        min = j;
      }
    }
    if (min != j)
    {
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
    printf("\nComparisons:%d\n", comp);
    for (j = 0; j < n; j++)
      printf("%d\t", a[j]);
  }
}