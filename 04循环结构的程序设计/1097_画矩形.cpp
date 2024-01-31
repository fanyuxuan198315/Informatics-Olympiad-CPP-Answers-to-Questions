#include <iostream>
using namespace std;

int main()
{
	int x,y,z;
	char c;
	cin>>x>>y>>c>>z;

	for(int i=1;i<=x;i++){
		for(int j=1;j<=y;j++){
			if(z==1||i==1||i==x||j==1||j==y){
				cout<<c;	
			}else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}


	
	return 0;
}
