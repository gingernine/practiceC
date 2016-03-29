#include <stdio.h>

double getaverage(int data[]); /*prototype declaration*/

int main(void) {
	double average;
  int array[10]={21,2,3,23,2,4,53,11,7,42};
  printf("array[3] = %d\n", array[3]);
  printf("address = %p\n", array);
  printf("address = %p\n", &array[0]);
  average=getaverage(array);
  printf("array[3] = %d\n", array[3]);
	printf("average = %4.2f\n", average);
	return 0;
}

double getaverage(int *data){
  int average=0, size;
  size=sizeof(data)/sizeof(data[0]);
  printf("data[0] = %d\n", data[0]);
  printf("address = %p\n", data);
  printf("size = %d\n", size);
  for (int i=0; i < 10; i++){
    average+=data[i];
  }
  data[3]=111;
 	return (double)average / 10;
}
