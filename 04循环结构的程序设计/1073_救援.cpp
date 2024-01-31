#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,num;
	double x,y,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y>>num;
		double dis=sqrt(x*x+y*y);
		sum=sum+(2*dis/50+num*1.5);
	}
	cout<<ceil(sum);
	return 0;
}
