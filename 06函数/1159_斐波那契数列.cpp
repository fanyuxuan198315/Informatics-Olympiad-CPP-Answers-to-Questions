#include <iostream>

using namespace std;
int feib(int n){
	if(n<3) return n-1;
	return feib(n-1)+feib(n-2);
} 
int  main() {
	int n;
	cin>>n;
	cout<<feib(n);
	return 0;
}
