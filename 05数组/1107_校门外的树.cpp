#include <iostream>
using namespace std;
int main()
{
	int tree[10005]={0};//tree[x] 0-x这个点上的树存在 1-不存在 
	int l,m;
	int st,ed,cnt=0;
	cin>>l>>m;
	for(int i=1;i<=m;i++){
		cin>>st>>ed;
		for(int j=st;j<=ed;j++){
			tree[j]=1;
		} 
	}
	for(int i=0;i<=l;i++){
		if(tree[i]==0){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
