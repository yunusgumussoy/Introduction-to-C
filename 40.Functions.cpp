#include <stdio.h>
#include <stdlib.h>

void my_func(); //fonksiyonu burada tan�mlad�k
main()
{
	printf("This is main.\n");
	my_func(); //fonksiyonu �al��t�rmak i�in main i�erisinde �a��rmam�z gerekir
}
void my_func() //fonksiyonun i�eri�ini tan�mlad�k
{
	printf("This is my_func.");
}
