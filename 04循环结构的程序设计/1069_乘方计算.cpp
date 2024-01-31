#include <iostream>
using namespace std;
int main()
{
	int a,n,ans=1;
	cin>>a>>n;
	for(int i=1;i<=n;i++)
	{
		ans*=a;
	}
	cout<<ans;
	return 0;
}
