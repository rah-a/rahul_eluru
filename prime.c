#include <stdio.h>
void prime(int);
void prime(int a)
{
    if(a==1)
    return;
    int i=2;
    while(a%i!=0)
    {
        i++;
    }
    printf("%d\t",i);
    prime(a/i);
}

void  main() {
   int a;
   printf("enter any integer:");
   scanf("%d",&a);
   prime(a);
}