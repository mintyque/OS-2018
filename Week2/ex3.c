#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int height = atoi(argv[1]);
int spaces = height - 1;
int stars = 1;
for(int a = 0; a < height; a++){
	for(int b = 0; b < spaces; b++){
	printf(" ");	
	}
	for(int c = 0; c < stars; c++){
	printf("*");
	}
	spaces = spaces - 1;
	stars = stars + 2;
	printf("\n");
}
return 0;
}
