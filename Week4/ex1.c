#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int main(){
	int pid = fork(), n = 420;
	if (pid > 0){
		printf("Hello from parent %d\n", pid - n);
	} else {
		printf("Hello from child %d\n", pid - n);
	}
}
