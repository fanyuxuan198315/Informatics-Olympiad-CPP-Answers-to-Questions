#include <iostream>
#include <cstdio> 
#include <cmath>//fabs
using namespace std;
int main()
{
	int n,index1=1,index2=1;
	double cell[305]={0},maxs,mins,sum=0,ave;
	double fabMax=-1;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>cell[i];
		sum+=cell[i];
	}
	maxs=mins=cell[1];
	for(int i=1;i<=n;i++){
		if(cell[i]>maxs){
			maxs=cell[i];
			index1=i;
		}
		if(cell[i]<mins){
			mins=cell[i];
			index2=i;
		}
	}
	sum-=(maxs+mins);
	ave=sum/(n-2);
	for(int i=1;i<=n;i++){
		if(i!=index1&&i!=index2){
			if(fabs(cell[i]-ave)>fabMax){
				fabMax=fabs(cell[i]-ave);
			}
		}
	}
	printf("%.2f %.2f",ave,fabMax);

	
	return 0;
}
