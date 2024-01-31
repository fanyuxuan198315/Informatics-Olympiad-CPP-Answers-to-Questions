#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,a,y,b;
	double z;
	cin>>x>>a>>y>>b; 
	
	/*
	设地球现有资源now,每年新增up,每年消耗down
	若可持续发展 
	year*up = z*year*down
	z = up/down 
		
	now + a*up = a*x*down
	now + b*up = b*y*down
	
	两式相减
	
	a*up-b*up = a*x*down-b*y*down
	up(a-b) = down(ax - by)
	up/down = (ax - by)/(a-b) 
	
	*/
	z=(1.0*a*x-b*y)/(1.0*a-b);
	printf("%.2f",z);
	
	return 0;
}
