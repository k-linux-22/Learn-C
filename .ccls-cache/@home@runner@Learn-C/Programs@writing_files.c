#include <stdio.h>

int main()
{
  FILE * fpointer = fopen("people.txt", "w"); // w = write a file

  fprintf(fpointer, "Jim, Salesman\nPam, Receptionist\nOscar, Accounting");

  fprintf(fpointer, "overridden"); // overrides the above data in the file
  
  FILE * fpointer = fopen("people.txt", "a"); // a = append data in the file
  
  fprintf(fpointer, "\nKelly, Customer Service");
  
  fclose(fpointer); // always remember to close a file
  return 0;
}