#include <stdio.h>
#include <math.h>


float input() {
    float n;
    printf("Enter a number: ");
    scanf("%f", &n);
    return n;
}


float square_root(float n) {
   
    if (n < 0) {
        printf("Square root of a negative number is not defined.\n");
        return n; 
    }
     float guess = n; 
    float previous_guess;
    float epsilon = 0.0001;  
    
 //using while loop- this also wouldnt work since the loop will get terminated for any values less than precision.
 //errors in floating point arithmetic .
 //(guess*guess !=0) will not work for any other numbers other than perfect squares since the condition will never be satisfied.
  
  int i = 1;
  do {
        previous_guess = guess;
        guess = 0.5 * (guess + n / guess);
        i++;
    } while (guess * guess !=n && i < 21);

    return guess;
}

void output(float n, float sqrroot) {
    if (sqrroot >= 0) {
        printf("The square root of %f is approximately %f\n", n, sqrroot);
    }
}

int main() {
    float number, result;
    number = input();
    result = square_root(number);
    output(number, result);

    return 0;
}
