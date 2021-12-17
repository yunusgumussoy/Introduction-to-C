#include <stdio.h>
#include <conio.h>
int main(){
	int girilen;
	int enbuyuk=0;
	for(int i=0;i<4;i++){
		scanf("\n%d",&girilen);
		if(girilen>enbuyuk)
		enbuyuk=girilen;
	}
	printf("\nenbuyuk:%d",enbuyuk);
	getch();
}
