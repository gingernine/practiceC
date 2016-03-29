#include <stdio.h>


int main(void) {
	countfunc();
	countfunc();
	countfunc();
	countfunc();
	countfunc();
}


int countfunc(void) {
	static int count;
	count++;
	printf("%d\n", count);
	return count;
}