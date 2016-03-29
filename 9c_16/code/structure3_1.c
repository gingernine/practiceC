#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
  char name[64];
  int age;
  char gender[7];
} student;

//void student_print(student data[]);

void main(void) {
  student data[3];
  student *p;
  char material[]=" ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  for (int i=0; i<100; i++){
    printf("%c,%d,%c\n",material[1],rand()%(sizeof(material)-2)+1,material[26]);
  }
  printf("%p, %p, %p\n", &data, &data[1], &data[2]);
  for (p=&data[0]; p!=&data[3]; p++) {
    printf("%p, ", p);
  }
  printf("\n");
}
