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
  Polygon n;
  printf("Enter the number of sides of the polygon: ");
  scanf("%d",&n.sides);
  return n;
}
Point input_point(char *promt_msg);
int input_polygon(Polygon *p)
{

}
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);