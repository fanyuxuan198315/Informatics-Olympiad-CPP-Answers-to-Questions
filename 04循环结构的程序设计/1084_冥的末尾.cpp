#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int a,b,sum=1;
	cin>>a>>b; 
	for(int i=1;i<=b;i++)
	{
		sum*=a;
		sum%=1000;
	}
	printf("%03d",sum%1000);
	
	return 0;
}
