#include <iostream>
#include <cstdio>

using namespace std;

bool isPrime(int x){
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
} 
int  main() {
	for(int i=6;i<=100;i++){
		if(i%2==0)
			for(int j=2;j<=i/2;j++){
				if(isPrime(j)&&isPrime(i-j)){
					printf("%d=%d+%d\n",i,j,i-j);
					break;
				}
			}
	} 
	return 0;
}
