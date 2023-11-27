// Program to find the weight of the camel given height,length and stomach radius using four functions
#include <stdio.h>
#include <math.h>
struct camel

{
  float radius, height, length, weight;
};
typedef struct camel Camel;
Camel input()
{
  Camel c;
  printf("Enter the radius of the stomach of the camel: ");
  scanf("%f", &c.radius);
  printf("Enter the height of the camel: ");
  scanf("%f", &c.height);
  printf("Enter the length of the camel: ");
  scanf("%f", &c.length);
  c.weight = 0.0;
  return c;
}
void find_weight(Camel *c)
{
  float preguess = c->height * c->length, sq, guess;
   guess=sqrt(preguess);
  sq = c->radius * c->radius * c->radius;
  c->weight = 3.1415 * sq * guess;
}
void output(Camel c)
{
  printf("The weight of the camel with radius: %.1f,height: %.1f,length: %.1f is %.4f", c.radius, c.height, c.length, c.weight);
}
int main()
{
  Camel c;
  c = input();
  find_weight(&c);
  output(c);
  return 0;
}
