#include <stdio.h>
#include <string.h>

int main(void) {
	char name1[256], name2[256];
	printf("input name\n");
	scanf("%s", name1);
	scanf("%s", name2);
	strcat(name1 , name2);
	printf("%s", name1);
	return 0;
}