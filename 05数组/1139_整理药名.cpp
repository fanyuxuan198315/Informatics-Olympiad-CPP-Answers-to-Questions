#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	char name[25]={0};
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>name;
		//toupper(x)
		name[0]=toupper(name[0]);
		for(int i=1;name[i]!=0;i++){
			if(name[i]!='-')
			name[i]=tolower(name[i]);
		}
		cout<<name<<endl;
	}
	
	
	return 0;
}

