#include <iostream>
#include <cmath>
#include <cstdio> 

using namespace std; 
/*

*/
const double p=1e-12;// AeB  

int main(int argc, char** argv) {
	double a,b,c;
	cin>>a>>b>>c;
	double del = b*b-4*a*c;
	
	if(fabs(del)<p)
	{
		printf("x1=x2=%.5f",(-b)/(2*a));
	}else if(del > 0)
	{
		double x1=(-b-sqrt(del))/(2*a);
		double x2=(-b+sqrt(del))/(2*a);
		
		if(x1>x2)
		{
			double t=x1;
			x1=x2;
			x2=t;
		}
		
		printf("x1=%.5f;x2=%.5f",x1,x2);
	}else
	{
		printf("No answer!");
	}
	
	return 0;
}
