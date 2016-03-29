#include <stdio.h>

int main(void){
  int *data, *p;
  int i, average=0, array[10]={15,78,98,15,98,85,17,35,42,15};
  data=array;
  p=&average;
  printf("address = %p and value = %d\n", p, *p);
  for (i=0;i<10;i++){
    printf("address = %p and value = %d\n", data+i, *(data+i));
    average+=*(data+i);
  }
  printf("%d\n", average/10);
  return 0;
}
