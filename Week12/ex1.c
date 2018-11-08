#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void main(){
	int randomize = open("/dev/random", O_RDONLY);
	char randomData[20];
	size_t len = 1;
	while (len < sizeof randomData){
		ssize_t result = read(randomize, randomData + len, (sizeof randomData) - len);
		len += result;
	}
	close(randomize);
	FILE *file = fopen("ex1.txt", "w");

	fprintf(file, "%s", randomData);
	fclose(file);
	return;
}
