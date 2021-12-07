#include<stdio.h>
main()
{
	int A;
	printf("Enter the value for A(month number)");
	scanf("%d",&A);
	if(A>0 && A<13)
	{
		printf("The given month number is valid");
	}
	else
	{
		printf("The given month number is not valid");
    }
}
	
