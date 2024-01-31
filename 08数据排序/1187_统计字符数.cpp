#include <iostream>

using namespace std;

int main(){
	int ele[30]={0};
	char str[1005]={0};
	cin>>str;
	for(int i=0;str[i]!=0;i++){
		ele[str[i]-'a']++;
	}
	int maxs=0;
	for(int i=0;i<26;i++){
		if(ele[i]>ele[maxs]) maxs=i;
	}
	cout<<char(maxs+'a')<<" "<<ele[maxs];
	return 0;
}
