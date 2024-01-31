#include <iostream>

using namespace std;
int dp[25];
int main(){
	dp[0]=1;
	dp[1]=3;
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		dp[i]=2*dp[i-1]+dp[i-2];
	}
	cout<<dp[n];
	return 0;
}
