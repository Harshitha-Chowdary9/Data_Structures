#include <stdio.h>  
   
int main()  
{
	int arr[n],count=0,n,i,length;  
    printf("Enter the size of the Array: ");
	scanf("%d",&n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++)
	scanf("%d",&a[n]);
	printf("Enter the value to search: ");
	scanf("%d",&key);
    int length = sizeof(arr)/sizeof(arr[0]);     
    printf("Duplicate elements in given array: \n");    
    for(int i = 0; i < length; i++) {  
        for(int j = i + 1; j < length; j++) {  
            if(arr[i] == arr[j])  
                count++;  
        }  
    }  
    printf("%d",count);
    return 0;  
}