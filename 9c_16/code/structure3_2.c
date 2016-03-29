#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char name[64];
  int age;
  char gender[7];
} student;

void student_print(student data[]);

void main(void) {
  student data[3];
  student *p1;
  char material[]=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  for(p1=&data[0]; p1!=&data[3]; p1++) {
    for (char *p2=&p1->name[0]; p2!=&p1->name[10]; p2++) {
      *p2=material[rand()%(sizeof(material)-2)+1];
    }
    p1->age=10+rand()%2;
    int gender_rand=rand()%2;
    if (gender_rand==1) strcpy(p1->gender, "male");
    else strcpy(p1->gender, "female");
  }
  student_print(&data[0]);

}

void student_print(student *data) {
  student *p;
  for (p=data; p!=&data[3]; p++) {
    printf("name: %s\n", p->name);
    printf("age: %d\n", p->age);
    printf("gender: %s\n", p->gender);
  }
}
