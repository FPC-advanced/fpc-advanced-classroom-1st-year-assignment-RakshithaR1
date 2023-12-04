// Program to find the index of a substring of a string
#include <stdio.h>
#include <string.h>
void input_string(char *a, char *b)
{
  printf("Enter the string: ");
  scanf("%s", a);
  printf("Enter the substring whose index has to be found: ");
  scanf("%s", b);
}
int sub_size(char *substring)
{
  int i = 0;
  while (substring[i] != '\0')
  {
    i++;
  }
  return i;
}
int str_size(char *string)
{
  int j=0;
  while(string[j]!='\0')
  {
    j++;
  }
  return j;
} 
int sub_str_index(char *string, char *substring)
{
  int r;
  int s=str_size(string);
  int k = sub_size(substring);
  for (int j = 0; string[j] != '\0'&&string[s]>=substring[k]; j++)
  {

    if (string[j] == substring[0])
    {

      r = strncmp(string + j, substring, k);
      if (r == 0)
      {
        return j;
      }
    }
  }
  return -1;
}

void output(char *string, char *substring, int index)
{
  if (index >= 0)
  {
    printf("The index of '%s' in '%s' is %d", substring, string, index);
  }
  else
  {
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