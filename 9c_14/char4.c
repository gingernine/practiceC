#include <stdio.h>
#include <ctype.h>

int main(void) {
	char C;
	for (C = 'A'; C <= 'Z'; C++) {
		printf("%C", C);
	}
	printf("\n");
	return 0;
}