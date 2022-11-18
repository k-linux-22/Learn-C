// a Pointer is a type of data that we can use in our programs for storing a Memory Address

#include <stdio.h>

int main()
{
  int age = 23;
  double weight = 78.5;
  char gender = 'M';

  printf("Age stored at: \t %p \n", &age); // %p gives an address (or pointer)
  printf("Weight stored at: \t %p \n", &weight);
  printf("Gender stored at: \t %p \n", &gender);

  int* ptrAge = &age; // pointer variable to store memory address of age variable
  double* ptrWeight = &weight;
  char* ptrGender = &gender;

  printf("Data in pointer variable: %p \n", ptrAge);
  printf("Dereferenced output: %d \n", *ptrAge); // dereference a pointer by using *; output = value stored at the memory address stored in pointer

  // can also use
  printf("%d \n", *&age);
  
  return 0;
}