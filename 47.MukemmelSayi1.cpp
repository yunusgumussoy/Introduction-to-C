#include<stdio.h>
int main(){
  unsigned long int n,i,sum;
  unsigned long int min,max;

  printf("Enter the minimum range: ");
  scanf("%d",&min);

  printf("Enter the maximum range: ");
  scanf("%d",&max);

  printf("Perfect numbers in given range is: ");
  for(n=min;n<=max;n++){
    i=1;
    sum = 0;

    while(i<n){
      if(n%i==0)
           sum=sum+i;
          i++;
    }

    if(sum==n)
      printf("%d ",n);
  }

  return 0;
}
