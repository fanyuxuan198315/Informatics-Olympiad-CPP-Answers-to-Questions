#include <iostream>
using namespace std;
int main()
{
	int date;
	cin>>date;
	
	switch(date)
	{
		case 1:
		case 3:
		case 5:cout<<"NO";break;
		default:cout<<"YES";
	}

	return 0;
}
