#include <stdio.h>

void merge_sort(int a[], int, int);
void merge(int a[], int, int, int);

int main()
{
  int a[10], n, i;
  printf("\nEnter the number of elements:");
  scanf("%d", &n);
  printf("\nEnter the array elements:");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  merge_sort(a, 0, n - 1);
  printf("\nSorted array:\n");
  for (i = 0; i < n; i++)
    printf("%d\t", a[i]);
  printf("\n");
  return 0;
}

void merge_sort(int a[], int beg, int end)
{
  int mid;
  if (beg < end)
  {
    mid = (beg + end) / 2;
    merge_sort(a, beg, mid);
    merge_sort(a, mid + 1, end);
    merge(a, beg, mid, end);
  }
}

void merge(int a[], int beg, int mid, int end)
{
  int i = beg, j = mid + 1, k, index = beg, temp[20], comp = 0;
  while (i <= mid && j <= end)
  {
    if (a[i] < a[j])
      temp[index] = a[i++];
    else
      temp[index] = a[j++];
    comp++;
    index++;
  }
  while (i <= mid)
  {
    temp[index++] = a[i++];
    comp++;
  }
  while (j <= end)
  {
    temp[index++] = a[j++];
    comp++;
  }
  for (k = beg; k < index; k++)
    a[k] = temp[k];
  printf("\nComparison:%d\n", comp);
  for (k = beg; k < index; k++)
    printf("%d\t", a[k]);
}