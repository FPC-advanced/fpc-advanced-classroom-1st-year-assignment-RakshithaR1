//program to find the perimeter of a polygon
#include<stdio.h>
#include<math.h>
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
  printf("Enter the number of sides of the polygon:\n ");
  scanf("%d",&n);
  return n;
}
Point input_point(char *promt_msg)
{
  Point x;
  printf("%s",promt_msg);
  scanf("%f %f",&x.x,&x.y);
  return x;
}
void input_polygon(Polygon *p)
{
  char prompt[100];
   p->sides=input_n();
   for(int i=0;i<p->sides;i++)
   {
     sprintf(prompt,"Enter the coordiates of the point %d (x,y):\n",i+1);
     p->p[i]=input_point(prompt);
   }
   p->perimeter=0.0;
   }
float find_distance(Point a, Point b)
{
  float dx,dy,sr;
  dx=b.x-a.x;
  dy=b.y-a.y;
  sr=(dx*dx)+(dy*dy);
  float guess=sr;
  float preguess=0;
  while(fabs(guess-preguess)>0.0001)
  {
    preguess=guess;
    guess=0.5*(guess+sr/guess);
  }
  return guess;
}
void find_perimeter(Polygon* p)
{
  Polygon f[100];
  f->p[0]=p->p[0];
  float dist[100];
  for(int i=1;i<p->sides;i++)
  {
    dist[i-1]=find_distance(f->p[0],p->p[i]);
    f->p[0]=p->p[i];
  }
  for(int j=0;j<p->sides;j++)
  {
    p->perimeter+=dist[j];
  }
}
void output(Polygon p)
{
  printf("The perimeter of the polynomial is %f",p.perimeter);
}
int main()
{
  Polygon p;
  int n;
  input_polygon(&p);
  find_perimeter(&p);
  output(p);
  return 0;
}