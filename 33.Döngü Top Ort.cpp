#include <stdio.h>
#include <conio.h>
int main(){
	int top=0;
	int say=0;
	int sayi=0;
	while(sayi!=-1){
		printf("Bir Sayi giriniz:");
		scanf("%d",&sayi);
		/* if(sayi==0)
		continue;*/
		if(sayi==-1)
		break;
		top=top+sayi;
		say++;
		printf("top:%d sayi:%d say:%d\n", top,sayi,say);
	}
	printf("Toplam:%d\n",top);
	printf("Ortalama:%d",top/say);
	getch();
}
