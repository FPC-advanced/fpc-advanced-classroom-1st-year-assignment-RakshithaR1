// Program to add two fractions
#include <stdio.h>
typedef struct
{
  int num, den;
} Fraction;
Fraction input_fraction()
{
  Fraction n;
  printf("Enter the numerator and denominator of the fraction: ");
  scanf("%d %d", &n.num, &n.den);
  return n;
}
int find_gcd(int a, int b)
{
   int temp;
  while (b!=0)
  {
    temp=b;
    b=a%b;
    a=temp;
    }
    return a;
  }

Fraction add_fractions(Fraction f1, Fraction f2)
{
  Fraction s;
  int gcd;
  int lcm;
 
    gcd = find_gcd(f1.den, f2.den);
    s.den= (f1.den * f2.den) / gcd;
    
    f1.num = f1.num * f2.den;
    f2.num = f2.num * f1.den;
    s.num = f1.num + f2.num;
    return s;
  
 
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
{
  int resnum=f3.num;
  int resden=f3.den;
  int temp;
  while(resden!=0)
  {
     temp=resden;
     resden=resnum%resden;
     resnum=temp;
  }
  sum.num=f3.num/resnum;
  sum.den=f3.den/resnum;
  printf("%d/%d + %d/%d = %d/%d",f1.num,f1.den,f2.num,f2.den,sum.num,sum.den);
}
int main()
{
  Fraction a, b, c, tot;
  a = input_fraction();
  b = input_fraction();
  c = add_fractions(a, b);
  output(a, b, c, tot);
  return 0;
}