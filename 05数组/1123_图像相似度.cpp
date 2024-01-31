#include <iostream>
#include <cstdio>
using namespace std;
/*

*/
int main()
{
	int m,n,same=0;
	int pic1[105][105]={0};
	int pic2[105][105]={0};
	cin>>m>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>pic1[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>pic2[i][j];
		}
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(pic1[i][j]==pic2[i][j]){
				same++;
			}
		}
	}
	printf("%.2f",100.0*same/(m*n));
	 
	return 0;
}
