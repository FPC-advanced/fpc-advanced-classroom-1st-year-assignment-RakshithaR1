// Program to find the smallest of three fraction
#include <stdio.h>
typedef struct
{
  int num, den;
} Fraction;
Fraction input()
{
  Fraction a;
  printf("Enter the numerator and the denominator of the number: ");
  scanf("%d %d", &a.num, &a.den);
  return a;
}
Fraction smallest(Fraction a, Fraction b, Fraction c)
{
  float p, q, r;
  p = a.num / a.den;
  q = b.num / b.den;
  r = c.num / c.den;
  if (p < q && p < r)
  {
    return a;
  }
  else if (q < r)
  {
    return b;
  }
  else
  {
    return c;
  }
}
void output(Fraction a, Fraction b, Fraction c, Fraction small)
{
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d", a.num, a.den, b.num, b.den, c.num, c.den, small.num, small.den);
}
int main()
{
  Fraction x, y, z, small;
  x = input();
  y = input();
  z = input();
  small = smallest(x, y, z);
  output(x, y, z, small);
  return 0;
}