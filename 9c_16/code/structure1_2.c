#include <stdio.h>
#include <string.h>

void string_copy(char var[], char obj[]);

typedef struct {
  int year;
  int klass;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

int main(void) {
  student data1, data2;
  data1.year=3;
  data1.klass=2;
  data1.number=11;
  string_copy(data1.name, "MARIO");
  data1.stature=176.5;
  data1.weight=60;
  data2=data1;
  printf("data1.year=%d, data2.year=%d\n", data1.year, data2.year);
  printf("data1.klass=%d, data2.klass=%d\n", data1.klass, data2.klass);
  printf("data1.number=%d, data2.number=%d\n", data1.number, data2.number);
  printf("data1.name=%s, data2.name=%s\n", data1.name, data2.name);
  printf("data1.stature=%3.1f, data2.stature=%3.1f\n", data1.stature, data2.stature);
  printf("data1.weight=%3.1f, data2.weight=%3.1f\n", data1.weight, data2.weight);
}

void string_copy(char *var, char *obj) {
  do {
    *var=*obj;
    var++;
  } while(*obj++);
}
