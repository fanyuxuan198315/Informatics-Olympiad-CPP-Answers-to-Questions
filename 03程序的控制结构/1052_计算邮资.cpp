#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int weight,money=0;
	char flag;
	cin>>weight>>flag;
	if(weight<=1000)  money=8;
	else{
		money+=(ceil((weight-1000.0)/500)*4);
		money+=8; 
	}
	if(flag=='y') money+=5;
	cout<<money;
	return 0;
}
