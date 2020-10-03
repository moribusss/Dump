#include <stdio.h>

int main()
{
  int a[10], comp = 0, i, j, temp, n;
  printf("\nEnter the number of array elements:");
  scanf("%d", &n);
  printf("\nEnter the array:");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (j = 1; j < n; j++)
  {
    comp = 0;
    temp = a[j];
    i = j - 1;
    while (i >= 0 && temp < a[i])
    {
      a[i + 1] = a[i];
      i--;
      comp++;
    }
    a[i + 1] = temp;
    printf("\nComparison:%d\n", comp);
    for (i = 0; i < n; i++)
      printf("%d\t", a[i]);
  }
  printf("\nSorted array:\n");
  for (i = 0; i < n; i++)
    printf("%d\t", a[i]);
  printf("\n");
  return 0;
}