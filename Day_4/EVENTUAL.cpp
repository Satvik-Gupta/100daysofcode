//https://www.codechef.com/problems/EVENTUAL

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
        int flag=0;
        string str;
        int arr[26]={0};
        cin>>n;
        cin>>str;
        for(i=0;i<n;i++)
        {
            arr[str[i]-'a']++;
        }
        
        for(i=0;i<26;i++)
        {
            //cout<<arr[i]<<endl;
            if(arr[i]%2!=0)
            flag=1;
        }
        
        
        if(flag==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
    return 0;
}
