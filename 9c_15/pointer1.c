#include <stdio.h>

int main(void) {
	int *p, i;
	p=&i;
	i=222;
	printf("p=%p\n", p);
	printf("&i=%p\n", &i);
	printf("*p=%d and i=%d\n", *p, i);
	*p=10;
	printf("*p=%d\n", *p);
	printf("i=%d\n", i);
	return 0;
}
