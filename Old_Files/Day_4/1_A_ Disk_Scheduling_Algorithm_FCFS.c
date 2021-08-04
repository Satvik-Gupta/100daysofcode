#include <stdio.h> 
int main() 
{ 

	int n,head,i,sum,temp;
	printf("Enter the Number of Entries in the Request Sequence \n");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter the Request Sequence \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter the Initial Head Position \n");
	scanf("%d",&head);
	
	temp=head;
	sum=0;
	
	printf("Seek Sequence will be\n%d",head);
	for(i=0;i<n;i++)
	{
		sum+=abs(arr[i]-temp);
		temp=arr[i];
		printf("-> %d ",arr[i]);
	}	
	
	printf("\nTotal number of seek Operations will be %d",sum);

	return 0; 
} 

