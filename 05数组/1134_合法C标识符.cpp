#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char s[25]={0};
	bool flag=true;
	cin>>s;
	
	if(s[0]>='0'&&s[0]<='9'){
		flag=false;
	}
	
	for(int i=0;s[i]!=0;i++){
		if(!isalnum(s[i])&&s[i]!='_'){
			flag=false;
		}
	}
	
	if(flag){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	return 0;
}

