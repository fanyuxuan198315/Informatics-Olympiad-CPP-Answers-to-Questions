#include <iostream>
#include <queue> 
using namespace std;
//1401：机器翻译 
int m,n; 
int word;
bool vis[1005]={0};
int main(){
	queue <int> mem;
	int m,n,cnt=0;
	int h,t;
	h=t=1;
	cin>>m>>n;
	for(int i=1;i<=n;i++){
		cin>>word;
		if(!vis[word]){//查询单词
			//不存在
			cnt++;//外部查询 
			//存入内存
			//判断空间使用情况
			if(mem.size()>=m){
				//内存已满
				//腾出空间
				vis[mem.front()]=false;
				mem.pop();
			} 
			mem.push(word);//加入内存 
			vis[word]=true;//做标记，表示在内存中
		}
	}
	cout<<cnt;
	return 0;
}
