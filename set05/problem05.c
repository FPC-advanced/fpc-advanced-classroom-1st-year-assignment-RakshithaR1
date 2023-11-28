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