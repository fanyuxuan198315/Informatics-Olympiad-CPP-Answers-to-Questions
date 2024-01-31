#include <iostream>

using namespace std;
int reverse(int n,int _n){
	if(n==0) return _n;
	return reverse(n/10,_n*10+n%10);
}
int  main() {
	int n;
	cin>>n;
	cout<<reverse(n,0);
	return 0;
}
