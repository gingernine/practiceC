#include <stdio.h>

int main(void) {
	int *p=NULL, i;  /*int型変数のアドレスを記憶する。*/
	/*int* p;*/
	int *p1=NULL, i1;
	p=&i;
	printf("p=%p\n", p);
	printf("&i=%p\n", &i);
	if (p1 == NULL){
		printf("p1=%p\n", p1);
	}
	return 0;
}
