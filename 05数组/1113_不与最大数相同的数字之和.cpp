#include <iostream>
using namespace std;
int main()
{
	int num[105]={0},n,maxs=-1000001;
	int sum=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
		if(num[i]>maxs){
			maxs=num[i];
		}
	}
	for(int i=1;i<=n;i++){
		if(num[i]!=maxs){
			sum+=num[i];
		}
	}
	cout<<sum;
	return 0;
}
