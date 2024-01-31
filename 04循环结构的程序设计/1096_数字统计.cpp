#include <iostream>
using namespace std;

int main()
{
	int l,r,cnt=0;
	cin>>l>>r;
	for(int i=l;i<=r;i++){
		// 统计i中2的个数
		int tmp=i;
		while(tmp!=0){
			if(2==(tmp%10)){
				cnt++;
			}
			tmp/=10;
		}
	}
	cout<<cnt;
	return 0;
}
