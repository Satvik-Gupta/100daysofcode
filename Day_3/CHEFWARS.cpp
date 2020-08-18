//https://www.codechef.com/AUG20B/problems/CHEFWARS/
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j, k, p, q, r, x, y, u, v, n, m, h ;
    float num;
    cin >> t;
    while(t--)
    {
        cin>>h>>p;
        num=log2(p);
        //cout<<num;
        if(h<=(pow(2,num+1)-1))
        cout<<"1\n";
        else
        {
            cout<<"0\n";
        }
    }
    return 0;
}
