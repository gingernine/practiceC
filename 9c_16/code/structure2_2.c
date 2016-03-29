#include <stdio.h>
#include "stringcopy.h"

typedef struct {
  int year;
  int klass;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

int main(void) {
  student data;
  student *pdata;

  pdata=&data;
  (*pdata).year=10;
  string_copy((*pdata).name, "MAR");
  printf("name = %s\n", pdata->name);
  printf("name = %s\n", data.name);
  return 0;
}
