#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<stdint.h>

int main(void) {
		int n;
		printf("Program break is %li\n", (uintptr_t)sbrk(0));
		return 0;
}
