#include <iostream>
#include <cstring>
using namespace std;

void timesTwo(char ans[]){
	int len=strlen(ans);
	int tmp[1005]={0};
	int sum[1005]={0};//存放整数结果 
	for(int i=0;i<len;i++){//倒序转换字符串 
		tmp[i]=ans[len-1-i]-'0';
	}
	for(int i=0;i<len;i++){//乘法计算 
		sum[i]+=tmp[i]*2;
		sum[i+1]+=(sum[i]/10);
		sum[i]%=10;
	}
	
	//倒序处理答案 
	bool flag=false;
	for(int i=len,j=0;i>=0;i--){
		if(sum[i]!=0||i==0){
			flag=true;
		}
		if(flag){
			ans[j++]=sum[i]+'0';
		}
	}
}

int main(){
	char ans[1005]={'1'};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		timesTwo(ans);
	}	
	cout<<ans;
	return 0;
}
