#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a+b+c==180)
	{
		printf("valid");
	}
	else
	{
		printf("not valid");
	}
}