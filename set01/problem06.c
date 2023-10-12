//Program to compare three numbers using pass by reference 
#include<stdio.h>
int max(int a,int b)
{
  return (a>b)?a:b;
}
int input(int *a,int *b,int *c)
{
  printf("Enter the three numbers: ");
  scanf("%d %d %d",a,b,c);
  return 0;
}
void compare(int a,int b,int c,int *largest)
{
  *largest=max(max(a,b),c);
}
void output(int a,int b,int c,int largest)
{
  printf("The largest of %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
  int x,y,z,largest;
  int ex=input(&x,&y,&z);
  compare(x,y,z,&largest);
  output(x,y,z,largest);
  return 0;
}