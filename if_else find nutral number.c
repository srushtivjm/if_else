#include<stdio.h>
main()
{
	int number;
	printf("Enter number=",number);
	scanf("%d",&number);
	
	if(number>0)
	{
		printf("number is positive");
	}
	else if(number<0)
	{
		printf("number is negetive");
	}
	else if(number==0)
	{
		printf("number is nutral");
	}
}
