#include <iostream>
using namespace std;
int main()
{
	int n;
	int gold=0,silver=0,copper=0;
	int x,y,z;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x>>y>>z;
		gold+=x;
		silver+=y;
		copper+=z;
	}
	cout<<gold<<" "<<silver<<" "<<copper<<" "<<gold+silver+copper;
	return 0;
}
