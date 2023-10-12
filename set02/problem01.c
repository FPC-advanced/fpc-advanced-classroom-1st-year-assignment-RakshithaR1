//program to find the area of a triangle
#include<stdio.h>
void input(float *base, float *height)
{
  printf("Enter the length of the base of the triangle: ");
  scanf("%f",base);
  printf("Enter the height of the triangle: ");
  scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
  *area=0.5*base*height;
}
void output(float base, float height, float area)
{
  printf("The area of the trangle having base %.2f and height %.2f is %.2f ",base,height,area);
}
int main()
{
  float x,y,area;
  input(&x,&y);
  find_area(x,y,&area);
  output(x,y,area);
  return 0;
}