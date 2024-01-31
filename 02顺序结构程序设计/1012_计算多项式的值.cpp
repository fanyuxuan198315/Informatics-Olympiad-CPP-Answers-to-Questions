#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double x,a,b,c,d;
	cin>>x>>a>>b>>c>>d;
	printf("%.7f",a*x*x*x+b*x*x+c*x+d);
	return 0;
}
