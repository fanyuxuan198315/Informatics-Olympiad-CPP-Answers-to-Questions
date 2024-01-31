#include <iostream>
#include <cstdio>
using namespace std;
/*

*/
int main()
{
	int n,m,k;
	int a[105][105]={0},b[105][105]={0},c[105][105]={0};
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++){
			cin>>b[i][j];
		}
	}
	//c[i][j]=A[i][0]*B[0][j] + A[i][1]*B[1][j] + бнбн +A[i][m-1]*B[m-1][j]
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			for(int l=0;l<m;l++){
				c[i][j]+=(a[i][l]*b[l][j]);
			} 
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}	 
	return 0;
}
