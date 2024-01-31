#include <iostream>
#include <cstdio>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

double f(double x,double n){
	if(n==1) return x/(1+x);
	return x/(n+f(x,n-1));
}
int main(int argc, char** argv) {
	double x,n;
	cin>>x>>n;
	printf("%.2f",f(x,n));
	return 0;
}
