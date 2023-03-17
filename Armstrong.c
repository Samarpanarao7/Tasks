#include <stdio.h>
#include <math.h>

int main()
{
	int number, count=0, sum=0, rem,temp,temp2;
	printf("enter the number to check Armstrong::\n");
	scanf("%d",&number);
	
	temp = temp2 = number;
//	printf("entering\n");
	while(number>0)
	{
		rem = number%10;
	//	count++;
		number = number/10;
		count++;
	}
	//printf("digit count is %d ",count);
	printf("\n");
	while(temp > 0){
		rem = temp%10;
		sum = sum +  pow(rem,count);
		temp = temp/10;
	}
	printf("\n");
	if(temp2 == sum){
		printf("Armstrong");
	}
	else {
		printf("not");
	}
	printf("\n");
}


		
