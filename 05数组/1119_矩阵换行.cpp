#include <iostream>
using namespace std;

int main()
{
	int num[6][6]={0},m,n;
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>num[i][j];
		}
	}
	cin>>m>>n;
	// num[m][1~5] num[n][1~5]
	for(int j=1;j<=5;j++){
		int t=num[m][j];
		num[m][j]=num[n][j];
		num[n][j]=t;
	}
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
