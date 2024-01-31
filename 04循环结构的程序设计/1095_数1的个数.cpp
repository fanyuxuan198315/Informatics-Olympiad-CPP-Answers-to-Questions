#include <iostream>
using namespace std;

int main()
{
	int n,cnt=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		//统计i中1的个数
		int tmp=i;
		while(tmp!=0){
			if(1==(tmp%10)){
				cnt++;
			}
			tmp/=10;
		}
	}
	cout<<cnt;
	return 0;
}
