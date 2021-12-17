#include <stdio.h>
#include <conio.h>
int main(){
	int a=1;
	while(a<10)
	
	{
		printf("a is:%d\n", a);
		if (a==5)
		{
			break; //koþulu saðladýðý yerde döngüyü bitirecek
		}
		a++;
	}
	printf("a is:%d", a);
	
}
