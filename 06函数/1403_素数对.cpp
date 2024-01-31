#include <iostream>
#include <cstdio>
using namespace std;
bool isPrime(int x){
	if(x<2) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
bool vis[10005];
int main(){
	bool flag=true;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		if(isPrime(i)){
			vis[i]=true;
			if(i-2>0&&vis[i-2]){
				flag=false;
				cout<<i-2<<" "<<i<<endl;
			}
		}
	}
	if(flag){
		cout<<"empty";
	}
	return 0;
}
