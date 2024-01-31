#include <iostream>
using namespace std;

int a[10005]={0};
int b[10005]={0};
int g[10005]={0};
int k[10005]={0};

int main()
{
	int n,x,y,ans=-1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	for(int i=n;i>=1;i--){
		if((x>=a[i]&&x<=a[i]+g[i])&&(y>=b[i]&&y<=b[i]+k[i])){
			ans=i;
			break;
		}
	}
	cout<<ans;
	return 0;
}
