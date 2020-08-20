#include <stdio.h> 

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

void sort(int arr[],int n)
{
	int i, j; 
   for (i = 0; i < n-1; i++)         
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
}

int main() 
{ 

	int n,head,i,sum,temp,m,k,poi;
	
	printf("Enter the size of Disk\n");
	scanf("%d",&m);
	
	printf("Enter the Number of Entries in the Request Sequence \n");
	scanf("%d",&n);
	
	int arr[n+2],b[n+2];
	poi=0;
	arr[n]=m;
	
	printf("Enter the Request Sequence \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>m)
		{
			printf("Error\n");
			return 0;	
		}
	}
	
	printf("Enter the Initial Head Position \n");
	scanf("%d",&head);
	
	temp=head;
	arr[n+1]=head;
	sum=0;
	
	sort(arr,n+2);
	for(i=0;i<n+2;i++)
	{
		if(head==arr[i])
		break;
	}
	
	k=i;
	if(k<n/2)
	{
		for(i=k;i<n+2;i++)
		{
			b[poi]=arr[i];
			poi++;
		}
		for(i=k-1;i>=0;i--)
		{
			b[poi]=arr[i];
			poi++;
		}
	}
	else
	{
		for(i=k;i>=0;i--){
            b[poi]=arr[i];
			poi++;
        }
        for(i=k+1;i<n+2;i++){
           b[poi]=arr[i];
			poi++;
        }

	}
	
	temp=b[0];
	printf("Seek Sequence will be\n%d",temp);
	for(i=1;i<n+2;i++){
        printf("-> %d ",b[i]);
        sum+=abs(b[i]-temp);
        temp=b[i];
    }
		
	printf("\nTotal number of seek Operations will be %d",sum);

	return 0; 
} 

