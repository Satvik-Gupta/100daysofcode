//https://practice.geeksforgeeks.org/problems/search-in-a-rotated-array/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

int binary_search(int arr[],int l,int r,int k)
{
    int mid ;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==k)
        return mid;
        
        else if (arr[mid]<k)
        {
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return -1;
}

int pivot_search(int arr[],int l ,int r)
{
    if(l==r)
    return l;
    
    else if(l<r)
    {
        int mid=(l+r)/2;
        if(arr[mid]>arr[mid+1])
        return mid;
        
        if(arr[mid]<arr[mid-1])
        return mid-1;
        
        if(arr[l]>=arr[mid])
        return pivot_search(arr,l,mid-1);
        
        return pivot_search(arr,mid+1,r);
        
    }
}



//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j, k, n, y, x, pivot;
    cin >> t;
    while(t--)
    {
        cin>>n;
        int arr[n];
        
        for(i=0;i<n;i++)
        cin>>arr[i];
        
        cin>>k;
        pivot = pivot_search(arr,0,n);
        
        x=binary_search(arr,0,pivot,k);
        y=binary_search(arr,pivot+1,n,k);
        if(k==arr[x])
        cout<<x<<endl;
        
        else
        cout<<y<<endl;
    }
    return 0;
}