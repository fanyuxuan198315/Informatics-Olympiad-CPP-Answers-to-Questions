#include <iostream>
#include <cstdio>
using namespace std;
/*

*/
int main()
{
	int a[105][105]={0},b[105][105]={0};
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>b[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			a[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
