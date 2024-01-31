#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char a[25][25];
bool vis[25][25];
int r,s;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
bool cnt[30];
int ans=0;
void dfs(int x,int y,int num){
	if(num>ans){
		ans=num;
	}
	
	for(int i=0;i<4;i++){
		int nx=x+dx[i],ny=y+dy[i];
		char c=a[nx][ny];
		if(nx<1||nx>r||ny<1||ny>s) continue;
		if(!vis[nx][ny]&&!cnt[c-'A']){
			vis[nx][ny]=true;
			cnt[c-'A']=true;
			dfs(nx,ny,num+1);
			vis[nx][ny]=false;
			cnt[c-'A']=false;
		}
	}
}
int main(){
	int k=0;
	cin>>r>>s;
	for(int i=1;i<=r;i++){
		for(int j=1;j<=s;j++){
			cin>>a[i][j];
		}
	}
	
	vis[1][1]=true;
	cnt[a[1][1]-'A']=true;
	dfs(1,1,1);
	
	cout<<ans;
	return 0;
}
