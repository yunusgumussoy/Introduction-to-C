#include <stdio.h>
#include <conio.h>
int main(){
	int a[]={3,8,7,2,6};
	for (int i=0;i<5;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	int gecici;
	for(int i=0;i<2;i++){ /*swapping  ters �evirme i�lemi */
		gecici=a[i]; /* de�i�me i�lemi i�in gecici bo� yer */
		a[i]=a[4-i];
		a[4-i]=gecici;
	}
	for (int i=0;i<5;i++){
		printf("a[%d]=%d\n",i,a[i]);
	}
	getch();
}
