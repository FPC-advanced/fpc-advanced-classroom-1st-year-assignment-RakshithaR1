// Program to find borga(x) given x
#include <stdio.h>
#include <math.h>
int input(int x)
{
  printf("Enter the value of x: ");
  scanf("%d", &x);
  return x;
}
int fact(int x)
{
  int fac=1;
  for(int i=1;i<=x;i++)
  {
    fac*=i;
  }
  return fac;
}
float borga_x(int x)
{
  float sum=0,den,num;
  int i=0,m=1;
  do{
    if(m%2!=0)
    {
      i-=1;
      den=fact(m);
      num=pow(x,i);
      if(num/den<0.000001)
      {
        break;
      }
      sum+=num/den;
       
    }
    m++; 
    i++;
    
  }while(sum>0.000001);
  return sum;
}
void output(int x, float result)
{
  printf("borga(%d)= %f", x, result);
}
int main()
{
  int a;
  float res;
  a = input(a);
  res = borga_x(a);
  output(a, res);
  return 0;
}