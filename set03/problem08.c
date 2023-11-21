//program to find the perimeter of a polygon
#include<stdio.h>
typedef struct point {
    float x,y;
}Point;

 typedef struct polygon {
    int sides;
    Point p[100];
    float perimeter;
 }Polygon;

int input_n()
{
  int  n;
  printf("Enter the number of sides of the polygon: ");
  scanf("%d",&n);
  return n;
}
Point input_point(char *promt_msg)
{
  Point x;
  printf("%s",promt_msg);
  scanf("%d %d",&x.x,&x.y);
  return x;
}
int input_polygon(Polygon *p)
{
  char prompt[100];
   p->sides=input_n();
   for(int i=0;i<p->sides;i++)
   {
     sprintf(prompt,"Enter the coordiates of the point %d (x,y)",i+1);
     p->p[i]=input_point(prompt);
   }
}
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);