#include <stdio.h>
#include <stdlib.h>

void swap(int,int);
main()
{
	int a,b;
	a=10;
	b=5;
	printf("Before swapping: %d %d\n", a,b);
	swap(a,b);
	printf("After swapping: %d %d", a,b);
}

void swap(int x, int y) //burada deðiþimi yapamayacaðýmýzý göreceðiz, 
						//sadece deðiþkenlerin deðeri fonksiyonla main in dýþýnda deðiþtirilmez, pointer kullanmak gerekir
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
