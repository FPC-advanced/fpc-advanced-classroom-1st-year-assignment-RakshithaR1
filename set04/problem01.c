//Program to find the sum of two fractions
#include<stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  printf("Enter the numerator and denominator of the 1st number: ");
  scanf("%d %d",num1,den1);
  printf("Enter the numertor and denominator of the 2nd number: ");
  scanf("%d %d",num2,den2);
}
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den)
{
  int temp,a,b;
  if(den1==den2)
  {
    *res_num=num1+num2;
    *res_den=den1;
    }else{
      a=den1;
      b=den2;
      while(b!=0)
      {
        temp=b;
        b=a%b;
        a=temp;
      }
      *res_den=(den1*den2)/a;
      *res_num=num1+num2;
    }

}
void output(int num1, int den1, int num2, int den2, int res_num, int res_den)
{
  printf("%d/%d + %d/%d = %d/%d",num1,den1,num2,den2,res_num,res_den);
}
int main()
{
  int n1,d1,n2,d2,rn,rd;
  input(&n1,&d1,&n2,&d2);
  add(n1,d1,n2,d2,&rn,&rd);
  output(n1,d1,n2,d2,rn,rd);
  return 0;
}