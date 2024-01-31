#include <iostream>
#include <cstdio>

using namespace std;



int main()
{
	char str[260]={0};
	gets(str);
	int cnt=0;
	for(int i=0;str[i]!=0;i++){
		if(str[i]>='0'&&str[i]<='9'){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
