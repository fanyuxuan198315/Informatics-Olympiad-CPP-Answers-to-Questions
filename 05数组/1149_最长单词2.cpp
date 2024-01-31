#include <iostream>
#include <cstring>
using namespace std; 

int main(int argc, char** argv) {
	char word[505]={0},maxWord[505]={0};
	int maxL=-1;
	while(cin>>word){
		int len=strlen(word);
		if(word[len-1]=='.'){
			word[len-1]='\0';
			len--;
		}
		if(len>maxL){
			maxL=len;
			strcpy(maxWord,word);
		}
	}
	cout<<maxWord;
	return 0;
}
