#include <iostream>
#include <cstdio>
using namespace std;
/*

*/
int main()
{
	int num[105][105]={0};
	int m,n,s=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>num[i][j];
		}
	}
	
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(i==1||i==m||j==1||j==n){// i,j ÊÇ·ñÊôÓÚ±ßÔµ
				s+=num[i][j];	
			}
			 
		}
	}
	cout<<s;
	return 0;
}
