#include <iostream>
#include <cstdio> 
using namespace std;
int main()
{
	double price[]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
	double sum=0;
	int num;
	for(int i=0;i<10;i++){
		cin>>num;
		sum+=(num*price[i]);
	}
	printf("%.1f",sum);
	return 0;
}
