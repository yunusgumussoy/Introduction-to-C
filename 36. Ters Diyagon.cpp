#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=1;i<=29;i++){
		for(int j=1;j<=29;j++){
			if((i+j)==30 || i==j)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	getch();
}
