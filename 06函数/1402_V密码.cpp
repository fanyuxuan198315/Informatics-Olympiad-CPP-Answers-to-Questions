#include <iostream>
#include <cstring>
using namespace std;
/*

M[i]   后  key 

明文 ->  密文
 
ans=(m-'a'+(c-'a'))%26+'a';

ans=(m-'a'-(c-'a') + 26)%26+'a';
*/
int main(){
	char k[105]={0},c[1005]={0};
	cin>>k>>c;
	int len=strlen(k);
	for(int i=0;k[i]!=0;i++){
		k[i]=tolower(k[i]);
	}
	char ans;
	for(int i=0;c[i]!=0;i++){
		
		if(c[i]>='a'&&c[i]<='z'){
			ans=(c[i]-'a'-(k[i%len]-'a')+26)%26+'a';
		}else{
			ans=(c[i]-'A'-(k[i%len]-'a')+26)%26+'A';
		}
		cout<<ans;
		
	}
	return 0;
}
