#include<stdio.h>
int main()
{
	int number;
	do
	{
		scanf("%d",&number);
		if(number==-1)
		{
			break;
		}else if(number==0)
		{
		printf("helloworld");
		}else if (number==1)
		{
			printf("HELLOWORLD");
		}
		
	}while (number!=-1);
	return 0;
 } 
