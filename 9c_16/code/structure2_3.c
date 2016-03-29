#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct {
  int year;
  int klass;
  int number;
  char name[64];
  double stature;
  double weight;
} student;

void student_print(student *data);

int main(void) {
  student data;
  printf("address1: %p\n", &data);
  printf("address2: %p, %p\n", &data.year, &data.klass);
  printf("address3: %p, %p, %p, %p\n", &data.number, &data.name,\
  &data.stature, &data.weight);
  printf("**************************\n");
  printf("name size: %d\n", sizeof(data.name));
  printf("substitute size: %d\n", sizeof("ABCDEFGHIJKLMNOPQRSTUVWXYZ"));
  for(int i=0;i<100;i++){printf("%2d ",rand()%2);}
  printf("\n");

  data.year=4294967296;
  data.klass=1;
  data.number=23;
  strcpy(data.name, "Mario");
  data.stature=178.2;
  data.weight=60.0;
  student_print(&data);
  return 0;
}

void student_print(student *data) {
  printf("address1: %p\n", data);
  printf("address2: %p, %p, %p\n", &data->year, &data->klass, &data->number);
  printf("address3: %p, %p, %p, %p\n", &data->number, &data->name,\
  &data->stature, &data->weight);
  printf("year: %d\n", data->year);
  printf("class: %d\n", data->klass);
  printf("name: %s\n", data->name);
  printf("number: %d\n", data->number);
  printf("stature: %3.1f\n", data->stature);
  printf("weight: %2.1f\n", data->weight);
}
