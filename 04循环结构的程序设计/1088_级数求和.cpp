#include <iostream>

using namespace std;
int main()
{
	int k,n=0;
	double s=0;
	cin>>k;
	
	do{
		n++;
		s+=(1.0/n);
		
	}while(s<=k);
	
	cout<<n;
	return 0;
}
