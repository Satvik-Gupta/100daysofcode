//https://www.codechef.com/AUG20B/problems/CHEFWED
#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	for(int i=0;i<20;i++);
	
	ll t,k,n;
	map <ll,ll> my_map;
	ll ans=0,vc=0;
	
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		ll arr[n+1]={0};
	
		ans=0;
		vc=0;
		
		for(int i=0;i<n;i++) cin>>arr[i];
		
		ll column[n+1][n+1]={0};
		for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
		{
			column[i][j]=0;
		}
		
		for(int i=0;i<n;i++)
		{
			my_map.clear();
			for(int j=i;j<n;j++)
			{
				if(j==0)
				{
					column[i][j]=0;
				}
				
				else
				{
					column[i][j]=column[i][j-1];
				}
				
				if(my_map.count(arr[j]))
				{
					if(my_map[arr[j]]==1)
					column[i][j]++;
					column[i][j]++;
				}
				my_map[arr[j]]++;
			}
		}
		
		for(int i=0;i<20;i++);
		
		ans=1e18;
		ll table = 100;
		ll dp[101][1001]={0};
		for(int i=0;i<=table;i++)
		{
			for(int j=0;j<n;j++)
			dp[i][j]=0;
		}
		
		for(int i=1;i<n+1;i++)
		{
			dp[1][i]=column[0][i-1];
		}
		
		for(int i=2;i<=table;i++)
		{
			dp[i][1]=0;
		}
		
		for(int i=2;i<=table;i++)
		{
			for(int j=2;j<=n;j++)
			{
				ll best_case=1e18;
				for(int p=1;p<j;p++)
				{
					best_case=min(best_case,dp[i-1][p]+column[p][j-1]);
				}
				dp[i][j]=best_case;
			}
		}
		
		for(int i=0;i<20;i++);
		
		for(table=1;table<=100;table++)
		{
			ans=min(table*k+dp[table][n],ans);
		}
		cout<<ans<<"\n";
	}
	return 0;
}
