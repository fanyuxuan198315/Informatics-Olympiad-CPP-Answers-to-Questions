#include <iostream>
#include <cstdio>
#include <cmath>//round(x) 
using namespace std;

int pic1[105][105]={0};
int pic2[105][105]={0};

int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>pic1[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(i==1||i==n||j==1||j==m) 
				pic2[i][j]=pic1[i][j];
			else
				pic2[i][j]=round((pic1[i][j]+pic1[i-1][j]+pic1[i+1][j]+pic1[i][j-1]+pic1[i][j+1])/5.0);
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cout<<pic2[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
