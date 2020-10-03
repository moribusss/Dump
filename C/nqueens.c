#include <stdio.h>

void nqueen(int, int);
int place(int, int);
void print(int);

int x[10], count = 0;

int main()
{
  int n;
  printf("\nEnter the number of queens:");
  scanf("%d", &n);
  nqueen(1, n);
  printf("\n");
  return 0;
}

void nqueen(int row, int n)
{
  int col;
  for (col = 1; col <= n; col++)
  {
    if (place(row, col))
    {
      x[row] = col;
      if (row == n)
        print(n);
      else
        nqueen(row + 1, n);
    }
  }
}

int place(int row, int col)
{
  int i;
  for (i = 1; i <= row; i++)
  {
    if (x[i] == col || abs(x[i] - col) == abs(i - row))
      return 0;
  }
  return 1;
}

void print(int n)
{
  int i, j;
  printf("\nSolution:%d\n", ++count);
  for (i = 1; i <= n; i++)
    printf("\t%d", i);
  for (i = 1; i <= n; i++)
  {
    printf("\n%d", i);
    for (j = 1; j <= n; j++)
    {
      if (x[i] == j)
        printf("\tQ");
      else
        printf("\t-");
    }
  }
}