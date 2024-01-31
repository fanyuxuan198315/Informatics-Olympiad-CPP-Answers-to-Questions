#include <iostream>
using namespace std;
bool isReser(int num)
{
	int _num=0;
	int t=num;
	while(t!=0)
	{
		int u=t%10;
		t/=10;
		_num=_num*10+u;
	}
	return _num==num;
}

bool isPrime(int num)
{
	if(num==1) return false;
	
	for(int i=2;i<num;i++)
	{
		if(num%i==0) return false;
	}
	return true;
}

int  main() {

	for(int i=100;i<=999;i++)
	{
		if(isReser(i)&&isPrime(i))
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
