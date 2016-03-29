#include <stdio.h>
#include <string.h>

typedef struct {
  char name[64];
  int age;
  char gender[7];
} student;

void input(student *data);
void show(student *data);

void main(void) {
  student data[3], *p;
  for (p=&data[0]; p!=&data[3]; p++) {
    input(p);
  }
  for (p=&data[0]; p!=&data[3]; p++) {
    show(p);
  }
}

void input(student *data) {
  printf("name:\n");
  scanf("%s", data->name);
  printf("age:\n");
  scanf("%d", &data->age);
  printf("gender(male:even;;female:odd):\n");
  int gender;
  scanf("%d", &gender);
  if (gender%2==0) strcpy(data->gender, "male");
  else strcpy(data->gender, "female");
}

void show(student *data) {
  printf("name: %s\n", data->name);
  printf("age: %d\n", data->age);
  printf("gender: %s\n", data->gender);
}
