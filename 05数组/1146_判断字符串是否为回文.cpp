#include <iostream>
#include <cstring>
using namespace std; 

int main(int argc, char** argv) {
	char str[105]={0};
	bool flag=true;
	cin>>str;
	int len=strlen(str);
	/*
	0 len-1
	1 len-2
	2 len-3
	i len-i-1
	
	*/
	for(int i=0;i<=len/2;i++){
		if(str[i]!=str[len-i-1]){
			flag=false;
			break;
		}
	}
	if(flag){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	
	return 0;
}
