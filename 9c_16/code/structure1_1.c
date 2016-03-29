#include <stdio.h>
#include <string.h>

void string_copy(char var[], char obj[]);

struct student {
  int year;
  int klass;
  int number;
  char name[64];
  double stature;
  double weight;
};

int main(void){
  struct student data;
  data.year = 4;
  string_copy(data.name, "MARIO");
  /*strcpy(data.name, "MARIO");*/
  printf("year is %d\n", data.year);
  printf("name is %s\n", data.name);
  return 0;
}

void string_copy(char *var, char *obj){
  do {
    *var=*obj;
    var++;
  } while (*obj++);
}
