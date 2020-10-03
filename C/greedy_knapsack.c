#include <stdio.h>

struct items
{
  float weight, profit, ratio;
  int num;
} item[10], temp;

void knapsack(int n, int cap)
{
  float x[20], tp = 0;
  int i, j, c;
  c = cap;
  for (i = 0; i < n; i++)
    x[i] = 0.0;
  for (i = 0; i < n; i++)
  {
    if (item[i].weight > c)
      break;
    else
    {
      tp += item[i].profit;
      c -= item[i].weight;
      x[item[i].num] = 1.0;
    }
  }
  if (i < n)
    x[item[i].num] = c / item[i].weight;
  tp += x[item[i].num] * item[i].profit;
  printf("\nThe resultant vector:");
  for (i = 0; i < n; i++)
    printf("\n%f", x[i]);
  printf("\nMax profit:%f", tp);
}

int main()
{
  int i, j, n, cap;
  printf("\nEnter the number of items:");
  scanf("%d", &n);
  printf("\nEnter the weight and profit:");
  for (i = 0; i < n; i++)
  {
    printf("\nItem %d:", i + 1);
    printf("\nWeight:");
    scanf("%f", &item[i].weight);
    printf("\nProfit:");
    scanf("%f", &item[i].profit);
    item[i].ratio = item[i].profit / item[i].weight;
    item[i].num = i;
  }
  printf("\nEnter the max capacity:");
  scanf("%d", &cap);
  //Sorting
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (item[i].ratio < item[j].ratio)
      {
        temp = item[i];
        item[i] = item[j];
        item[j] = temp;
      }
    }
  }
  printf("\nSorting array");
  printf("\nWeight\tProfit\n");
  for (i = 0; i < n; i++)
    printf("\n%f\t%f", item[i].weight, item[i].profit);
  knapsack(n, cap);
  printf("\n");
  return 0;
}