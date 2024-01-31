#include <iostream>

using namespace std;
//1399£º¼×Á÷²¡ÈË³õÉ¸
typedef struct node{
	char name[10]={0};
	float temp;
	int is;
}node;
node peo[105];

int  screen(node a[],float limit,int n){
	int cnt=0;
	for(int i=1;i<=n;i++){
		if(a[i].temp>=limit&&a[i].is){
			cout<<a[i].name<<endl;
			cnt++; 
		}
	}
	return cnt;
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>peo[i].name>>peo[i].temp>>peo[i].is;
	}
	cout<<screen(peo,37.5,n);
	return 0;
}
