#include <iostream>

using namespace std; 

int main(int argc, char** argv) {
	char s[1005]={0};
	char e;
	int cnt=0;
	cin>>s;
	e=s[0];
	for(int i=0;s[i]!=0;i++){
		if(s[i]!=e){
			cout<<cnt<<e;
			e=s[i];
			cnt=1;
		}else{
			cnt++;
		}
		if(s[i+1]=='\0'){
			cout<<cnt<<e;
		}
	
	}
	return 0;
}
