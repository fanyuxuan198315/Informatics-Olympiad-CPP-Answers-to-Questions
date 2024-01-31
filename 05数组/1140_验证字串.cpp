#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char s1[205]={0},s2[205]={0};
	int flag=0;
	cin>>s1>>s2;
	
	int l1=strlen(s1);
	int l2=strlen(s2);
	
	if(l1<=l2){
		for(int i=0;i<=l2-l1;i++){
			if(strncmp(s1,&s2[i],l1)==0){
				flag=1;
				cout<<s1<<" is substring of "<<s2;
				break;
			}
		}
	}else{
		for(int i=0;i<=l1-l2;i++){
			if(strncmp(s2,&s1[i],l2)==0){
				flag=1;
				cout<<s2<<" is substring of "<<s1;
				break;
			}
		}
	}
	
	
	if(flag==0){
		cout<<"No substring";
	}
	return 0;
}
