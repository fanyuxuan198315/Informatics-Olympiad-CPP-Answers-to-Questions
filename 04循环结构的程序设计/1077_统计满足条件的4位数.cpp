#include <iostream>

using namespace std; 
//19/26

int main(int argc, char** argv) {
	int n,x,cnt=0;
	int g,s,b,q;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>x;
		g=x%10;
		s=x/10%10;
		b=x/100%10;
		q=x/1000%10;
		if(g-q-b-s>0)
		{
			cnt++;
		}
		
	}
	cout<<cnt;
	
	return 0;
}
