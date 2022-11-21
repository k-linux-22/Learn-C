#include <stdio.h>

int main(void){
  double x = 6.25, y = 2.5, sum, sub, div, mult;
  int a = 13, b = 2, mod;

  sum = x+y; 
  sub = x-y; 
  div = x/y; 
  mult = x*y;
  printf("\n sum: %f \n sub: %f \n div: %f \n mult: %f \n", sum, sub, div, mult);

  mod = a % b;
  printf(" modulus: %d \n", mod);
  
  return 0;
}