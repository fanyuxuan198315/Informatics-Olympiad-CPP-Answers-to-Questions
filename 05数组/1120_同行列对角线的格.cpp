#include <iostream>
#include <cstdio>
using namespace std;
/*
x x x x
x x x x
x x x x
x x x x
2,1 3,2 4,3
*/
int main()
{
	int n,i,j;
	cin>>n>>i>>j;
	for(int y=1;y<=n;y++){
		printf("(%d,%d) ",i,y);
	}
	cout<<endl;
	for(int x=1;x<=n;x++){
		printf("(%d,%d) ",x,j);
	}
	cout<<endl;
	for(int x=1;x<=n;x++){
		int d=i-j;
		int y=x-d;
		if(y>=1&&y<=n){
			printf("(%d,%d) ",x,y);
		}
	}
	cout<<endl;
	for(int x=n;x>=1;x--){
		int s=i+j;
		int y=s-x;
		if(y>=1&&y<=n){
			printf("(%d,%d) ",x,y);
		}
	}
	 
	return 0;
}
