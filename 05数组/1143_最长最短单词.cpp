#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char str[40005]={0};
int main()
{
	char maxW[105]={0};
	char minW[105]={0};
	gets(str);
	int len=strlen(str);
	int l=0,minL=101,maxL=0;
	int index=0;
	for(int i=0;i<len;i++){
		if(str[i]==' '||str[i]==','||i==len-1){
			if(i!=len-1)
				str[i]='\0';
			l=strlen(str+index);
			if(l>maxL){
				maxL=l;
				strcpy(maxW,str+index);
			}
			if(l<minL&&l!=0){
				minL=l;
				strcpy(minW,str+index);
			}
			index=i+1;
		}
	}
	cout<<maxW<<"\n"<<minW;
	return 0;
}
