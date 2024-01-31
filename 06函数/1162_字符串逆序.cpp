#include <iostream> 
#include <cstring>
#include <cstdio>
using namespace std;


int main(){
	char str[1005]={0};
	gets(str);
	int len=strlen(str);
	for(int i=len-2;i>=0;i--){
		cout<<str[i];
	}
	return 0;
}

