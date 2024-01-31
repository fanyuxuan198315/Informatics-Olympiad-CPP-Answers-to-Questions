#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char charVal;
	int intVal;
	float fltVal;
	double dblVal;
	
	cin>>charVal>>intVal>>fltVal>>dblVal;
	printf("%c %d %.6f %.6f",charVal,intVal,fltVal,dblVal);
	return 0;s
}
