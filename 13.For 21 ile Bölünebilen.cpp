#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=10000;i>=20;i--){
		if(i%3==0&&i%7==0) //21 ile tam bölünebilme kuralý
		printf("\n%d",i);
	}
}
