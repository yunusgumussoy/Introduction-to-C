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

void swap(int x, int y) //burada de�i�imi yapamayaca��m�z� g�rece�iz, 
						//sadece de�i�kenlerin de�eri fonksiyonla main in d���nda de�i�tirilmez, pointer kullanmak gerekir
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
