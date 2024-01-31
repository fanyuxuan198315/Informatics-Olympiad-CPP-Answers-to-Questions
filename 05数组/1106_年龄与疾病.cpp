#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int age[105]={0};
	int a=0,b=0,c=0,d=0;
	cin>>n; 
	for(int i=1;i<=n;i++){
		cin>>age[i];
		if(age[i]>=0&&age[i]<=18){
			a++;
		}else if(age[i]>=19&&age[i]<=35){
			b++;
		}else if(age[i]>=36&&age[i]<=60){
			c++;
		}else{
			d++;
		}
	}
	
	printf("%.2f%%\n%.2f%%\n%.2f%%\n%.2f%%",100.0*a/n,100.0*b/n,100.0*c/n,100.0*d/n);
	
	return 0;
}
