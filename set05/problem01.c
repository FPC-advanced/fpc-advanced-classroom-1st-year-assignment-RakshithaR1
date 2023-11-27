// Program to find the distance between two points
#include<stdio.h>
#include<math.h>
struct _point
{
  float x;
  float y;
};
typedef struct _point Point;
Point input()
{
  Point a;
  printf("Enter the x co-ordinate: ");
  scanf("%f", &a.x);
  printf("Enter the y co-ordinate: ");
  scanf("%f", &a.y);
  return a;
}
void dist(Point a, Point b, float *res)
{
  float c, d, sqr;
  c = b.x - a.x;
  d = b.y - a.y;
  sqr = (c * c) + (d * d);
 *res = square(sqr);
}
int square(float n)
{
   int guess = n, preguess;
  while (fabs(guess - preguess) > 0.0001)
  {
    preguess = guess;
    guess = 0.5 * (guess + n / guess);
  }
  return guess;
}
void output(Point a, Point b, float res)
{
  printf("The Distance between (%.1f,%.1f) and (%.1f,%.1f) is %.1f", a.x, a.y, b.x, b.y, res);
}
int main()
{
  Point x, y;
  float dista;
  x = input();
  y = input();
  dist(x, y, &dista);
  output(x, y, dista);
  return 0;
}
