//https://www.codechef.com/JUNE20B/problems/EVENM/

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j, k, p, q, r, x, y, u, v, n, m;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
        {
            k=1;
            for(i=0;i<n;i++)
            {
                if(i%2==0)
                for(j=0;j<n;j++)
                {
                    cout<<k<<" ";
                    k++;
                }
                else
                {p=n-1;
                for(j=0;j<n;j++)
                {
                    cout<<k+p<<" ";
                    k++;
                    p=p-2;
                }
                }
                cout<<"\n";
            }
        }
        else
        {
            k=1;
            for(i=0;i<n;i++)
            {
                for(j=0;j<n;j++)
                {
                    cout<<k<<" ";
                    k++;
                }
                cout<<"\n";
            }
                
        }
        
    }

    return 0;
}
