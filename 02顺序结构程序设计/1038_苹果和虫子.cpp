#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	if(n*x<=y)
	{
		cout<<0;
	}else
	{
		cout<<n-ceil(1.0*y/x);
	}
	return 0;
}
