#include <stdio.h>

int main(void){
  float x = 5.2;
  double y = 25.45545; // or -9.35
  printf("x: ");
  scanf("%f", &x);
  printf("y: ");
  scanf("%lf", &y);
  
  printf("x: %f \n", x);
  printf("y: %f \n", y);
  return 0;
}