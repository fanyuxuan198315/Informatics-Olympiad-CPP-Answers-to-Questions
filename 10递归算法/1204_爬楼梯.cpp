#include <iostream>

using namespace std;

int climb(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	return climb(n-1)+climb(n-2);
}
int main(){
	int x;
	while(cin>>x){
		cout<<climb(x)<<endl;
	}
	return 0;
}
