#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	double s=0,p=1,q=2;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		s+=(1.0*q/p);
		int oq=q;
		q=q+p;
		p=oq; 
	}
	printf("%.4f",s);
	return 0;
}
