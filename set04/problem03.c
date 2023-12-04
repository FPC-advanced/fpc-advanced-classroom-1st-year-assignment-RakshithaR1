// Program to find the 'nCr' of the given n and r
#include <stdio.h>
void input_n_and_r(int *n, int *r)
{
  printf("Enter the value of n: ");
  scanf("%d", n);
  printf("Enter the value of r: ");
  scanf("%d", r);
}
int nCr(int n, int r)
{
  int num = 1, den, dif, fac = 1, fac2 = 1, comb;
  for (int i = 1; i <= n; i++)
  {
    num *= i;
  }
  dif = n - r;
  for (int i = 1; i <= dif; i++)
  {
    fac *= i;
  }
  for (int i = 1; i <= r; i++)
  {
    fac2 *= i;
  }
  den = fac * fac2;
  comb = num / den;
  return comb;
}
void output(int n, int r, int result)
{
  printf("For n = %d and r = %d, nCr = %d", n, r, result);
}
int main()
{
  int n, r, result;
  input_n_and_r(&n, &r);
  result = nCr(n, r);
  output(n, r, result);
  return 0;
}