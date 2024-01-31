#include <iostream>
using namespace std;
int main()
{
	int n,m,cnt=0,x;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		if(x==m) cnt++;
	} 
	cout<<cnt;
	return 0;
}
