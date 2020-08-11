//https://practice.geeksforgeeks.org/problems/reversal-algorithm/0



#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j, k, n, d, min, max, sum;
    cin >> t;
    while(t--)
    {
        cin>>n;
        vector < int > v1(n);
        for(i=0;i<n;i++)
        cin>>v1[i];
        
        cin>>d;
        
        reverse(v1.begin(),v1.begin()+d);
        reverse(v1.begin()+d,v1.end());
        reverse(v1.begin(),v1.end());
        
        for(i=0;i<n;i++)
        cout<<v1[i]<<" ";
        cout<<endl;
    
    }
    return 0;
}