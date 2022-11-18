#include <stdio.h>
#include <string.h> // for strcpy()

struct Student{
  char name[50];
  char major[50];
  int age;
  double gpa;
};

int main()
{
  struct Student student1;
  student1.age = 23;
  student1.gpa = 4.15;
  // we can't intake strings directly like above
  // for strings, we have to use srtcpy() like below
  strcpy(student1.name, "John");
  strcpy(student1.major, "Business");

  printf("%s of age %d is a major in %s and has a GPA of %0.2f \n", student1.name, student1.age, student1.major, student1.gpa);

  struct Student student2;
  student2.age = 23;
  student2.gpa = 3.65;
  strcpy(student2.name, "Mike");
  strcpy(student2.major, "Engineering");

  printf("%s of age %d is a major in %s and has a GPA of %0.2f \n", student2.name, student2.age, student2.major, student2.gpa);

  return 0;
}