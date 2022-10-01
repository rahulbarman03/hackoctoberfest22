#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void *sum(void *);
int main ()
{
	char *r="45";
	pthread_t pid;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	pthread_create(&pid,&attr,sum,r);
	pthread_join(pid,NULL);
}
void *sum(void *p)
{
	int t = atoi(p);
	printf("\n HELLO %d", t);
	pthread_exit(0);
}
