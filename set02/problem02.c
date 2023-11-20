//program to find if a trangle is scalene
#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the side of the triangle: ");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b&&a!=c&&b!=c)
  {
    return 1;
  }else{
    return 0;
  }
  
}
void output(int a,int b,int c,int isscalene)
{
  if(isscalene!=0)
  {
    printf("The triangle with sides %d, %d and %d is a scalene.",a,b,c);

  }else{
    printf("The triangle with sides %d,%d and %d is not scalene. ",a,b,c);
  }
}
int main()
{
  int x,y,z, isscalene;
  x=input_side();
  y=input_side();
  z=input_side();
  isscalene=check_scalene(x,y,z);
  output(x,y,z,isscalene);
  return 0;
}