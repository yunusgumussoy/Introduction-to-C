#include <stdio.h>
#include <conio.h>
int main(){
	int i,j;
	
	for(i=2;i<=100;i++)
	{		
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(i==j){
			printf("%d is a prime number.\n",i);
			
		}
	}
}
