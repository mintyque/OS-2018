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
	pipe(fd);
	write(fd[1], string1, strlen(string1));
	read(fd[0], string2, sizeof(string1));
	printf("Passed string: %s", string2);
	return 0;
}
