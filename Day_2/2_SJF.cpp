#include <iostream>
#include <algorithm>
using namespace std;

int ab;

typedef struct schedule
{
	string pro_id;
	int at,bt,ct,ta,wt;

}schedule;

bool compare(schedule a,schedule b)
{
	return a.at < b.at;
}

bool compare2(schedule a,schedule b)
{
	return a.bt < b.bt && a.at <= ab;
}

int main()
{
	schedule pro[10];
	int n,i,j;

	cout<<"Enter the number of schedule : ";
	cin>>n;

	for(i=0;i<n;i++)
	{
		cout<<"\nProcess : ";
		cin>>pro[i].pro_id;
		cout<<"\nArrival Time : ";
		cin>>pro[i].at;
		cout<<"\nBrust Time : ";
		cin>>pro[i].bt;
	}

	sort(pro,pro+n,compare);

	pro[0].ct=pro[0].bt+pro[0].at;
	pro[0].ta=pro[0].ct-pro[0].at;
	pro[0].wt=pro[0].ta-pro[0].bt;

	for(i=1;i<n;i++)
	{
		ab=pro[i-1].ct;
		sort(pro+i,pro+n,compare2);
		if(pro[i-1].ct<pro[i].at)
		{
			pro[i].ct=pro[i-1].ct+pro[i].bt+(pro[i].at-pro[i-1].ct);
		}
		else
		{

			pro[i].ct=pro[i-1].ct+pro[i].bt;

		}
		pro[i].ta=pro[i].ct-pro[i].at;
		pro[i].wt=pro[i].ta-pro[i].bt;
	}
	
	cout<<"\nProcess ID\tArrival Time    Brust Time  Completion Time  TAT   WT\n";
	
	for(i=0;i<n;i++)
	{

		cout<<pro[i].pro_id<<"\t\t"<<pro[i].at<<"\t\t"<<pro[i].bt
		<<"\t    "<<pro[i].ct<<"\t\t    "<<pro[i].ta<<"\t"<<pro[i].wt;
		
		cout<<endl;
	}
	
	return 0;
}

