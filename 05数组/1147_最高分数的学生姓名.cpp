#include <iostream>
#include <cstring>
using namespace std; 

int main(int argc, char** argv) {
	int n;
	char name[25]={0},nameMax[25]={0};
	int maxs=-1,score;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>score>>name;
		if(score>maxs){
			maxs=score;
			strcpy(nameMax,name);
		}
	}
	cout<<nameMax;
	
	return 0;
}
