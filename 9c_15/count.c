#include <stdio.h>

int countfunc(int);

int main(void) {
	int count=0;
	count = countfunc(count);
	count = countfunc(count);
	count = countfunc(count);
	count = countfunc(count);
}

int countfunc(int count) {
	count++;
	printf("%d\n", count);
	return count;
}