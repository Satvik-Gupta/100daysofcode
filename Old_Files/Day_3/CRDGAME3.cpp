//https://www.codechef.com/AUG20B/problems/CRDGAME3
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j, k, p_c, p_r, q, r, x, y, u, v, n, m;
    cin >> t;
    while(t--)
    {
        cin>>p_c>>p_r;
        if(ceil(float(p_c)/9.0)<ceil(float(p_r)/9.0))
        {
            cout<<0<<" "<<ceil(float(p_c)/9.0)<<"\n";
        }
        else
        {
            cout<<1<<" "<<ceil(float(p_r)/9.0)<<"\n";
        }
    }
    return 0;
}

