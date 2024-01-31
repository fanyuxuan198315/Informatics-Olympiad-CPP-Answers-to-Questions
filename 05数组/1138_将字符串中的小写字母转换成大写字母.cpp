#include <iostream>
#include <cstring>
#include <cctype>
#include <cstdio>

using namespace std;

int main()
{
	char s[105]={0};
	fgets(s,105,stdin);
	for(int i=0;s[i]!=0;i++){
		if(islower(s[i])){
			s[i]-=32;
		}
	}
	cout<<s;
	return 0;
}

