#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	char dna[260]={0};
	cin>>dna;
	for(int i=0;dna[i]!=0;i++){
		switch(dna[i]){
			case 'A': cout<<'T';break;
			case 'T': cout<<'A';break;
			case 'C': cout<<'G';break;
			case 'G': cout<<'C'; 
		}
	}
	return 0;
}

