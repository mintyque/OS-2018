#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

int main(){
	int file = open ("ex1.txt", O_RDWR);
	struct stat fileStat = {};
	if(fstat(file, &fileStat)){
		printf("fstat error\n");
	}
	off_t size = fileStat.st_size;
	char *addr;
	char line[] = {'T','h','i','s',' ','i','s',' ','a',' ','n','i','c','e',' ','d','a','y'};
	addr = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_SHARED, file, 0);
	for(int i = 0; i < (size/sizeof(char)); i++){
		if(i < 18){
		addr[i] = line[i];
		} else {
		addr[i] = ' ';
		return 0;
		}
	}
	return 0;
}
