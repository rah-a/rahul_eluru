#include<stdio.h>
int rev(int num)
{
	int rev_number=0;
	while(num>0)
	{
		int rem=num%10;
		rev_number=rev_number*10+rem;
		num=num/10;
	}
	return rev_number;
}
void adam(int num)
{
	int sq_num=num*num;
	int rev_num=rev(num);
	int sq_rev=rev_num*rev_num;
	int rev_sq_rev=rev(sq_rev);
	if(rev_sq_rev==sq_num)
	{
		printf("adam number");
	}
	else
	{
		printf("not an adam number");
	}
}
int main()
{
	int num;
	scanf("%d",&num);
	adam(num);
}
