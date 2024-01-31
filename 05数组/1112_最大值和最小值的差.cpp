#include <iostream>
using namespace std;
int main()
{
	int m,num[10005]={0};
	int maxs=-10001,mins=10001;
	cin>>m;
	for(int i=1;i<=m;i++){
		cin>>num[i];
		if(num[i]>maxs){
			maxs=num[i];
		}
		
		if(num[i]<mins){
			mins=num[i];
		}
	}
	cout<<maxs-mins;
	return 0;
}
