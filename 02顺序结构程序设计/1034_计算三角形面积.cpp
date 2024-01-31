#include <iostream>
#include <cmath>//fabs(x)求x的绝对值 
#include <cstdio>
using namespace std;
/*
s=|0.5*(x1y2+x2y3+x3y1-x1y3-x2y1-x3y2)| 

*/
int main()
{
	float x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	
	printf("%.2f",fabs(0.5*(x1*y2+x2*y3+x3*y1-x2*y1-x3*y2-x1*y3)));
	
	return 0;
}
