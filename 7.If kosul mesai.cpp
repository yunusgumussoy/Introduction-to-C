#include <stdio.h>
#include <conio.h>
int main(){
	int mesai;
	printf("Lutfen mesai saatini giriniz");
	scanf("%d", &mesai);
	if(mesai<10){
		printf("Ucret = %d",mesai*5);
	}
	else if(mesai>10 && mesai<=20){
		printf("Ucret = %d", 10*5+(mesai-10)*3);
	}
		else {
		printf("Ucret = &d", 10*5+10*3+(mesai-20)*2);
	}
}
