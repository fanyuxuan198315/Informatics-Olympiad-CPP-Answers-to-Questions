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
int swapNum(int num)
{
	return  10*(num%10)+(num/10);
}

bool isFactPrime(int num)
{
	int _num=swapNum(num);
	return isPrime(num)&&isPrime(_num);
}

int  main() {
	
	for(int i=11;i<=99;i++)
	{
		if(isFactPrime(i))//判断i是否是绝对素数 
		{
			cout<<i<<endl;
		}
	}
	return 0;
}
