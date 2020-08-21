//https://www.codechef.com/CENS2020/problems/CENS20G
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
        string str;
        int x1,y1,x2,y2,q,count_r,count_l,count_u,count_d;
        
        count_d=0;
        count_u=0;
        count_l=0;
        count_r=0;
        
        cin>>str;
        
        for(i=0;i<str.length();i++)
        {
            if(str[i]=='R')
            count_r++;
            
            else if(str[i]=='L')
            count_l++;
            
            else if(str[i]=='U')
            count_u++;
            
            else
            count_d++;
            
        }
        
        
        cin>>x1>>y1;
        cin>>q;
        for(i=0;i<q;i++)
        {
            cin>>x2>>y2;
            
            int xdiff=x2-x1;
            int ydiff=y2-y1;
            
            int count_x,count_y;
            count_x=0;
            count_y=0;
            
            char search_x,search_y;
            
            bool x_flag=0,y_flag=0;
            
            if(xdiff==0)
            x_flag=1;
            
            if(ydiff==0)
            y_flag=1;
            
            
            if(xdiff>0)
            {
                if(count_r>=xdiff)
                {
                    count_x=abs(xdiff);
                    x_flag=1;
                    search_x='R';
                }
                
            }
            
            if(xdiff<0)
            {
                if(count_l>=abs(xdiff))
                {
                    count_x=abs(xdiff);
                    x_flag=1;
                    search_x='L';
                }
                
            }
            
            if(ydiff>0)
            {
                if(count_u>=ydiff)
                {
                    count_y=abs(ydiff);
                    y_flag=1;
                    search_y='U';
                }
                
            }
            
            if(ydiff<0)
            {
                if(count_d>=abs(ydiff))
                {
                    count_y=abs(ydiff);
                    y_flag=1;
                    search_y='D';
                }
                
            }
            
            if(x_flag&&y_flag)
            {
                cout<<"YES ";
                cout<<abs(xdiff)+abs(ydiff)<<"\n";
                continue;
            }
            
            cout<<"NO\n";
        }
        
    }
    return 0;
}
