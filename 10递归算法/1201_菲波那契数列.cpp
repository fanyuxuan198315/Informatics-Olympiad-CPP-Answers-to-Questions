#include <iostream>

using namespace std;
int fabn(int n){
	if(n==1||n==2){
		return 1;
	}else{
		return fabn(n-1)+fabn(n-2);
	}
}
int main(){
	int n,a;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a;
		cout<<fabn(a)<<endl;		
	}

	return 0;
}
