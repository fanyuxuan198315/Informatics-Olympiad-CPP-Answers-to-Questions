#include <iostream>
#include <cstring>
using namespace std;

int ans[1000005];//存放答案 ans[n]=x => 第n项的值是x 

int pell(int n){//递归求解 
	if(ans[n]!=-1) return ans[n];//如果计算过，直接返回之前的结果 
	if(n==1) return ans[n]=1;//第一项 a1=1 
	if(n==2) return ans[n]=2;//第二项 a2=2 
	//其他an=2*an-1 + an-2 
	return ans[n]=(2*pell(n-1)%32767+pell(n-2))%32767;
}


int main(){
	//初始化，用-1表示未计算时的状态 
	memset(ans,-1,sizeof(ans));
	int n,x;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		cout<<pell(x)<<endl;
	}
	return 0;
}
