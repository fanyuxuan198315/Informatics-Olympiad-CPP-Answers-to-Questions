#include <iostream>
#include <algorithm>
using namespace std;

typedef struct node{
	int id;
	int s;
}node;

node stu[5005];
int n,m;

bool cmp(node a,node b){
	if(a.s>b.s) return true;
	else if(a.s==b.s && a.id<b.id) return true;
	return false;
}

int main(){
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>stu[i].id>>stu[i].s;
	}
	
	sort(stu+1,stu+n+1,cmp);
	
	int sc=stu[int(m*1.5)].s;
	int sum=0;
	
	
	for(int i=1;i<=n;i++){
		if(stu[i].s>=sc){
			sum++;
		}else{
			break;
		}
	}
	cout<<sc<<" "<<sum<<endl;
	
	for(int i=1;i<=sum;i++){
		cout<<stu[i].id<<" "<<stu[i].s<<endl; 
	}
	
	return 0;
}
