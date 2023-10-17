//Program to find the triangle with smallest area in n given triangles
#include<stdio.h>
struct _triangle
{
  float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("Enter the number of triangles ");
  scanf("%d",&n);
  return n;
}