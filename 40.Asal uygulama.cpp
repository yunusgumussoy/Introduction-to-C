#include <stdio.h>
#include <conio.h>
int main(){
	printf("bir sayi girin:");/*100 den k���k en b�y�k asal say� i�in 100 girecez*/
	int n;
	scanf("%d",&n);
	for(int i=n;i>=2;i--){
		int asal=1;
		for(int j=2;j<i;j++){
			if(i%j==0)
			asal=0;
		}
		if(asal==1){
			printf("%d",i);
			break;
		}
	}
}
