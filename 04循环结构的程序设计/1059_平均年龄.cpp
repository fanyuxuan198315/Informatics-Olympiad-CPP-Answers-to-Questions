#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int NOP,score,sum=0;
	cin>>NOP;
	for(int i=1;i<=NOP;i++)
	{
		cin>>score;
		sum+=score;
	}
	printf("%.2f",1.0*sum/NOP);
	return 0;
}
