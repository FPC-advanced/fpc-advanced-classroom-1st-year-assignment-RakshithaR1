//Program to find the distance between two points 
#include<stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the x and y co-ordinates of the 1st point: ");
  scanf("%f %f",x1,y1);
  printf("Enter the x and y co-ordinates of the 2nd point: ");
  scanf("%f %f",x2,y2);
}
float find_distance(float x1,float y1,float x2,float y2)
{
  float dx=x1-y1;
  float dy=y2-y1;
  float sqr_dist=(dx*dx)+(dy*dy);
  float guess=sqr_dist;
  float pre_guess;
  float epsilon
}