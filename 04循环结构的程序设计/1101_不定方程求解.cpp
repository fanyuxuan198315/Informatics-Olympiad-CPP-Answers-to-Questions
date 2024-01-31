#include <iostream>
using namespace std;
// c== a*x + b*y
//  y=(c-ax)/b
int main()
{
	int a,b,c,cnt=0;
	cin>>a>>b>>c;
	
	for(int x=0;x<=c;x++){
		int t=c-a*x;
		if(t>=0 && t%b==0){
			cnt++;
		}
	}
	cout<<cnt;
		 
	return 0;
}
