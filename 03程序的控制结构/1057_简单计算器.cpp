#include <iostream>
using namespace std;
int main()
{
	int x,y;
	char c;
	cin>>x>>y>>c;
	if(y==0) cout<<"Divided by zero!";
	else
	{
		if(c=='+') cout<<x+y;
		else if(c=='-') cout<<x-y;
		else if(c=='*') cout<<x*y;
		else if(c=='/') cout<<x/y;
		else cout<<"Invalid operator!";
	}
	
	return 0;
}
