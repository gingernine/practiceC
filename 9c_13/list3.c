#include <stdio.h>
#include <memory.h> 

int main(void) {
	int array1[] = { 42,79,13, 34, 33 };
	int array2[sizeof(array1) / sizeof(array1[0])] = { 0 };
	int array3[sizeof(array1) / sizeof(array1[0])] = { 0 };
	for (int i = 0; i < sizeof(array2) / sizeof(array2[0]); i++) {
		array2[i] = array1[i];
		printf("array2[%d]=%d\n", i, array2[i]);
	}
	memcpy(array3, array1, sizeof(array1));
	for (int i = 0; i < sizeof(array3) / sizeof(array3[0]); i++) {
		printf("array3[%d]=%d\n", i, array3[i]);
	}
	array1[3] = 100000000;
	for (int i = 0; i < sizeof(array3) / sizeof(array3[0]); i++) {
		printf("array2[%d]=%d\n", i, array2[i]);
		printf("array3[%d]=%d\n", i, array3[i]);
	}
	return 0;
}