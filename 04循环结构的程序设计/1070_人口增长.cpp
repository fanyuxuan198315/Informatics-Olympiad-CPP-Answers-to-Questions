#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x,n;
	double ans=1;
	cin>>x>>n;
	ans=x;
	for(int i=1;i<=n;i++)
	{
		ans*=1.001;
	}
	printf("%.4f",ans);
	return 0;
}
