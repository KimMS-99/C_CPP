#include <stdio.h>
#include <unistd.h>
int gval=10;

int main(int argc, char *argv[])
{
	pid_t pid;
	int lval=20;
	gval++, lval+=5;
	
	pid=fork();		
	printf("pid : %d\n", pid);
	if(pid==0)	// if Child Process
		gval+=2, lval+=2;
	else			// if Parent Process
		gval-=2, lval-=2;
	
	if(pid==0)
	{
		printf("Child Proc: [%d, %d] \n", gval, lval);
		sleep(10);
	}
	else
	{
		printf("Parent Proc: [%d, %d] \n", gval, lval);
		sleep(10);
	}
	return 0;
}