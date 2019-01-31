#include <stdio.h>
#include <pthread.h>
 pthread_t thread;

void *threadloop(void *arg)
{
	printf("threadloop\n");
}

void main()
{
	printf("main\n");
	  int i=10;
    	int ret = pthread_create(&thread, NULL, &threadloop, NULL);
    	 pthread_join(thread, NULL);  

    	 
}
