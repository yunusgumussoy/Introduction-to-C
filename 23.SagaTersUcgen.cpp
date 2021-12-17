#include <stdio.h>
#include <conio.h>
int main(){
	for(int n=10;n>=0;n--){
		for(int i=0;i<10-n;i++){ //sola boþluk sayýsýný artýrmak için 10-n yazdýk
			printf(" ");/*Saða yaslamak için boþluk*/
		}
		for(int i=0;i<=n;i++){
			printf("*");
		}
		printf("\n");
	}
}
