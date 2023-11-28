// Program to find borga(x) given x
#include <stdio.h>
#include <math.h>
int input(int x)
{
  printf("Enter the value of x: ");
  scanf("%d", &x);
  return x;
}
float borga_x(int x)
{
  float s[x], sum = 0.0, fac, f[x];
  for (int i = 0; i < x; i++)
  {
    s[i] = pow(x, i);
  }
  for (int y = 1; y < =x; y++)
  {
    fac = 1;
    if (y % 2 != 0)
    {
      for (int a = 1; a <= y; a++)
      {
        fac *= a;
      }
    }
    f[y - 1] = fac;
  }
  for (int j = 0; j < x; j++)
  {

    sum += (s[j] / f[j]);

    return sum;
  }
}
void output(int x, float result)
{
  printf("borga(%d)= %f", x, result);
}
int main()
{
  int a;
  float res;
  a = input(a);
  res = borga_x(a);
  output(a, res);
  return 0;
}