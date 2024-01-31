#include <iostream>
using namespace std;
int main()
{
	int n,cnt=0,flag=1;
	cin>>n;
	for(int i=2;;i++){
		flag=1;
		
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag==1) cnt++;
		if(cnt==n) {
			cout<<i;
			break; 
		}
	}
	return 0;
}
