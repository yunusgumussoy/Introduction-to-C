#include <stdio.h>
#include <conio.h>
int main(){
	printf("bir sayi girin:");/*100 den küçük en büyük asal sayý için 100 girecez*/
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
