#include <stdio.h>

double getaverage(int data[10]); /*prototype declaration*/

int main(void) {
	double average;
  int array[10]={21,2,3,23,2,4,53,11,7,42};
  printf("%4.2f\n", 3.4);
  average=getaverage(array);
  for (int i=0; i<10; i++){
    if (i==0){
      printf("array = [ ");
    }
    printf("%d", array[i]);
    if (i<9){
      printf(", ");
    } else {
      printf(" ]");
    }
  }
  printf("\n");
	printf("average = %4.2f\n", average);
	return 0;
}

double getaverage(int data[10]){
  int average=0;
  for (int i=0; i < 10; i++){
    average+=data[i];
  }
	return (double)average / 10;
}
