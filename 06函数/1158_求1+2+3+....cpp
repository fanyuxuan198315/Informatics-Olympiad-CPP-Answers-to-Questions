#include <iostream>

using namespace std;
int sum(int n){
	if(n==1) return 1;
	return sum(n-1)+n;
}
int  main() {
	int n;
	cin>>n;
	cout<<sum(n);
	return 0;
}
