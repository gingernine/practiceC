#include <stdio.h>

void main(void) {
  int i, j;
  FILE *file;
  file = fopen("text/test.txt","a");
  i=199;
  fprintf(file, "%d\n", i);
  fclose(file);
  file = fopen("text/test.txt", "r");
  fscanf(file, "%d, %d", &i, &j);
  fclose(file);
  printf("%d,%d\n", i, j);
}
