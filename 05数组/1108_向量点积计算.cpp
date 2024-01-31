#include <iostream>
using namespace std;
int main()
{
	int n,sum=0;
	int a[1005]={0},b[1005]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		cin>>b[i];
	}
	for(int i=1;i<=n;i++){
		sum+=(a[i]*b[i]);
	}
	cout<<sum;
	return 0;
}
