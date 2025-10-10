#include<stdio.h>
int main()
{
	int number;
	do
	{
		printf("请输入一个数字");
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
