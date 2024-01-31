#include <iostream>
using namespace std;
int main()
{
	int f1=1,f2=1,f3,k;
	cin>>k;
	for(int i=3;i<=k;i++)
	{
		f3=f1+f2;
		f1=f2;
		f2=f3;
	}
	if(k<3) cout<<1;
	else cout<<f3;
	return 0;
}
