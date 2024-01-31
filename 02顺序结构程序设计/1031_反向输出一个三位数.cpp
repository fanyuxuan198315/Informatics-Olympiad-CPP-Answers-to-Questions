#include <iostream>
using namespace std;
int main()
{
	int intVal;
	cin>>intVal;
	while(intVal!=0)
	{
		cout<<intVal%10;
		intVal/=10;
	}
	return 0;
}
