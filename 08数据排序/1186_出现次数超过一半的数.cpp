#include <iostream>

using namespace std;

int main(){
	int n,x;
	int flag=0;
	int num[105]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		num[x+50]++;
	}
	for(int i=0;i<=100;i++){
		if(num[i]>n/2){
			flag=1;
			cout<<i-50<<" ";
		}
	}
	if(!flag) cout<<"no";
	return 0;
}
