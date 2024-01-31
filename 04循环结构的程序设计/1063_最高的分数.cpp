#include <iostream>
using namespace std;
int main()
{
	int n,maxs=-1,score;
	cin>>n;
	for(int i=n;i--;)
	{
		cin>>score;
		if(score>maxs)
		{
			maxs=score;
		}
	}
	cout<<maxs;
	return 0;
}
