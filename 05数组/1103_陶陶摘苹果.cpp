#include <iostream>
using namespace std;
int main()
{
	int apple[15]={0};
	int h,cnt=0;
	for(int i=1;i<=10;i++){
		cin>>apple[i];
	}
	cin>>h;
	for(int i=1;i<=10;i++){
		if(h+30>=apple[i]){
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}
