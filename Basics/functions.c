#include <stdio.h>


void sayHi(char name[], int age) // void means the function doe not return any value
{
  printf("Hello %s, of age %d \n", name, age);
}



double cube(double num) // outputs and accepts a double type number
{
  double result = num * num * num;
  return result;
  // or use
  // return num * num * num;
}


int max(int num1, int num2, int num3)
{
  int result;
  if (num1 >= num2 && num1 >= num3) result = num1;
  
  else if (num2 >= num1 && num2 >= num3) result = num2;
  
  else result = num3;
  return result;
}


int main()
{
  sayHi("John", 40);
  sayHi("Jenny", 39);

  printf("Answer: %.4f \n", cube(5.0));

  printf("Max: %d \n", max(10, 19, 12));
  return 0; 
}
