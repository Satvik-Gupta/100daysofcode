#include<iostream>
#include<cstdlib>
using namespace std;

int partition(int arr[],int l,int r)
{
	int pivot=arr[r];
	int i,temp;
	i=(l-1);
	for(int j=l;j<=r-1;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	
	temp=arr[i+1];
	arr[i+1]=arr[r];
	arr[r]=temp;
	
	return (i+1);
}

int rand_partition(int arr[],int l,int r)
{
	int randum=rand()%(r-l) + l;
	int temp;
	temp=arr[randum];
	arr[randum]=arr[r];
	arr[r]=temp;
	return partition(arr,l,r);
}

void quick_sort(int arr[],int l,int r)
{
	int pi;
	if(l<r)
	{
		pi =rand_partition(arr,l,r);
		quick_sort(arr,l,pi-1);
		quick_sort(arr,pi+1,r);
			
	}
}

int main()
{
	int n;
	cout<<"Enter size of array\n";
	cin>>n;
	int arr[n];
	cout<<"Enter Elements\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	quick_sort(arr,0,n-1);
	
	cout<<"Sorted Array \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
