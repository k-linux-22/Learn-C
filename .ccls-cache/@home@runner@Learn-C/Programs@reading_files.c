#include <stdio.h>

int main()
{
  char line[255]; // to store 255 characters
  FILE * fpointer = fopen("people.txt", "r"); // r = read a file

  fgets(line, 255, fpointer); // where we want to store data that we read; how much we want to read; the file
  // the above line will get characters in the first line of the data in the file
  printf("%s", line);
  
  // fpointer gets auto-incremented when fgets is used multiple times
  fgets(line, 255, fpointer); // so, this will print all characters in the secone line of the data in the file
  printf("%s", line);

  // we can also use a loop
  for(int i = 0; i < 4; i++)
  {
    fgets(line, 255, fpointer);
    printf("%s", line);
  }
  printf("\n");
  
  fclose(fpointer);
  return 0;
}