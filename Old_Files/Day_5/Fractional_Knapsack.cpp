#include<bits/stdc++.h>
using namespace std;

int comp(pair <int,int > p1,pair <int,int > p2) {    
   return (p1.first/p1.second > p2.first/p2.second);
}

int main()
{
	float weight,n,profit,sum_w;
	int p1,p2;
	sum_w=0;
	profit=0;
	vector < pair<int ,int> > vect;
	cout<<"Enter the number of elements\n";
	cin>>n;
	
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++)
	{
		cout<<"Elenent "<<i+1<<"\n";
		cin>>p1;
		cin>>p2;
		vect.push_back(make_pair(p1,p2));
	}
	
	
	sort(vect.begin(),vect.end(),comp);
	
	cout<<"Enter the Knapsack Capacity \n";
	cin>>weight;
	
	for(int i=0;i<n;i++)
	{
		if(sum_w+vect[i].second<=weight)
		{
			sum_w+= vect[i].second;
			profit+= vect[i].first;
		}
		
		else
		{
			float rest = weight - sum_w;
			profit+=  rest*((float)vect[i].first/(float)vect[i].second);
			break;
		}
		
	}
	cout<<"Total Profit :"<<profit;
}
