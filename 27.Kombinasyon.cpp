#include <stdio.h>
#include <conio.h>
int fact(int);
int comb(int,int);/*kombinasyon*/
int main(){
	printf("Lutfen sayi girin:");
	int x,y;
	scanf("%d%d",&x,&y);
	printf("Kombinasyonu:%d",comb(x,y));
	getch();
}
int comb(int x,int y){
	return fact(x)/(fact(y)*(fact(x-y)));/*kombinasyon formülü*/
}
int fact(int x){
	int sonuc=1;
	for (int i=1;i<=x;i++){
		sonuc*=i;
	}
	return sonuc;
}
