#include <iostream>
/*
1/8 =0.123 *10


*/
using namespace std;
int main()
{
	int a,b,n,tmp;
	cin>>a>>b>>n;
	
	for(int i=1;i<=n;i++)
	{
		a*=10;
		tmp=a/b;
		a%=b;
	}
	cout<<tmp;
	
	return 0;
}
