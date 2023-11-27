//Program to find borga(x) given x
#include<stdio.h>
#include<math.h>
int input(int x)
{
  printf("Enter the value of x: ");
  scanf("%d",&x);
  return x;
}
float borga_x(int x)
{
   float s[x],sum=0.0,fac,f[x];
   for(int i=0;i<x;i++)
   {
     s[i]=pow(x,i);
   }
   for(int y=1;y<x;y++)
   {
     fac=1;
     for(int a=1;a<=y;a++)
     {
       fac *= a;
     }

   }
   for(int j=0;j<x;j++)
   {
     if(j%2!=0)
     {
      for(int z=0;z<x;z++)
      {
        sum += (s[z]);
      }
     }
   }
}
void output(int x,float result)
{
  
}