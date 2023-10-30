//program to find the perimeter of a polygon
#include<stdio.h>
struct point {
    float x,y;
}; 
typedef struct point Point;
 struct polygon {
    int sides;
    Point p[100];
    float perimeter;
};
typedef struct polygon Polygon;

int input_n()
{
  int n;
  printf("Enter the number of sides of the polygon: ");
  scanf("%d",&n);
  return n;
}
Point input_point(char *promt_msg);
int input_polygon(Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(Polygon* p);
void output(Polygon p);