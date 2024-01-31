#include <iostream>

using namespace std;
int main()
{
	int n,num,pre;
	int len=0,maxl=-1;
	cin>>n;
	cin>>pre;
	len++;
	for(int i=2;i<=n;i++){
		cin>>num;
		if(pre==num){
			len++;
			
		}else{
			if(len>maxl){
				maxl=len;
			}
			len=1;
		}
		pre=num;
	}
	if(len>maxl) maxl=len;
	
	cout<<maxl;
	return 0;
}
