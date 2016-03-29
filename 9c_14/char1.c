#include <stdio.h>

int main(void) {
	char c = 'A'+9;
	int n = c - '0';
	printf("%c, %d\n", c,n);
	return 0;
}