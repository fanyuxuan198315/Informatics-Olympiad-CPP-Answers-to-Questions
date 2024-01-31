#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	double nums,s=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>nums;
		s+=nums; 
	}
	printf("%.4f",s/n);
	return 0;
}
