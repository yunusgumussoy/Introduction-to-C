#include <stdio.h>
#include <conio.h>
int main()
{
	char a;
	printf("Lutfen a harfi giriniz:");
	
	scanf("%c",&a);
	if((a=='a') || (a=='A')) //Veya Operat�r�
	{
		printf("Basarili");
	}
	
	else{
		printf("Basarisiz");
	}
}
