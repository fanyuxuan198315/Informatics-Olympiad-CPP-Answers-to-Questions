#include <iostream>
#include <cstdio>
using namespace std;
/*

*/
int main()
{
	int num[6][6]={0};
	int maxs,mins,x,y,flag=0;
	
	for(int i=1;i<=5;i++){
		for(int j=1;j<=5;j++){
			cin>>num[i][j];
		}
	}
	
	for(int i=1;i<=5;i++){
		maxs=num[i][1],y=1;
		for(int j=1;j<=5;j++){
			if(num[i][j]>maxs){
				maxs=num[i][j];
				y=j;
			}
		}
		mins=num[1][y],x=1;
		for(int k=1;k<=5;k++){
			if(num[k][y]<mins){
				mins=num[k][y];
				x=k;
			}
		}
		if(x==i){
			flag=1;
			break;
		}
	}
	if(flag){
		cout<<x<<" "<<y<<" "<<num[x][y]; 
	}else{
		cout<<"not found";
	}
	
	return 0;
}
