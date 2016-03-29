#include <stdio.h>

int count;
int coountfunc(void);

int main(void) {
	countfunc();
	countfunc();
	int count = 10;
	countfunc();
	countfunc();
	countfunc();
	printf("count=%d",count);
}


int countfunc(void) {
	count++;
	printf("%d\n", count);
	return count;
}