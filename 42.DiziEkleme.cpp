#include <stdio.h>
#include <conio.h>

int main ()
{
	int i;
	float total=0;
	float average;
	int score[5];
	
	for (i=0;i<5;i++)
	{
		printf("Enter Score:");
		scanf("%d", &score[i]);
	}
		
	for (i=0;i<5;i++)
	{
		total=total+score[i];
	}
	average=total/5;
	printf("Average marks:%f", average);

}
