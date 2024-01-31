#include <iostream>
#include <cstdio>
using namespace std;

double max(double a,double b,double c)
{// 返回a,b,c中的最大值 
 
	if(a < c) a=c;
	if(a < b) a=b;
	
	return a;
}

int  main() {
	
	double a,b,c;
	
	cin>>a>>b>>c;
	
	
	double m=max(a,b,c)/(max(a+b,b,c)*max(a,b,b+c));
	
	printf("%.3f",m);

	return 0;
}
