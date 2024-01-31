#include <iostream>
using namespace std;
int main()
{
	//a=k*b+r
	//r=a-k*b
	double a,b;
	cin>>a>>b; 
	int k=int(a/b);
	cout<<a-k*b;
	return 0;
}
