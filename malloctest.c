#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
int main(void) {
		int*p = NULL;
		char* c = NULL;
		void* x = NULL;
		void* y = NULL;
		p = (int*)malloc(sizeof(int));
		c = (char*)malloc(sizeof(char));
		x = malloc(45);
		y = malloc(45);
		printf("size of pointer is %d", sizeof(void*));
		printf("int addr = %li\n voidx addr = %li\n voidy addr = %li\n", (uintptr_t)p, (uintptr_t)x, (uintptr_t)y);
		free(p);
		free(c);
		free(x);
		free(y);
		return 0;
}
