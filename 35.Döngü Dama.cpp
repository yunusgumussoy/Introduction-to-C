#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=1;i<=30;i++){
		for(int j=1;j<=30;j++){
			if ((i+j)%2==0)
				printf("*");
			else 
				printf(" ");
		}
		printf("\n");
	}
	getch();
}
