#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdio>
using namespace std;
typedef struct node{
	int sex;
	double hei;
}node;

node stu[45];

bool cmp(node a,node b){
	if(a.hei<b.hei) return true;
	else return false;
}

int main(){
	int n;
	char sex[10]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>sex;
		if(strcmp(sex,"male")==0){
			stu[i].sex=1;
		}else{
			stu[i].sex=0;
		}
		cin>>stu[i].hei;
	}
	
	sort(stu+1,stu+n+1,cmp);
	
	for(int i=1;i<=n;i++){
		if(stu[i].sex){
			printf("%.2f ",stu[i].hei);
		}
	}
	for(int i=n;i>=1;i--){
		if(!stu[i].sex){
			printf("%.2f ",stu[i].hei);
		}
	}
	return 0;
}
