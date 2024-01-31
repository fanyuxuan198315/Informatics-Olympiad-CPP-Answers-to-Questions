#include <iostream>
using namespace std;
int ans[100005]={1,1};//存放阶乘 ans[0]是位数 倒序存放数字 
int jw[100005];//进位的值 
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){//遍历1~n
		//求出i的阶乘
		// i!= (i-1)! * i 
		for(int j=1;j<=ans[0];j++){
			//ans[0]中存放阶乘的位数   
			ans[j]=ans[j]*i+jw[j];//将i与每一位进行相乘 
			jw[j]=0;//重置进位值 
			
			if(ans[j]>=10){//超过10要进位 
				jw[j+1]+=ans[j]/10;//记录进位值 
				ans[j]%=10;//保留个位 
				
				if(j==ans[0]) ans[0]++;//如果到了位数又发生进位，那么位数要发生变化 
			}
		}
	}
	
	for(int i=ans[0];i>=1;i--){//从高位开始倒序输出结果 
		cout<<ans[i];
	}
	return 0;
}
