#include <iostream>

using namespace std;
int main()
{
	int n,x,k=0;// 无重复的个数 
	int num[20005]={0};
	bool vis[5005]={0};//vis[x] true-x出现过  false-x没出现过 
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		// 判断x有没有出现过
		if(!vis[x]){
			num[k++]=x;
//			num[k]=x;
//			k++;
			vis[x]=true;
		}
		
	}
	
	for(int i=0;i<k;i++){
		cout<<num[i]<<" ";
	}
	return 0;
}
