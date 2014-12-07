#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<error.h>
#include<stdlib.h>
void makeandfreearray(void* p) {
		void* x;
		int n = *((int*) p);
		x = malloc(n);
		printf("\n malloced and sleeping\n");
		sleep(1);
		printf("\n Woke up \n");
		free(x);
}
pthread_t arr[4];

int main(void) {
		int i;
		for(i=3;i<7;i++) 
				pthread_create(&arr[i-3], NULL, (void*) &makeandfreearray, (void*)&i);

		for(i=0;i<4;i++)
				pthread_join(arr[i], NULL);

		return 0;
}

