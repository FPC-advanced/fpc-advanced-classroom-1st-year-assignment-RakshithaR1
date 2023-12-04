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

  if (a.num / a.den < b.num / b.den && a.num / a.den < c.num / c.den)
  {
    return a;
  }
  else if (b.num / b.den < c.num / c.den)
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