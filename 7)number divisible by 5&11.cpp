#include<stdio.h>
main()
{
	int a;
	printf("Enter the value for a");
	scanf("%d",&a);
	if(a%5==0 && a%11==0)
	{
		printf("The given number is divisible by 5&11");
	}
	else
	{
		printf("The given number is not divisible by 5&11");
	}
}

