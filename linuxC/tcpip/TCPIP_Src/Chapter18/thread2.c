#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>
void* thread_main(void *arg);

struct thread_info{
	int thread_param;
	char *msg;
};

int main(int argc, char *argv[]) 
{
	pthread_t t_id;
	//int thread_param=5;
	void * thr_ret;
	struct thread_info ti;
	ti.thread_param = 5;
	ti.msg = (char *)malloc(sizeof(char)*50);
	//char * msg=(char *)malloc(sizeof(char)*50);
	strcpy(ti.msg, "Hello, I'am thread~ \n");

	if(pthread_create(&t_id, NULL, thread_main, (void*)&ti)!=0)
	{
		puts("pthread_create() error");
		return -1;
	}; 	

	if(pthread_join(t_id, &thr_ret)!=0)
	{
		puts("pthread_join() error");
		return -1;
	};

	printf("Thread return message: %s \n", (char*)thr_ret);
	free(ti.msg);
	return 0;
}

void* thread_main(void *arg) 
{
	int i;
	struct thread_info cnt= *(struct thread_info*)arg;
	printf("malloc :  %s \n", cnt.msg); 
//	char * msg=(char *)malloc(sizeof(char)*50);
//	strcpy(msg, "Hello, I'am thread~ \n");

	for(i=0; i<cnt.thread_param; i++)
	{
		sleep(1);  puts("running thread");	 
	}
	return (void*)cnt.msg;
}
