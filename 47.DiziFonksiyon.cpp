#include <stdio.h>
#include <conio.h>
#include <math.h>

void func(int arr[], int val);

main ()
{
	int array[5]={2,4,3,5,7};
	int power;
	printf("Enter power value:");
	scanf("%d", &power);
	func(array, power);
}

void func(int arr[], int val)
{
	int i;
	for (int i=0;i<5;i++)
	{
		printf("Value %d: %f\n",(i+1), pow(arr[i],val));
	}
}

