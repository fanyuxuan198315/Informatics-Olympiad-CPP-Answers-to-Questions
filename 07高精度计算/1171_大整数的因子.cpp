#include <iostream>
#include <cstring>
using namespace std;

int numMod(char s[],int k){
	int c[35]={0};
	int len=strlen(s);
	for(int i=0;i<len;i++){
		c[i]=s[i]-'0';
	}
	int res=0;
	int newNum=0;
	for(int i=0;i<len;i++){
		newNum=res*10+c[i];
		res=newNum%k;
	}
	return res;
}

int main(){
	char C[35]={0};
	bool flag=false;
	cin>>C;
	for(int k=2;k<=9;k++){
		if(numMod(C,k)==0){
			flag=true;
			cout<<k<<" ";
		}
	}
	if(!flag){
		cout<<"none";
	}
	return 0;
}
