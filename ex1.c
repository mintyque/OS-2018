#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
int a = INT_MAX;
float b = FLT_MAX;
double c = DBL_MAX;
printf("Maximum integer = %d\nMaximum float = %e\nMaximum double = %e\n", a, b, c);
printf("Size of integer = %ld\nSize of float = %ld\nSize of double = %ld\n", sizeof(int), sizeof(float), sizeof(double));
return 0;
}

