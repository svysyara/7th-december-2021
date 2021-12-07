#include<stdio.h>
main()
{
	char $,a,e,i,o,u;
	printf("Enter the character");
	scanf("%c",&$);
	if($=='a'||$=='e'||$=='i'||$=='o'||$=='u')
	{
		printf("The given character is a vowel");
	}
	else
	{
		printf("The given character is a consoant");
	}
}
