#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char word[1005]={0};
	int f=0;
	while(cin>>word){
		if(f) cout<<",";
		f=1;
		cout<<strlen(word);
	}	
	return 0;
}
