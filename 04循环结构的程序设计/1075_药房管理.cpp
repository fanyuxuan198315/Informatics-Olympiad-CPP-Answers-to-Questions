#include <iostream>
using namespace std;
int main()
{
	int m,n,x;
	int ans=0;
	cin>>m>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		
		if(m-x<0)
		{
			ans++;
		}else
		{
			m-=x;
		}
	}
	cout<<ans;
	return 0;
}
