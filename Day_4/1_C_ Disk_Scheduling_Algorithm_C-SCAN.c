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

	int n,head,i,sum,temp,m,k,pos1,pos2;
	
	printf("Enter the size of Disk\n");
	scanf("%d",&m);
	
	printf("Enter the Number of Entries in the Request Sequence \n");
	scanf("%d",&n);
	
	int arr[n+3],left[n],right[n];
	pos1=0;
	pos2=0;
	sum=0;
	arr[n]=m;
	arr[n+2]=0;

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
	
	sort(arr,n+3);
	for(i=0;i<n+3;i++)
	{
		if(head==arr[i])
		break;
	}
	
	k=i;
	for(i=k;i<n+3;i++)
	{
		right[pos1]=arr[i];
		pos1++;
	}
	for(i=0;i<k;i++)
	{
		left[pos2]=arr[i];
		pos2++;
	}
	
	temp=right[0];
	printf("Seek Sequence will be\n%d",temp);
	for(i=1;i<pos1;i++){
        printf("-> %d ",right[i]);
        sum+=abs(right[i]-temp);
        temp=right[i];
    }
	
	temp=left[0];
	printf(" -> %d ",temp);
	for(i=1;i<pos2;i++)
	{
		printf("-> %d ",left[i]);
        sum+=abs(left[i]-temp);
        temp=left[i];
	}
	
	sum+=m;
		
	printf("\nTotal number of seek Operations will be %d",sum);

	return 0; 
} 

