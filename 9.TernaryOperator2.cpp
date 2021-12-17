#include <stdio.h>

main()
{
	int a,b,c;
	a=15;
	b=5;
	c=10;
	
	(a>b) ? ((a>c)?printf("a en buyuk"):printf("c en buyuk")):
		((b>c)?printf("b en buyuk"):printf("c en buyuk"));
	

}
