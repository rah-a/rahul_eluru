#include<stdio.h>
void factors();
int main()
{
	int i;
	for(i=1;i<=10;i++)
	{
	factors();
}
	return 0;
}
void factors()
{
	int n;
	int i;
	printf("enter a number");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		if(n % i== 0)
		{
			printf("%d",i);
		}
	}
}
