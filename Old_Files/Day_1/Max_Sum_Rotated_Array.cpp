//https://practice.geeksforgeeks.org/problems/max-sum-in-the-configuration/1

#include<bits/stdc++.h>
using namespace std;

int max_sum(int A[],int N);

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int A[N];
        for(int i=0;i<N;i++)
        {
            cin>>A[i];
        }

        cout<<max_sum(A,N)<<endl;
        /*keeping track of the total sum of the array*/

}

int max_sum(int A[],int N)
{
    int sum,max,R[N],i,j;
    sum=0;
    max=0;
    R[0]=0;
    for(i=0;i<N;i++)
    {
        sum+=A[i];
        R[0]+=i*A[i];
    }
    
    max=R[0];
    
    for(j=1;j<N;j++)
    {
        R[j]=sum+R[j-1]-N*A[N-j];
        
        if(max<R[j])
        max=R[j];
    }
    
    return max;
//Your code here
}