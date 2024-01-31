#include <iostream>
using namespace std;
int main()
{
	int relax=0,goal,bank=0,num;
	for(int i=1;i<=12;i++)
	{
		relax+=300;
		cin>>goal;
		if(goal>relax)
		{
			cout<<-i;
			return 0;
		}
		relax-=goal;
		num=relax/100*100;
		bank+=num;
		relax-=num;
	}
	cout<<relax+bank*1.2;
	
	return 0;
}
