#include<stdio.h>
main()
{
	int c,s,d;
	printf("Enter the values for Cost Price and Selling Price");
	scanf("%d%d",&c,&s);
	d=(s-c);
	if(d>0)
	{
		printf("profit of %d",d);
	}
	else
	{
		printf("loss of %d",d);
	}
}
