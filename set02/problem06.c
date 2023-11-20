//Program to reverse a string 
#include<stdio.h>
void input_string(char *a)
{
  printf("Enter the string: ");
  scanf("%s",a);
}
void str_reverse(char *str,char *rev_str)
{  
  int n=0;
  for(n=0;str[i]!='\0';i++);
  for(int i=0;i<n;i++)
  {
    rev_str[i]=str[n-i-1];
  }
  rev_str[n]='\0';
}
void output(char *a,char *reverse_a)
{
  printf("The Original string is %s \n",a);
  printf("The reversed string is %s \n",reverse_a);
}
int main()
{
  char s[100],rev[100];
  input_string(s);
  str_reverse(s,rev);
  output(s,rev);
  return 0;
}