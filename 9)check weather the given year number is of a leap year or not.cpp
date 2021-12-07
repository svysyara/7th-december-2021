#include<stdio.h>
main()
{
	int A;
	printf("Enter the value for A(year number)");
	scanf("%d",&A);
	if(A>0 && A%4==0)
	{
		printf("The given year number is of a leap year");
	}
	else
	{
	    printf("The given year number is not of a leap year");	
	}
}
