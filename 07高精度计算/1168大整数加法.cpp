#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
/*
1. 输入、存储 大整数  

2. 计算 模拟竖式计算
低位对齐  倒序处理  转换 
*/
int main(){
	char s1[205]={0},s2[205]={0};
	int n1[205]={0},n2[205]={0}; 
	cin>>s1>>s2;
	 
	//倒序 
	int l1=strlen(s1);
	int l2=strlen(s2);
	
	for(int i=0;i<l1;i++){
		n1[i]=s1[l1-i-1]-'0';
	}
	for(int i=0;i<l2;i++){
		n2[i]=s2[l2-i-1]-'0';
	}
	
	int len=max(l1,l2);
	for(int i=0;i<len;i++){
		
		n1[i]=n1[i]+n2[i];
		n1[i+1]=n1[i+1]+n1[i]/10;//处理进位的值 
		n1[i]=n1[i]%10;
	}
	//输出
	int flag=0;
	for(int i=len;i>=0;i--){
		if(n1[i]!=0||i==0) flag=1;
		if(flag==1)
			cout<<n1[i];
	}
	return 0;
}
