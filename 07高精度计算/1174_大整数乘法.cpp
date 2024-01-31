#include <iostream>
#include <cstring>
using namespace std;
char s1[205],s2[205];
int n1[205],n2[205],ans[405];

int main(){
	cin>>s1>>s2;
	int l1=strlen(s1);
	int l2=strlen(s2);
	
	for(int i=0;i<l1;i++){
		n1[i]=s1[l1-1-i]-'0';
	}
	for(int i=0;i<l2;i++){
		n2[i]=s2[l2-1-i]-'0';
	}
	
	for(int i=0;i<l1;i++){
		for(int j=0;j<l2;j++){
			ans[i+j]+=n1[i]*n2[j];
			ans[i+j+1]+=ans[i+j]/10;
			ans[i+j]%=10;
		}
	}
	
	bool flag=false;
	for(int i=l1+l2;i>=0;i--){
		if(ans[i]!=0||i==0) flag=true;
		if(flag){
			cout<<ans[i];
		}
	}
	
	return 0;
}
