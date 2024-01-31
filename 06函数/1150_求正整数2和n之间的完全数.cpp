#include <iostream>
using namespace std;

bool isAll(int num)
{
	int sum=0;
	for(int i=1;i<num;i++)
	{
		if(num%i==0) sum+=i;
	}
	
	return sum==num;
}

int  main() {
	
	int n;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(isAll(i))
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
