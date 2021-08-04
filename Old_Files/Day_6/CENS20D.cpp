//https://www.codechef.com/CENS2020/problems/CENS20D
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j, k, n, min, max, sum;
    cin >> t;
    while(t--)
    {
        cin>>n;
        int arr[n],count;
        for(i=0;i<n;i++) cin>>arr[i];
        
        count=0;
        
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((arr[i]&arr[j])==arr[i])
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
