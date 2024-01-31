#include <iostream>
using namespace std;
int ans[100005]={1,1};
int jw[100005];
int sum[100005]={1};
int n;
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=ans[0];j++){
			//求i!值 
			ans[j]=ans[j]*i+jw[j];
			jw[j]=0;
			
			if(ans[j]>=10){
				jw[j+1]+=ans[j]/10;
				ans[j]%=10;
				
				if(j==ans[0]) ans[0]++;
			}
			
		}
		
		//加法
		sum[0]=max(sum[0],ans[0]);
		for(int j=1;j<=sum[0];j++){
			sum[j]=sum[j]+ans[j];
			if(sum[j]>=10){
				sum[j+1]+=sum[j]/10;
				sum[j]%=10;
				if(j==sum[0]){
					sum[0]++;
				} 
			}
		}
		
	}
	
	for(int i=sum[0];i>=1;i--){
		cout<<sum[i];
	}
	return 0;
}
