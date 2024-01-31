#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node{
	int ch,ma,en;
	int id,sum;
}node;

node st[305];


bool cmp(node a,node b){
	if(a.sum > b.sum) return true;
	if(a.sum==b.sum && a.ch > b.ch) return true;
	if(a.sum == b.sum && a.ch == b.ch && a.id<b.id) return true;
	return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		st[i].id=i;
		cin>>st[i].ch>>st[i].ma>>st[i].en;
		st[i].sum=st[i].ch+st[i].ma+st[i].en;
	}
	
	sort(st+1,st+n+1,cmp);
	
	for(int i=1;i<=5;i++){
		cout<<st[i].id<<" "<<st[i].sum<<endl;
	}
	
	return 0;
}
