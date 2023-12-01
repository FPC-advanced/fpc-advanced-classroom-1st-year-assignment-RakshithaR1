// Program to find the index of a substring of a string
#include <stdio.h>
#include<string.h>
void input_string(char *a, char *b)
{
  printf("Enter the string: ");
  scanf("%s", a);
  printf("Enter the substring whose index has to be found: ");
  scanf("%s", b);
}
int sos(char *substring)
{
  int i=0;
  while(substring[i]!='\0')
  {
    i++;
  }
  return i;
}
int sub_str_index(char *string, char *substring)
{
  int r;
  for (int j = 0;string[j] != '\0'; j++)
  {
    
    if(string[j]==substring[0])
    {
      
      int k=sos(substring);
      r=strncmp(string+i,substring,k);
      if(r==0)
      {
        return j;
      }
    }
   }
   return -1;   
 }
  
void output(char *string, char *substring, int index)
{
  if(index>=0)
  {
  printf("The index of '%s' in '%s' is %d", substring, string, index);
  }else{
    printf("The substring does not exist.");
  }
}
int main()
{
  char a[100], b[100];
  int n;
  input_string(a, b);
  n = sub_str_index(a, b);
  output(a, b, n);
  return 0;
}