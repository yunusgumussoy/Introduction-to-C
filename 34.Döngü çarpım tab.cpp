#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){ /*içerdeki döngü hýzlý döner*/
			printf("%d\t",i*j); /*t tab iþlevi görür */
		}
		printf("\n");
	}
	getch();
}
