#include <iostream>
#include <cstdio>
#include <cmath>//sqrt()
using namespace std;

//pow(x,y)  x^y 
double arctanx(double x)
{
	//cout<<"x:"<<x<<endl;
	double sum=0,tmp=x;
	int k=0;
	for(int i=1;;i+=2)
	{
		sum+=(tmp/i);
		tmp=-1*x*x*tmp;
		
		if(fabs(tmp/i) < 1e-6)
		{
			break;
		} 
		
	}
//	cout<<endl;
	
	return sum;
}

int  main() {
	
	
	printf("%.10lf",6*arctanx(1/sqrt(3)));
	return 0;
}
