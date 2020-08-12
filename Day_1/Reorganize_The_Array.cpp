//https://practice.geeksforgeeks.org/problems/reorganize-the-array/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j, k, n, min, max, x;
    cin >> t;
    while(t--)
    {
        cin>>n;
        vector <int> arr (n,-1);
        for(i=0;i<n;i++)
        {
            cin>>x;
            if(x!=-1)
            arr[x]=x;
        }
        
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;

    
    }
    return 0;
}