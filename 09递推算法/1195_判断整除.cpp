#include <iostream>

using namespace std;
int n,k;
int x[10005];
bool sum[10005][1005];//sum[i][j]=t 前i个元素中，总和为j的个数 
/*                   负号                正好 
sum[i][j]=sum[i-1][j-a[i]]   , sum[i-1][j+a[i]]
*/
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>x[i];
	}
	sum[0][0]=true;
	for(int i=1;i<=n;i++){
		for(int j=0;j<k;j++){ 
			sum[i][j]=sum[i-1][(j-x[i]%k+k)%k]||sum[i-1][(j+x[i]%k)%k]; 
		}
	}
	if(sum[n][0]==0){
		cout<<"NO";
	}else{
		cout<<"YES";
	}
	return 0;
}
