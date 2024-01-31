#include <iostream>

using namespace std;
int main()
{
	int num[10005]={0};// num[x] = y  x出现了y次 
	int n,x,fmax=-1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>x;
		num[x]++;
		if(x>fmax){
			fmax=x;
		}
	}
	for(int i=0;i<=fmax;i++){
		cout<<num[i]<<endl;
	}
	return 0;
}
