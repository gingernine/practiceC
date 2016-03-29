#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[10];
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		array[i] = i;
	}
	int N = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
		printf("%d\n", array[N - i - 1]);
	}
	for (int i = N-1; i > -1; i--) {
		printf("%d\n", array[i]);
	}
	return 0;
}