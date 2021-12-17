#include <stdio.h>
#include <stdlib.h>

void capitals(int); //fonksiyonu burada tanýmladýk
main()
{
	int choice;
	printf("Provide Input.\n");
	printf("Enter 1 for USA.\n");
	printf("Enter 2 for UK.\n");
	printf("Enter 3 for FR.\n");
	scanf("%d", &choice);
	capitals(choice);
}
void capitals(int ch) //fonksiyonun içeriðini tanýmladýk
{
	switch(ch)
	{
		case 1:
		printf("Capital: Washington DC");
		break;
		case 2:
		printf("Capital: London");
		break;
		case 3:
		printf("Capital: Paris");
		break;
		default:
		printf("Invalid Input.");
	}
}
