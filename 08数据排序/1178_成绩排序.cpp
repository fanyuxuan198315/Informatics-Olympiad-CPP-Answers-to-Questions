#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct node{
	char name[25];
	int sc;
}node;

node stu[25];

bool cmp(node a,node b){
	if(a.sc > b.sc) return true;
	if(a.sc== b.sc && strcmp(a.name,b.name)<0){
		return true;
	}
	
	return false;
}

int main(){
	int n;
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>stu[i].name>>stu[i].sc;
	}
	
	sort(stu+1,stu+n+1,cmp);
	
	for(int i=1;i<=n;i++){
		cout<<stu[i].name<<" "<<stu[i].sc<<endl;
	}
	return 0;
}
