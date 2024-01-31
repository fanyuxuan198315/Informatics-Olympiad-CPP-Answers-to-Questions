#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s[40]={0};
	cin>>s;
	int l=strlen(s);
	if(strcmp(&s[l-2],"er")==0||strcmp(&s[l-2],"ly")==0){
		s[l-2]='\0';
	}else if(strcmp(&s[l-3],"ing")==0){
		s[l-3]='\0';
	}
	
	cout<<s;
	
	return 0;
}
