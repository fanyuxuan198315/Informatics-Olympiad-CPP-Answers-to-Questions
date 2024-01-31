#include <iostream>

using namespace std;
int main()
{
	int a,b,c;
	cin>>a>>b>>c;
	for(int i=2;;i++)
	{
		int ya=a%i;
		int yb=b%i;
		int yc=c%i;
		if(ya==yb&&ya==yc)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
