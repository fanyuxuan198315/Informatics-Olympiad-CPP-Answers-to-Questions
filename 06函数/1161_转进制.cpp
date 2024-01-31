#include <iostream>

using namespace std;
/*
31   M   

10  2

10 /2 = 5 ... 0
5 / 2 = 2 ... 1
2 /2  = 1 ... 0
1 / 2 = 0 ... 1 
1010

31 / 16 = 1 ... 15
1  / 16 = 0 ... 1
1F 
*/

int xToM(int x,int m,char s[],int cnt){
	if(x==0) return cnt;
	
	if(x%m<10) s[cnt]=x%m+'0';
	else s[cnt]=x%m-10+'A';
	return xToM(x/m,m,s,cnt+1);
}


int main(){
	char s[35]={0};
	int x,m;
	cin>>x>>m;
	int len=xToM(x,m,s,0);
	for(int i=len-1;i>=0;i--){
		cout<<s[i];
	}
	return 0;
}
