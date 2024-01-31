#include <iostream>

using namespace std;
// f(n)=f(n-1) + f(n-2) + f(n-3) 
long long a[75]={0,1,2,4};
int main(){
	for(int i=4;i<=70;i++){
		a[i]=a[i-1]+a[i-2]+a[i-3];
	}
	int n;
	while(1){
		cin>>n;
		if(n==0) break;
		cout<<a[n]<<endl;
	}
	return 0;
}
