#include <stdio.h>
#include <conio.h>
int main(){
	for(int n=10;n>=0;n--){
		for(int i=0;i<10-n;i++){ //sola bo�luk say�s�n� art�rmak i�in 10-n yazd�k
			printf(" ");/*Sa�a yaslamak i�in bo�luk*/
		}
		for(int i=0;i<=n;i++){
			printf("*");
		}
		printf("\n");
	}
}
