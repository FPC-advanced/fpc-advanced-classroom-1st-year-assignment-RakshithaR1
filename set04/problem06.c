// Program to count the number of words in a string using strtok
#include <stdio.h>
#include <string.h>
void input_string(char *a)
{
  printf("Enter the string: ");
  scanf("%[^\n]s", a);
}
int count_words(char *string)
{
  int words = 0;
  string = strtok(string," ");

  while (string != NULL)
  {
    words += 1;
    string = strtok(NULL," ");
  }
  return words;
}
void output(char *string, int no_words)
{
  printf("The number of words in '%s' is %d", string, no_words);
}
int main()
{
  int words;
  char a[100],b[100];
  input_string(a);
  strcpy(b,a);
  words = count_words(a);
  output(b, words);
  return 0;
}