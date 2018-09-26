#include <stdio.h>
#include <stdlib.h>
#include <signal.h>

void handler(int sigid){
	printf(" Ha - Caught that Ctrl+C\n");
}

int main()
{
	signal(SIGINT, handler);	
	while(1){
		sleep(1);		
	}	
}
