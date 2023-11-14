//Program to add two fractions 
#include<stdio.h>
typedef struct{
  int num,den;
}Fraction;
Fraction input_fraction()
{
  Fraction n;
  printf("Enter the numerator and denominator of the fraction: ");
  scanf("%d %d",&n.num,&n.den);
  return n;
}
int find_gcd(int a,int b)
{
 
  while(a!=b)
  {
   if(a>b)
   {
    a=a-b;
    return a;
   }else{
    b=b-a;
    return b;
   }
  }
}
Fraction add_fractions(Fraction f1,Fraction f2)
{
  Fraction s;
  int gcd;
  int lcm;
  if(f1.den==f2.den)
  {
    s.num=f1.num+f2.num;
    s.den=f1.den;
    return s;
  }else{
       gcd=find_gcd(f1.den,f2.den);
       lcm=(f1.den*f2.den)/gcd;
       s.den=lcm;
       f1.num=f
       s.num=f1.num+f2.num;
       return s;
  }

}
void output(Fraction f1,Fraction f2,Fraction f3,Fraction sum)
{
  if(f3.num>1)
  {
    for(int i=2;i<f3.num/2;i++)
    {
      if(f3.num%i==0)
      {
        f3.num=f3.num/i;
      }
    }
  }
  if(f3.den>1)
  {
    for(int i=2;i<f3.den/2;i++)
    {
      if(f3.den%i==0)
      {
        f3.den=f3.den/i;
      }
    }
  }
  sum.num=f3.num;
  sum.den=f3.den;
  printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  Fraction a,b,c,tot;
  a=input_fraction();
  b=input_fraction();
  c=add_fractions(a,b);
  output(a,b,c,tot);
  return 0;
}