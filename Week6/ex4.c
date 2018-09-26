#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler(int sigid){
	switch(sigid){
	case SIGKILL:
		printf(" Can't touch this SIGKILL\n");
		break;
	case SIGSTOP:
		printf(" Ain't working with that SIGSTOP\n");
		break;
	case SIGUSR1:
		printf(" Got that SIGUSR1\n");
		break;
	}
}

int main()
{
	signal(SIGKILL, handler);
	signal(SIGSTOP, handler);
	signal(SIGUSR1, handler);
	while(1){
		sleep(1);	
	}
}
