//Program to find the length of a line
#include<stdio.h>
#include<math.h>
struct point{
  float x,y;
};
typedef struct point Point;
struct line{
  Point p1,p2;
  float distance;
};
typedef struct line Line;
Point input_point()
{
  Point l;
  printf("Enter the x and y co-ordinates: ");
  scanf("%f %f",&l.x,&l.y);
  return l;
}
Line input_line()
{
  Line l1;
  printf("Enter the co-ordinates of the 1st point:\n ");
  l1.p1=input_point();
  printf("Enter the co-ordinates of the 2nd point:\n ");
  l1.p2=input_point();
  l1.distance=0;
  return l1;
}
void find_length(Line *l)
{
  float dx,dy;
  dx=l->p2.x-l->p1.x;
  dy=l->p2.y-l->p1.y;
  float area=(dx*dx)+(dy*dy);
  float guess=area;
  float prev_guess;
  float epsilon=0.0001;
  do{
    prev_guess=guess;
    guess=0.5*(guess+area/guess);
  }while(fabs(guess-prev_guess)>epsilon);
  l->distance=guess;
  }
void output(Line l)
{
  printf("The distance between the points (%f,%f) and (%f,%f) is %f",l.p1.x,l.p1.y,l.p2.x,l.p2.y,l.distance);

}
int main()
{
  Line L;
  L=input_line();
  find_length(&L);
  output(L);
  return 0;
}