#include <stdio.h>
#include <string.h>

typedef struct {
  int year;
  int klass;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

void student_print(student data);
void string_copy(char var[], char obj[]);

int main(void) {
  student data;
  data.year=3;
  data.klass=2;
  data.number=32;
  string_copy(data.name, "MARIO");
  data.stature=176.6;
  data.weight=60.4;
  student_print(data);
  printf("%s\n", data.name);
  return 0;
}
void student_print(student data) {
  string_copy(data.name, "LUIGI");
  printf("year: %d\n", data.year);
  printf("class: %d\n", data.klass);
  printf("number: %d\n", data.number);
  printf("name: %s\n", data.name);
  printf("stature: %3.1f\n", data.stature);
  printf("weight: %2.1f\n", data.weight);
  return;
}

void string_copy(char *var, char *obj) {
  do {
    *var=*obj;
    var++;
  } while (*obj++);
}
