#include <stdio.h>

int main()
{
  FILE * fpointer = fopen("Learn-C/people.txt", "w"); // w = write a file

  fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

  // fprintf(fpointer, "overridden"); // overrides the above data in the file
  
  
  fclose(fpointer); // always remember to close a file
  return 0;
}