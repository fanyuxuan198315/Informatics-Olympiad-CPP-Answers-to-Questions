#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int  diag,dead;
	cin>>diag>>dead;
	printf("%.3f%%",100.0*dead/diag);
	return 0;
}
