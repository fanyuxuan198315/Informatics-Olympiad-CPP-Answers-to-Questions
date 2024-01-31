#include <iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	if((num%3==0)&&(num%5==0)&&(num%7==0)) cout<<3<<" "<<5<<" "<<7;
	else if((num%3==0)&&(num%5==0)) cout<<3<<" "<<5;
	else if((num%3==0)&&(num%7==0)) cout<<3<<" "<<7;
	else if((num%5==0)&&(num%7==0)) cout<<5<<" "<<7;
	else if(num%3==0) cout<<3;
	else if(num%5==0) cout<<5;
	else if(num%7==0) cout<<7;
	else cout<<"n";
	return 0;
}
