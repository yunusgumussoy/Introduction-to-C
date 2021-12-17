#include <stdio.h>
#include <conio.h>

//Recursive özyineli 

int fact(int);

main()
	{
	int x;
	x=5;
	printf("%d in Faktoriyeli:%d",x,fact(x));
	}
	
int fact(int i)
{
	if(i<=1)
	{
		return 1;
	}
	else
	{
		return i*fact(i-1);
	}
}
