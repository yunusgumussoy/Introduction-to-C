#include <stdio.h>
#include <conio.h>
int main(){
	int i=1;
	do{ /* do while döngüleri iþlemi yaptýktan sonra kontrol eder */
		printf("\n%d",i);
		i++;
		printf("\n%d", i++);
	}while(i<=1000000);
}
