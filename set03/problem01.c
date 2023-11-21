// Program to find the distance between two points
#include <stdio.h>
#include <math.h>
void input(float *x1, float *y1, float *x2, float *y2)
{
  printf("Enter the x and y co-ordinates of the 1st point: ");
  scanf("%f %f", x1, y1);
  printf("Enter the x and y co-ordinates of the 2nd point: ");
  scanf("%f %f", x2, y2);
}
float find_distance(float x1, float y1, float x2, float y2)
{
  float dx = x2 - x1;
  float dy = y2 - y1;
  float sqr_dist = (dx * dx) + (dy * dy);
  float guess = sqr_dist;
  float pre_guess;

  while (fabs(guess - pre_guess) > 0.0001)
  {
    pre_guess = guess;
    guess = 0.5 * (guess + sqr_dist / guess);
  }
  return guess;
}
void output(float x1, float y1, float x2, float y2, float distance)
{
  printf("The distance between the points (%f,%f) and (%f,%f) is %f", x1, y1, x2, y2, distance);
}
int main()
{
  float x1, y1, x2, y2, dis_point;
  input(&x1, &y1, &x2, &y2);
  dis_point = find_distance(x1, y1, x2, y2);
  output(x1, y1, x2, y2, dis_point);
  return 0;
}