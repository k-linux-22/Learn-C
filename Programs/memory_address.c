#include <stdio.h>

int main()
{
  int age = 23;
  double weight = 78.5;
  char gender = 'M';

  printf("Age stored at: \t %p \n", &age); // %p gives an address (or pointer)
  printf("Weight stored at: \t %p \n", &weight);
  printf("Gender stored at: \t %p \n", &gender);
  
  return 0;
}