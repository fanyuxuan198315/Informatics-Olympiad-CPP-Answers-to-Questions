#include <iostream>

using namespace std;
int n,a;
int f[1000005]={0,1,1};
int main(){
	cin>>n;
	for(int i=3;i<=1000000;i++){
		f[i]=(f[i-1]+f[i-2])%1000;
	}
	
	for(int i=1;i<=n;i++){
		cin>>a;
		cout<<f[a]<<endl;
	}
	return 0;
}
