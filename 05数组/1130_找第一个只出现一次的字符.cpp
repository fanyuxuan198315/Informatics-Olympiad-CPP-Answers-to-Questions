#include <iostream>
#include <cstdio>

using namespace std;
char s[100005]={0};

int main()
{
	int nums[30]={0};//'a'~'z' 出现的次数
	//nums[1] = 2 
	cin>>s;
	for(int i=0;s[i]!=0;i++){
		int x=s[i]-'a';
		nums[x]++;//统计个数 
	}
	char one=0;
	for(int i=0;s[i]!=0;i++){
		if(nums[s[i]-'a']==1){
			one=s[i];
			break;
		}
	}
	
	if(one!=0){
		cout<<one;
	}else{
		cout<<"no";
	}
	return 0;
}
