//Program to add n fractions
#include<stdio.h>
typedef struct fraction
{
    int num, den;
} Fraction;

int input_n()
{
  int n;
  printf("Enter the number of fractions: ");
  scanf("%d",&n);
  return n;
}
Fraction input_fraction()
{
   Fraction x;
  printf("Enter the numerator and denominator of the fraction: \n");
  scanf("%d %d",&x.num,&x.den);
  return x;
}
void input_n_fractions(int n, Fraction f[n])
{
  for(int i=0;i<n;i++)
  {
    printf("Enter the fraction no.%d \n",i+1);
    f[i]=input_fraction();
  }
}
int find_gcd(int a, int b)
{
  int temp;
  while(b!=0)
  {
    temp=b;
    b=a%b;
    a=temp;
  }
  return a;
}
Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction sum;
   int gcd;
      gcd=find_gcd(f1.den,f2.den);
      sum.den=(f1.den*f2.den);
      f1.num=f1.num*f2.den;
      f2.num=f2.num*f1.den;
      sum.num=f1.num+f2.num;
      resnum=sum.num;
      resden=sum.den;
      resgcd=find_gcd(resnum,resden);
      sum.num=sum.num/resgcd;
      sum.den=sum.den/resgcd;
      return sum;
  }
  
}
Fraction add_n_fractions(int n, Fraction f[n])
{
  Fraction sum={0,0};
  for(int i=0;i<n;i++)
  {
    sum=add_fractions(sum,f[i]);
  }
  return sum;
}
void output(int n, Fraction f[n], Fraction sum)
{
  for(int i=0;i<n;i++)
  {
    printf("%d/%d", f[i].num,f[i].den);
    if(i<n-1)
    {
      printf(" + ");
      
    }

  }
  printf(" =%d/%d", sum.num,sum.den);
}
int main()
{
  Fraction f[100],sum;
  int n;
  n=input_n();
  input_n_fractions(n,f);
  sum=add_n_fractions(n,f);
  output(n,f,sum);
  return 0;
}