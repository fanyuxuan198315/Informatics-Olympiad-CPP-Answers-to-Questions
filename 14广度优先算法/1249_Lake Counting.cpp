#include <iostream>
#include <queue>
using namespace std;
int n,m;
char a[115][115];
bool vis[115][115];
struct node{
	int x,y;
};
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};
void bfs(int x,int y){
	queue <node> q;
	vis[x][y]=true;
	q.push(node{x,y});
	while(!q.empty()){
		node cur=q.front();
		q.pop();
		for(int i=0;i<8;i++){
			int nx=cur.x+dx[i],ny=cur.y+dy[i];
			if(nx<1||nx>n||ny<1||ny>m) continue;
			if(!vis[nx][ny]&&a[nx][ny]=='W'){
				vis[nx][ny]=true;
				q.push(node{nx,ny});
			}
		}
	}
}
int main(){
	int ans=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(a[i][j]=='W'&&!vis[i][j]){
				ans++;
				bfs(i,j);
			}
		}
	}
	cout<<ans;
	return 0;
}
