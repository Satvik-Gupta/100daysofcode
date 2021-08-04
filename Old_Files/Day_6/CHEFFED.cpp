//https://www.codechef.com/problems/CHEFFED
#include<iostream>
using namespace std;

int sumOfDigits(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum+num%10;
        num=num/10;
    }
    return sum;
}

int main()
{
  int n;
  cin>>n;
  int count = 0;
  for(int i=n-97;i<=n;i++)
  {
      if(i+sumOfDigits(i)+sumOfDigits(sumOfDigits(i)) == n)
      count++;
  }
  cout<<count<<endl;
  return 0;

}