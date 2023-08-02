#include<stdio.h>
int main()
{
	int a[10],i,key,found=0,pos,n;
	printf("Enter the size of the Array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Enter the value to search: ");
	scanf("%d",&key);
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			found=1;
			pos=i+1;
			break;
		}
	}
	if(found==0)
	{
		printf("Not Found in the list.");
	}
	else
	{
		printf("Found in the list.");
	}
	return 0;
}