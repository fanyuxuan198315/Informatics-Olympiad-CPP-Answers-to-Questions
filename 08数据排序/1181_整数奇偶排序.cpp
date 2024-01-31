#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int a[15]={0};
	for(int i=1;i<=10;i++){
		cin>>a[i];
	}
	sort(a+1,a+11);
	for(int i=10;i>=1;i--){
		if(a[i]%2==1){
			cout<<a[i]<<" ";
		}
	}
	for(int i=1;i<=10;i++){
		if(a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
