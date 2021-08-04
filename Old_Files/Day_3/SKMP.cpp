//https://www.codechef.com/AUG20B/problems/SKMP


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define PI 3.1415926535897932384626

const int mod = 1000000007;

//=======================
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, i, j, k, n, x;
    cin >> t;
    while(t--)
    {
        string str1,str2,str3,str4,temp;
        ll arr1[26]={0},arr2[26]={0},arr3[26]={0};
        cin>>str1>>str2;
        
        for(i=0;i<str1.length();i++)
        {
            arr1[str1[i]-'a']++;
        }
        
        for(i=0;i<str2.length();i++)
        {
            arr2[str2[i]-'a']++;
        }
        
        for(i=0;i<26;i++)
        {
            if(arr1[i]>=arr2[i])
            {
                arr3[i]=arr1[i]-arr2[i];
            }
        }
        
        str3=str2;
        k=0;
        for(i=0;i<26;i++)
        {
            for(j=0;j<arr3[i];j++)
            {
                char c = i+'a';
                temp = c;
                if(i<=(str2[0]-'a'))
                {
                    
                    str3.insert(k,temp);
                    k++;
                }
                else
                {
                    str3.append(temp);
                }
            }
        }
        str4=str2;
        k=0;
        for(i=0;i<26;i++)
        {
            for(j=0;j<arr3[i];j++)
            {
                char c = i+'a';
                temp = c;
                if(i<(str2[0]-'a'))
                {
                    
                    str4.insert(k,temp);
                    k++;
                }
                else
                {
                    str4.append(temp);
                }
            }
        }
        x=str3.compare(str4);
        
        if(x<0)
        {
            cout<<str3<<endl;
        }
        
        else
        {
            cout<<str4<<endl;
        }
        
    }
    return 0;
}

