#include <iostream>
using namespace std;
int main()
{
	int num[10005]={0},ans=-1;
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	cin>>x;
	for(int i=1;i<=n;i++){
		if(num[i]==x){
			ans=i;
			break;
		}
	}
	cout<<ans;
	 
	return 0;
}
