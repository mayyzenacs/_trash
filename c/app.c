#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a = 10;
	int * ptr = &a;
	int **ptrr = &ptr;

	printf("ptr %d", ptr);

	return 0;
}
