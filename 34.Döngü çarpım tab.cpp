#include <stdio.h>
#include <conio.h>
int main(){
	for(int i=1;i<=10;i++){
		for(int j=1;j<=10;j++){ /*i�erdeki d�ng� h�zl� d�ner*/
			printf("%d\t",i*j); /*t tab i�levi g�r�r */
		}
		printf("\n");
	}
	getch();
}
