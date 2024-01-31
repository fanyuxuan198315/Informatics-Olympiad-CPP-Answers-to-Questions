#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int n;
	int a[505]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	sort(a+1,a+n+1);
	bool flag=false;
	for(int i=1;i<=n;i++){
		if(a[i]%2==1){
			if(flag)
				cout<<","<<a[i];
			else
				cout<<a[i];
			flag=true;
		}
	}
	
	return 0;
}
