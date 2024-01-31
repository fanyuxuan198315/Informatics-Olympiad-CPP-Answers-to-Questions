#include <iostream>
#include <cstdio> 
#include <cstring>
using namespace std; 

int main(int argc, char** argv) {
	char s[505]={0};
	gets(s);
	int len=strlen(s);
	int h=0;
	for(int i=0;i<len;i++){
		if(s[i]==' '){
		//	if(h)
	
			for(int j=i-1;j>=h;j--){
				cout<<s[j];
			}
			cout<<s[i];
			h=i+1;
		}
		if(s[i+1]=='\0'){
			//h~len-1
			for(int j=len-1;j>=h;j--){
				cout<<s[j];
			}
		}
	}
	return 0;
}
