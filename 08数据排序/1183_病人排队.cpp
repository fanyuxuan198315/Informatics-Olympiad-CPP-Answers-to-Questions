#include <iostream>
#include <algorithm>
using namespace std;
typedef struct node{
	char id[15];
	int age;
	int order;
}node;
node per[105];
bool cmp(node a,node b){
	
	if(a.age>=60 && b.age<60) return true;
	
	if(a.age>=60 && b.age>=60){
		if(a.age> b.age) return true;
		if(a.age==b.age && a.order<b.order) return true;
			return false;
	}
	
	if(a.age<60 && b.age<60){
		if(a.order<b.order) return true;
		return false;
	}
	
	return false;
}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		per[i].order=i;
		cin>>per[i].id>>per[i].age;
	}
	sort(per+1,per+n+1,cmp);
	for(int i=1;i<=n;i++){
		cout<<per[i].id<<endl;
	}

	return 0;
}
