#include <iostream>
#include <cstdio>
using namespace std;
/*

*/
int main()
{
	int n,m;
	int a[105][105]={0},b[105][105]={0};
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			b[i][j]=a[j][i];
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
