#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	
	while(n!=1){
		
		if(n%2==0){
			printf("%d/2=%d\n",n,n/2);
			n=n/2;
		}else{
			printf("%d*3+1=%d\n",n,n*3+1);
			n=n*3+1;
		}
	}
	cout<<"End";
	return 0;
}
