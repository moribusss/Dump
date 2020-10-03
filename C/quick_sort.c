#include <stdio.h>

int partition(int a[], int, int);
void quick_sort(int a[], int, int);

int main()
{
  int a[10], n, i;
  printf("\nEnter the number of elements:");
  scanf("%d", &n);
  printf("\nEnter the array elements:");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  quick_sort(a, 0, n - 1);
  printf("\nSorted array:\n");
  for (i = 0; i < n; i++)
    printf("%d\t", a[i]);
  printf("\n");
  return 0;
}

void quick_sort(int a[], int p, int r)
{
  int q;
  if (p < r)
  {
    q = partition(a, p, r);
    quick_sort(a, p, q - 1);
    quick_sort(a, q + 1, r);
  }
}

int partition(int a[], int p, int r)
{
  int x, comp = 0, i, j, temp;
  x = a[r];
  i = p - 1;
  for (j = p; j < r; j++)
  {
    if (a[j] < x)
    {
      comp++;
      i++;
      temp = a[j];
      a[j] = a[i];
      a[i] = temp;
    }
  }
  a[r] = a[i + 1];
  a[i + 1] = x;
  printf("\nComparison:%d\n", comp);
  for (j = p; j < r; j++)
    printf("%d\t", a[j]);
  return i + 1;
}