#include <iostream>
#include <cstring>
using namespace std;
int main(){
	char str[2505]={0};
	int cnt=1,k,flag=1;
	cin>>k;
	cin>>str;
	int len=strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]==str[i+1]){
			cnt++;
		}else{
			if(cnt>=k){
				flag=0;
				cout<<str[i];
				break;
			}
			cnt=1;
		}
	}
	if(flag){
		cout<<"No";
	}
	
	
	return 0;
}
