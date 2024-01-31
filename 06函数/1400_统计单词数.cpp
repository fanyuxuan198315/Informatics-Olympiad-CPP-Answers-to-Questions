#include <iostream>
#include <cstring>
#include <climits>
#include <cmath>
#include <cstdio>
using namespace std;

char key[205]={0};
char str[1000005]={0};
char word[205]={0};

int main(){
	gets(key);
	gets(str);
	int len=strlen(str);
	int h=0,index=-1,cnt=0;
	for(int i=0;i<=len;i++){
		if(str[i]==' '||str[i]=='\0'){
			str[i]='\0';
			strcpy(word,&str[h]);
			if(strcasecmp(word,key)==0){
				if(cnt==0) index=h;
				cnt++;
			}
			h=i+1;
		}
	}
	if(cnt==0) cout<<-1;
	else cout<<cnt<<" "<<index;
    return 0;
}
