#include <iostream>
#include <cstdio>


using namespace std;


int main()
{
	double basic;
	char s1[505]={0},s2[505]={0};
	cin>>basic;
	cin>>s1>>s2;
	int cnt=0;//相同数量 
	int sum=0;
	for(int i=0;s1[i]!=0;i++){
		if(s1[i]==s2[i]){
			cnt++;
		}
		sum++;
	}
	if((1.0*cnt/sum)>=basic){
		cout<<"yes";
	}else{
		cout<<"no";
	}
	
	return 0;
}
