#include <stdio.h>

void max_min(int array[], int *max, int *min);

int main(void){
  int *p, i, array[10], max, min;
  for (p=array; p!=&array[10]; p++){
    printf("input num:");
    scanf("%d", &i);
    if (i==-1) break;
    while (i<0 || i>100){
      printf("\nbetween 0 and 100:");
      scanf("%d", &i);
    }
    *p=i;
    printf("\n");
  }
  max_min(array, &max, &min);
  printf("max: %d\n", max);
  printf("min: %d\n", min);
  return 0;
}

void max_min(int array[], int *max, int *min){
  int *data;
  *max=array[0]; /*max normal variable*/
  *min=array[0]; /*min normal variable*/
  for (data=array; data!=&array[10]; data++){
    if (*data > *max) *max=*data;
    if (*data < *min) *min=*data;
  }
}
