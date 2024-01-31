#include <iostream>
using namespace std;
int main()
{
	int nums[105]={0};
	int n,m,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>nums[i];
	}
	cin>>m;
	for(int i=1;i<=n;i++){
		if(nums[i]==m){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
