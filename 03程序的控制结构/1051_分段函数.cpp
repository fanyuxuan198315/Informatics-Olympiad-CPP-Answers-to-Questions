#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	double n;
	cin>>n;
	if(n>=0&&n<5)
		printf("%.3f",2.5-n);
	else if(n<10) printf("%.3f",2-1.5*(n-3)*(n-3));
	else printf("%.3f",n/2-1.5);
	return 0;
}
