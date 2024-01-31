#include <iostream>
using namespace std;
bool isPrime(int num)
{
	if(num==1) return false;
	for(int i=2;i*i<=num;i++)
	{
		if(num%i==0) return false;
	}
	return true;
}


int  main() {
	int n,sum=0;
	cin>>n;
	for(int i=2;i<=n;i++)
	{
		if(isPrime(i))
		{
			sum++;
		}
	}
	cout<<sum;
	
	return 0;
}
