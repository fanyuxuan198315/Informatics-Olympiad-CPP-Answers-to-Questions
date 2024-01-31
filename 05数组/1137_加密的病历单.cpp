#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
/*
1.大小写反转
2.逆序处理（倒着输出）
3.右移三个位置 
*/
int main()
{
	char s[55]={0},s2[55]={0};
	cin>>s;
	int len=strlen(s);
	for(int i=0;i<len;i++){
		if(isupper(s[i])){
			s[i]=tolower(s[i]);//转成小写
			s[i]=(s[i]-'a'+3)%26+'a';//右移3位 
		}else{
			s[i]=toupper(s[i]);//转成大写
			s[i]=(s[i]-'A'+3)%26+'A'; 
		}
	}
	for(int i=0;i<len;i++){
		s2[i]=s[len-i-1];
	}
	cout<<s2;
	
	return 0;
}

