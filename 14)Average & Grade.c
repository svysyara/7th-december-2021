#include<stdio.h>
main()
{
	int T,H,E,M,P,S;
	float avg;
	printf("Enter the values for T,H,E,M,P");
	scanf("%d%d%d%d%d",&T,&H,&E,&M,&P);
	S=T+H+E+M+P;
	avg=(float)S/5;
	printf("Average %f",avg);
	if(avg>90)
	printf("A");
	else if(avg>80)
	printf("B");
	else if(avg>70)
	printf("C");
	else if(avg>40)
	printf("D");
	else if(avg<40)
	printf("E");
}
