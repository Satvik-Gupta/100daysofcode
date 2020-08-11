//https://practice.geeksforgeeks.org/problems/rotate-array-by-n-elements/0

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t, i, j, k, n, d, x, min, max, sum;
    cin >> t;
    
    while(t--)
    {
        cin>>n>>d;
        vector < int > v1(n);
        for(i=0;i<n;i++)
        {
            cin>>x;
            v1[(i+n-d)%n]=x;
        }
    
        for(i=0;i<n;i++)
        cout<<v1[i]<<" ";
        
        cout<<endl;
    }
    return 0;
}

