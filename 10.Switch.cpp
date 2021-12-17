#include <stdio.h>

main()
{
	float a,b;
	a=40;
	b=20;
	
	char choice;
	
	printf("Enter an operator:");
	scanf("%c", &choice);
	
	switch(choice)
	{
		case '+':
			printf("Result:%f",a+b);
			break;
		case '-':
			printf("Result:%f",a-b);
			break;
		case '*':
			printf("Result:%f",a*b);
			break;
		case '/':
			printf("Result:%f",a/b);
			break;
		default:
			printf("Invalid Input");
	}
	

}
