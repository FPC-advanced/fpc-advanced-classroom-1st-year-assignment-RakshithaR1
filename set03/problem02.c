// Program to find whether the given 3 points form a triangle
#include <stdio.h>
#include<math.h>
void input_triangle(float *x1, float *y1, float *x2, float *y2, float *x3, float *y3)
{
  printf("Enter the x and y co-ordinates of the 1st point: ");
  scanf("%f %f", x1, y1);
  printf("Enter the x and y co-ordinates of the 2nd point: ");
  scanf("%f %f", x2, y2);
  printf("Enter the x and y co-ordinates of the 3rd point: ");
  scanf("%f %f", x3, y3);
}
int is_triangle(float x1, float y1, float x2, float y2, float x3, float y3)
{
  float area;
  area = 0.5 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
  if(fabs(area)<0.000001)
  {
    return 0;
  }else{
    return 1;
  }

}
void output(float x1, float y1, float x2, float y2, float x3, float y3, int result)
{
  if (result == 0)
  {
    printf("The points (%.1f, %.1f), (%.1f, %.1f),(%.1f, %.1f) do not form a triangle", x1, y1, x2, y2, x3, y3);
  }
  else
  {
    printf("The points (%.1f, %.1f), (%.1f, %.1f),(%.1f, %.1f) form a triangle.", x1, y1, x2, y2, x3, y3);
  }
}
int main()
{
  float x1, y1, x2, y2, x3, y3;
  int area;
  input_triangle(&x1, &y1, &x2, &y2, &x3, &y3);
  area = is_triangle(x1, y1, x2, y2, x3, y3);
  output(x1, y1, x2, y2, x3, y3, area);
  return 0;
}