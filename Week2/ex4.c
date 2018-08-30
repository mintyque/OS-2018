#include <stdio.h>
#include <stdlib.h>

void swap(int *x, int *y){
int temp = *x;
*x = *y;
*y = temp;
}

int main(){
printf("Enter your numbers\n");
int x;
int y;
scanf("%d %d", &x, &y);
printf("Before swap: x = %d and y = %d\n", x, y);
swap(&x, &y);
printf("After swap: x = %d and y = %d\n", x, y);
return 0;
}
