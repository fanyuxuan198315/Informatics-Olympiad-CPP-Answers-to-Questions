#include <iostream>
using namespace std;
int main()
{
	int ch,math;
	cin>>ch>>math;
	if((ch<60&&math>=60)||(ch>=60&&math<60))
	{
		cout<<1;
	}else
	{
		cout<<0;
	}
	return 0;
}
