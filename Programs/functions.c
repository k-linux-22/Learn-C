#include <stdio.h>

double cube(double num) // outputs and accepts a double type number
{
  double result = num * num * num;
  return result;
  // or
  // return num * num * num;
}

int main()
{
  // sayHi("John", 40);
  // sayHi("Jenny", 39);

  printf("Answer: %.4f \n", cube(5.0));
  return 0;
  
}

// void means the function doe not return any value
// void sayHi(char name[], int age)
// {
//   printf("Hello %s, of age %d \n", name, age);
// }
