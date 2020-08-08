//https://www.codechef.com/SEPT19B/problems/FIBEASY

#include<iostream>
#include<math.h>

long double power(long double x,int y)
{
	for(int i=1;i<y;i++)
	x=x*2;
	return x;
}

int main()
{
	long double N;
	int T;
	scanf("%d",&T);
	while(T)
	{
		scanf("%Lf",&N);
		T--;
		
		if(N==1)
		printf("0\n");
		
		else if((N>1)&&(N<=power(2,1)))
		{
			printf("1\n");
			continue;
		}
	
		else if((N>power(2,1))&&(N<power(2,2)))
		{
			printf("1\n");
			continue;
		}
		
		for(int i=2;i<70;i++)
		{
			if((N>=power(2,i))&&(N<power(2,i+1)))
			{
				if(i%4==2)
				printf("2\n");
				
				else if(i%4==3)
				printf("3\n");
				
				else if(i%4==0)
				printf("0\n");
				
				else if(i%4==1)
				printf("9\n");
				
				break;
			}
		}	
	}
	return 0;
}
