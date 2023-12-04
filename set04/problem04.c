// Program to evaluate a polynomial at a given point using horner's method
#include <stdio.h>
#include <math.h>
int input_degree()
{
  int n;
  printf("Enter the degree of the polynomial\n");
  scanf("%d", &n);
  return n;
}
void input_coefficients(int n, float a[n])
{
  printf("Enter the coefficients:\n");
  for (int i = 0; i <= n; i++)
  {
    scanf("%f", &a[i]);
  }
}
float input_x()
{
  float x;
  printf("Enter the value of x\n");
  scanf("%f", &x);
  return x;
}
float evaluate_polynomial(int n, float a[n], float x)
{
  float deg = 0;
  for (int i = 0; i <= n; i++)
  {
    deg += a[i] * pow(x, i);
  }
  return deg;
}
void output(int n, float a[n], float x, float result)
{

  printf("H(1,1,1) = ");
  for (int i = 0; i <= n; i++)
  {
    while (i == 0)
    {
      printf("%.2f ", a[i]);
      break;
    }
    if (i > 0 && i <= n)
    {
      printf(" + %.2f*%.2f^%d ", a[i], x, i);
    }
  }
  printf(" = %f", result);
}
int main()
{
  int n;
  float x[1000], y, horner;
  n = input_degree();
  input_coefficients(n, x);
  y = input_x();
  horner = evaluate_polynomial(n, x, y);
  output(n, x, y, horner);
  return 0;
}
