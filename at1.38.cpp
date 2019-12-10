#include<iostream>
using namespace std;
int main()
{
	int N,i,f,j;
	cout<<"Enter any number ";
	cin>>N;
	if(N<=3)
	{
		cout<<"Input value is less than or equl to 3";
		return 0;
		
	}
	else
	{
		i=2,j=1;
		cout<<"The  prime numbers are:\n";
		while(j<=N)
		{
			f=0,i=2;
			while(i<j)
			{
				if(j%i==0)
				{
					f=1;
					break;
					
				}
				i++;
				
			}
			if(f==0)
			cout<<j<<endl;
			j++;
			
		}
		
	}
	return 0;
	
}
