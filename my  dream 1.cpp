#include<iostream>
using namespace std;
int main()
{
	int i,j,k,l;
	cout<<"The armstrong numbers in between  1 and 200 are";
	for(i=1;i<=200;i++)
	{
		k=0,j=i;
		while(j!=0)
		{
			l=j%10;
			k=k+l*l*l;
			j=j/10;
			
		}
		if(k==i)
		cout<<"\n"<<i;
		
	}
	return 0;
	
}
