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
Triangle input_triangle()
{
  Triangle t;
  printf("Enter the base and altitude of the triangle: ");
  scanf("%f %f",&t.base,&t.altitude);
  return t;
}
void input_n_triangles(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
  { 
    printf("%d Triangle:\n",i+1);
    t[i]=input_triangle();
  }
}
void find_area(Triangle *t)
{
  t->area=0.5*t->altitude*t->base;
}
void find_n_areas(int n,Triangle t[n])
{
  for(int i=0;i<n;i++)
  {
    find_area(&t[i]);
  }
}
Triangle find_smallest_triangle(int n,Triangle t[n])
{
   Triangle small=t[0];
   
   for(int i=0;i<n;i++)
   {
    if(t[i].area<small.area)
    {
      small=t[i];
    }
   }
   return small;
}
void output(int n,Triangle t[n],Triangle smallest)
{
  printf("The smallest triangle out of %d triangles with base and height ",n);
  for(int i=0;i<n;i++)
  {
    printf("(%.0f, %.0f)",t[i].base,t[i].altitude);
  }
  printf("is the triangle having base %.2f,height %.2f and area %.2f",smallest.base,smallest.altitude,smallest.area);
}
int main()
{
  int n;
  Triangle t[100],smallest;
  n=input_n();
  input_n_triangles(n,t);
  find_n_areas(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}

