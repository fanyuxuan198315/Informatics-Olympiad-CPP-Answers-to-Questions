#include <iostream>

using namespace std;

int main(){
	int n;
	int a[105]={0};
	int num[1005]={0};
	int cnt=0;
	int ranks[105]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		num[a[i]]=1;
	}
	for(int i=1;i<=1000;i++){
		if(num[i]){
			//cnt++;
			ranks[cnt++]=i;
		}
	}
	cout<<cnt<<endl;
	for(int i=0;i<cnt;i++){
		cout<<ranks[i]<<" ";
	}
	return 0;
}
