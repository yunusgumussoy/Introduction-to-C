#include <stdio.h>
#include <stdlib.h>

void my_func(); //fonksiyonu burada tanýmladýk
main()
{
	printf("This is main.\n");
	my_func(); //fonksiyonu çalýþtýrmak için main içerisinde çaðýrmamýz gerekir
}
void my_func() //fonksiyonun içeriðini tanýmladýk
{
	printf("This is my_func.");
}
