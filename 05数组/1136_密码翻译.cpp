#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main()
{
	char str[85]={0};
	gets(str);
	for(int i=0;str[i]!=0;i++){
		if(isupper(str[i])){
			str[i]=((str[i]-'A')+1)%26+'A';
		}else if(islower(str[i])){
			str[i]=((str[i]-'a')+1)%26+'a';
		}
	}
	cout<<str;
	return 0;
}

