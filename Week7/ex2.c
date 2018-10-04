#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
	int sizea;
	printf("Provide size of your array: ");
	scanf("%d", &sizea);
	int *array = malloc(sizea * sizeof(int));
	for(int i = 0; i < sizea; i++){
  		 array[i] = i;
	}
	printf("Array of size %d created! Printing array...\n", sizea);
	for(int j = 0; j < sizea; j++){
		printf("%d ", array[j]);
	}
	free(array);
	return 0;
}

