#include <iostream>
using namespace std;
int main()
{
	int n,x;
	int maxs=-1,mins=1001;
	cin>>n;
	for(int i=n;i--;)
	{
		cin>>x;
		if(x>maxs) maxs=x;
		if(x<mins) mins=x;
	}
	cout<<maxs-mins;
	return 0;
}
