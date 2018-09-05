#include <stdio.h>


void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int array[], int size){
	for(int j = 1; j < size; j++){
		int swapped = 0;	
		for(int i = 1; i < size; i++){
			if(array[i - 1] > array[i]){
				swap(&array[i - 1], &array[i]);
				swapped = 1;
			}
		}
		if(swapped = 0){
			return;		
		}
	}
}

int main(){
	int size;	
	printf("Size of your array? ");
	scanf("%d", &size);	
	int read[size];
	for(int i = 0; i < size; i++){
		scanf("%d", &read[i]);
	}
	bubble_sort(read, size);
	printf("\nSorted array:\n");
	for(int i = 0; i < size; i++){
		printf("%d ", read[i]);
	}
	return 0;
}


