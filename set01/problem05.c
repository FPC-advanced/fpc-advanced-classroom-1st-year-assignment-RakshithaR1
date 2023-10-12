//Program to compare  three numbers using pass by value
#include<stdio.h>
int input()
{
  int a;
  printf("Enter the number: ");
  scanf("%d",&a);
  return a;
}
int compare(int a,int b,int c)
{
  if(a>b&&a>c)
  {
    return a;
  }else if(b>c)
  {
    return b;
  }else
  {
    return c;
  }
}
void output(int a,int b,int c,int largest)
{
  printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
  int x,y,z,large;
  x=input();
  y=input();
  z=input();
  large=compare(x,y,z);
  output(x,y,z,large);
  return 0;
}
