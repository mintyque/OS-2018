#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
	char string1[] = "Hello, World!\n";
	char string2[256];
	int fd[2];
	int childpid;
	pipe(fd);
	if((childpid = fork()) == -1)
	{
		perror("fork");
		exit(1);
	}		
	if(childpid == 0)
	{
		close(fd[1]);
		read(fd[0], string2, strlen(string1));
		printf("Received string: %s", string2);
	}
	else
	{
		close(fd[0]);
		write(fd[1], string1, strlen(string1));	
	}
	return 0;
}
