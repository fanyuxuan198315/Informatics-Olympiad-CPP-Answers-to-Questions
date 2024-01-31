#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
	int n;
	double a,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		a=pow(-1,i-1)*(1.0/i);
		sum+=a;
	}
	printf("%.4f",sum);
	return 0;
}
