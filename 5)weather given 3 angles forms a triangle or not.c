#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the values for a,b,c");
	scanf("%d%d%d",&a,&b,&c);
	if(a+b+c==180)
	{
		printf("The given three angles form a triangle");
	}
	else
	{
		printf("The given three angles does not form a tiangle");
	}
}
