#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int n,num,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num;
		sum+=num;
	}
	printf("%d %.5f",sum,1.0*sum/n);
	return 0;
}
