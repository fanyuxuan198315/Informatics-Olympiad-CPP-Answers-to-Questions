#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	int n;
	int nums[105]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nums[i];
	}
	for(int i=n;i>=1;i--){
		cout<<nums[i]<<" ";
	}
	return 0;
}
