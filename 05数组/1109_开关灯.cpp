#include <iostream>
using namespace std;
int main()
{
	int light[5005]={0};//light[x] 0-¹Ø 1-¿ª 
	int n,m;
	cin>>n>>m;
	
	for(int i=2;i<=m;i++){
		for(int j=1;j<=n;j++){
			if(j%i==0){
				light[j]=(light[j]+1)%2;
			}
		}
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		
		if(!light[i]){
			if(flag==1) cout<<",";
			cout<<i;
			flag=1;
		}
	}
	 
	return 0;
}
