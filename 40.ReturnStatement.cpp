#include <stdio.h>
#include <stdlib.h>

int add(int,int);

main()
{
	int a,b;
	int result;
	printf("Enter two numbers:");
	scanf("%d%d", &a, &b);
	result=add(a,b);
	printf ("Result: %d", result);
}

int add(int x, int y)
{
	int z;
	z=x+y;
	return z;
}
