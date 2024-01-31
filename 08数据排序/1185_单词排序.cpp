#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
bool cmp(char a[],char b[]){
	if(strcmp(a,b)<0) return true;
	return false;
}
int main(){
	char words[105][55]={0};
	int cnt=0;
	while(cin>>words[++cnt]);
	
	
	for(int i=1;i<cnt;i++){
		for(int j=1;j<=cnt-i-1;j++){
			if(!cmp(words[j],words[j+1])){
				swap(words[j],words[j+1]);
			}
		}
	}
	
	for(int i=1;i<=cnt;i++){
		if(strcmp(words[i],words[i-1])!=0)
			cout<<words[i]<<endl;
	}
	
	
	return 0;
}
