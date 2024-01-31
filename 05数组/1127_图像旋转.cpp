#include <iostream>
#include <cstdio>
using namespace std;
/*
3*2 
1 2
3 4
5 6 

5 3 1
6 4 2

i,j j,3+1-i
1,1	1,3
2,2 2,2
3,1 1,1
2,1 1,2

2*3
1 2 3
4 5 6

4 1
5 2
6 3
i,j j,2+1-i
1,1	1,2
2,2 2,1
2,3 3,1

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
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			b[j][n+1-i]=a[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
