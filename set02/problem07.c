//Program to find the area of a triangle
#include<stdio.h>
struct _triangle{
  float base,altitude,area;
};
typedef struct _triangle Triangle;

Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base of the triangle: ");
  scanf("%f",&t.base);
  printf("Enter the height(altitude) of the triangle: ");
  scanf("%f",&t.altitude);
  return t;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->altitude*t->base;
}
void output(Triangle t)
{
  printf("The are of triangle with base= %f and altitude= %f is %f ",t.base,t.altitude,t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}
