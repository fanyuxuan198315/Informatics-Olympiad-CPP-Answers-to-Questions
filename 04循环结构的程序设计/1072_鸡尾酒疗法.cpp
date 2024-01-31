#include <iostream>
using namespace std;
int main()
{
	int n,s,c;
	double x,y;
	cin>>n;
	cin>>s>>c;
	x=1.0*c/s;
	for(int i=1;i<n;i++)
	{
		cin>>s>>c;
		y=1.0*c/s;
		if(y-x>0.05)
		{
			cout<<"better\n";
		}else if(x-y>0.05)
		{
			cout<<"worse\n";
		}else
		{
			cout<<"same\n";
		}
		
	} 
	return 0;
}
