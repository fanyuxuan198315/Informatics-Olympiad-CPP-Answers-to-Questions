#include <iostream>
#include <cstdio>
#include <cstring>


using namespace std;


int main()
{
	int n;
	char s1[100]={0},s2[100]={0};
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>s1>>s2;
		if(strcmp(s1,s2)==0){
			cout<<"Tie\n";
		}else if((strcmp(s1,"Rock")==0&&strcmp(s2,"Scissors")==0) ||
				(strcmp(s1,"Scissors")==0&&strcmp(s2,"Paper")==0)||
				strcmp(s1,"Paper")==0&&strcmp(s2,"Rock")==0
			){
				cout<<"Player1\n";
		}else{
			cout<<"Player2\n";
		}
		
	} 
	return 0;
}
