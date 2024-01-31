#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef struct node{
	int id;
	double sc;
}node;

node st[105];
bool cmp(node a,node b){
	return a.sc>b.sc;
}

int main(){
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>st[i].id>>st[i].sc;
	}
	sort(st+1,st+n+1,cmp);
	printf("%d %g",st[k].id,st[k].sc);
	return 0;
}
