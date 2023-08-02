#include<stdio.h>
int main()
{
	int i,n;
	int p=1;
	printf("enter a value:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	     p=p*i;
    printf("factorial=%d",p);
    return 0;
}