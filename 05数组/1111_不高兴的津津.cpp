#include <iostream>
using namespace std;
int main()
{
	int course[8]={0};
	int x,y,day=0;
	int maxs=0;
	for(int i=1;i<=7;i++){
		cin>>x>>y;
		course[i]=x+y;
		if(course[i]>8 && course[i]>maxs){
			maxs=course[i];
			day=i;
		}
	}
	cout<<day;
	 
	return 0;
}
