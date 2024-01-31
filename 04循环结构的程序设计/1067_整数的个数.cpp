#include <iostream>
using namespace std;
int main()
{
	int k,x;
	int one=0,five=0,ten=0;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		cin>>x;
		if(x==1) one++;
		else if(x==5) five++;
		else if(x==10) ten++;
	}
	cout<<one<<endl<<five<<endl<<ten;
	return 0;
}
