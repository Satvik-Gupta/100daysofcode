//https://www.codechef.com/AUG20B/problems/LINCHESS
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j, k, p, q, r, x, y, u, v, n, min;
    cin >> t;
    while(t--)
    {
        cin>>n>>k;
        int arr[n+1],arr2[n+1];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
            if(k%arr[i]==0)
            {
                arr2[i]=k/arr[i];
            }
            else
            {
                arr2[i]=INT_MAX;
            }
        }
        min=INT_MAX;
        p=0;
        for(i=0;i<n;i++)
        {
            if(arr2[i]<min)
            {
                min=arr2[i];
                p=i;
            }
        }
        if(min==INT_MAX)
        cout<<"-1\n";
        else
        cout<<arr[p]<<"\n";
    }
    return 0;
}
