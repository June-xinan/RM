#include<stdio.h>
int main()
{
	int id; 
	printf("请输入您的身份（），是AI请输入0");
	scanf("%d",&id);
	if (id==0)
	{
		printf("YES");
	 } else printf("NO");
	 return 0;
}
