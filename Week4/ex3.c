#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define dont_stop_me_now 1

int main(){
	char safeword[50];	
	printf("Tell me your safe-word ");
	scanf("%s", &safeword);
	printf("Running shell imitator...\n");
	while(dont_stop_me_now){
	printf("> ");
	char string[50];
	scanf("%s", &string);
	if(strcmp(string, safeword) == 0){
		return 0;
	}
	system(string);	
	}
	return 0;
}
