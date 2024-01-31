#include <iostream>
#include <cstdio>
using namespace std;
int n;
char a,b,c;
void hano(int num,char s,char e,char t){
	if(num==1){
		printf("%c->%d->%c\n",s,num,e);
		return ;
	}
	hano(num-1,s,t,e);
	printf("%c->%d->%c\n",s,num,e);
	hano(num-1,t,e,s);
}

int main(){
	cin>>n>>a>>b>>c;
	hano(n,a,b,c);
	return 0;
}
