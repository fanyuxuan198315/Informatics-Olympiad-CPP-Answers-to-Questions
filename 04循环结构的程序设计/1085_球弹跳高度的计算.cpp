#include <iostream>
using namespace std;
int main()
{
	double h;
	double s=0;
	cin>>h;
	for(int i=1;i<=10;i++){
		s+=(h+h/2);
		h=h/2;
	}
	s-=h;
	cout<<s<<"\n"<<h;
	 
	return 0;
}
