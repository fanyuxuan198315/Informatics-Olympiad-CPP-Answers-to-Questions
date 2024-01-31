#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	long long n,a;
	double sum=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		a=1;
		for(int j=1;j<=i;j++){
			a*=j;
		}
		sum+=(1.0/a);
	}
	printf("%.10f",sum);
	return 0;
}
