#include <stdio.h>

void open_img(void);
void write_img(char);

void main(void) {
  open_img();
}

void open_img(void) {
  FILE *file;
  char buf[1024];
  int i, size;
  file=fopen("text/gintama.jpg", "rb");
  if (file!=NULL) {
    while (size=fread(buf, sizeof(unsigned char), 1024, file)) {
      printf("size: %d\n", size);
      for (i=0; i<size; i++) {
        write_img(buf[i]);
      }
    }
    fclose(file);
  }
}

void write_img(char buf){
  FILE *fwp;
  fwp=fopen("text/gintamacopy.jpg", "ab");
  fwrite(&buf, sizeof(buf), 1, fwp);
  fclose(fwp);
}
