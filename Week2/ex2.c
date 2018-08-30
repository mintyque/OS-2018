#include <stdio.h>
#include <string.h>
#define MAX 256

int main()
{
char read[MAX];
fgets(read, MAX, stdin);
int size = strlen(read) - 1;
for(int a = size; a > -1; a = a - 1){
printf("%c", read[a]);
}
return 0;
}

