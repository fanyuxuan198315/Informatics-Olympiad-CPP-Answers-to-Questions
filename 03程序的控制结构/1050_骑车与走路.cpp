#include <iostream>
using namespace std;
int main()
{
	int dis;
	double walkTime=0,bikeTime=50;
	cin>>dis;
	bikeTime+=(dis/3.0);
	walkTime+=(dis/1.2);
	if(bikeTime<walkTime) cout<<"Bike";
	else if(bikeTime>walkTime) cout<<"Walk";
	else cout<<"All";
	return 0;
}
