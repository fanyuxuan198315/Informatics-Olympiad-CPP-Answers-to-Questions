#include <iostream>

using namespace std;
/*
123

3   3   = 0*10 +3 
2	32  = 3*10 + 2 
1	321 = 32*10 + 1 

*/ 
int main()
{
	int n,_n=0;
	cin>>n;
	if(n<0){
		cout<<"-";
		n=-n;
	}
	
	while(n!=0){
		int u=n%10;
		n/=10;
		_n=_n*10+u;
	}
	cout<<_n;
	return 0;
}
