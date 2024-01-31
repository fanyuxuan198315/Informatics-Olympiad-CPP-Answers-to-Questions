#include <iostream>
using namespace std;
int main()
{
	int n,sum=0,days=0;
	cin>>n;
	for(int i=1;days!=n;i++){// i连续的天数变化 
		for(int j=1;j<=i;j++){
			// 度过每一天 
			sum+=i;
			days++;
			if(days==n){
				break;
			}
		} 
	}
	cout<<sum;
		 
	return 0;
}
