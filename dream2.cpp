#include<iostream>
using namespace std;
int main()
{
	int dd,mm,yy;
	cout<<"Enter the date";
	cin>>dd>>mm>>yy;
	if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
	{
		if(dd<=31&&dd>0)
		cout<<"valid date";
		else
		cout<<"Invalid date";
		
	}
	else
	{
		if(mm==4||mm==6||mm==9||mm==11)
		{
			if(dd<=30&&dd>0)
			cout<<"valid date";
			else
			cout<<"Invalid date";
			
		}
		else if(mm==2)
		{
			if((yy%400==0)||
			(!yy%100==0)&&(yy%4==0))
			{
				if(dd>0&&dd<=29)
				cout<<"valid date";
				else
				cout<<"Invalid date";
				
			}
			else
			if(dd>0&&dd<=28)
			cout<<"valid date";
			else
			cout<<"Invalid date";
			
		}
		else
		cout<<"Invalid date";
		
	}
	return 0;
	
}
