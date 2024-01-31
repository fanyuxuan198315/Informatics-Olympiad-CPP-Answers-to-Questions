#include <iostream>
#include <cstdio>
using namespace std;
const int MAX=55;
int m,n;//南北长度，东西长度 
int a[MAX][MAX];

bool vis[MAX][MAX];
//南东北西下右上左 
//        上下左右 
int dx[]={1,0,-1,0};
int dy[]={0,1,0,-1};
int s=0; 

void dfs(int x,int y){
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		if(nx>=1&&nx<=m&&ny>=1&&ny<=n&&((a[x][y]>>(3-i)&1)==0)&&!vis[nx][ny]){
			vis[nx][ny]=true;
			s++;
			dfs(nx,ny);
		}
	}
}
int main(){
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>a[i][j];
		}
	}
	int cnt=0,maxs=-1;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(!vis[i][j]){
				cnt++;
				vis[i][j]=true;
				s=1;
				dfs(i,j);
				if(s>maxs){
					maxs=s;
				}
			}
		}
	}
	cout<<cnt<<endl<<maxs;
	return 0;
}
