#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;


int main()
{
	char s[105]={0},s1[105]={0};
	gets(s);
	int len=strlen(s);
	for(int i=0;i<len;i++){
		s1[i]=s[i]+s[(i+1)%len];
	}
	cout<<s1;
	return 0;
}
