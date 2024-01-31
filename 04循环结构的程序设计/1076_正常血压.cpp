#include <iostream>

using namespace std; 
//18/26

int main(int argc, char** argv) {
	int n,ss,sz,maxs=0;
	int health=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>ss>>sz;
		if((ss>=90&&ss<=140)&&(sz>=60&&sz<=90))
		{
			health++;
		}else
		{
			if(maxs<health)
			{
				maxs=health;
			}
			
			health=0;
		}
	}
	if(maxs<health)
	{
		maxs=health;
	}
	cout<<maxs;
	
	return 0;
}
