#include <stdio.h>
#include <conio.h>
int main(){
	int a=1;
	while(a<10)
	
	{
		printf("a is:%d\n", a);
		if (a==5)
		{
			break; //ko�ulu sa�lad��� yerde d�ng�y� bitirecek
		}
		a++;
	}
	printf("a is:%d", a);
	
}
