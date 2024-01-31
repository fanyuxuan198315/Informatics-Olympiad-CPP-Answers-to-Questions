#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	double x,a=1,sum=0;
	cin>>x>>n;
	for(int i=n;i>=0;i--){
		a=1;
		for(int j=1;j<=i;j++){
			a*=x; 
		}
		sum+=a;
	}
	printf("%.2f",sum);
	
	return 0;
}
