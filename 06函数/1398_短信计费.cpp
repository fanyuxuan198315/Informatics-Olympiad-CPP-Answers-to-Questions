#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
//1398_¶ÌÐÅ¼Æ·Ñ
double infoValue(int x) {
	return 0.1*ceil(x/70.0);
}

int main() {
	int n;
	double sum=0;
	cin>>n;
	for(int i=1; i<=n; i++) {
		int x;
		cin>>x;
		sum+=infoValue(x);
	}
	printf("%.1lf",sum);
	return 0;
}

