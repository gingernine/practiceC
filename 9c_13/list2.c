#include <stdio.h>

int main(void) {
	int array[] = { 42,79,13 };
	for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
		printf("array[%d]=%d\n", i, array[i]);
	}
}