#include <iostream> 
//1397：简单算术表达式求值 
using namespace std;


int main(int argc, char** argv) {
	int a,b,ans;
	char c;
	cin>>a>>c>>b;
	switch(c){
		case '+': ans=a+b;break;
		case '-': ans=a-b;break;
		case '*': ans=a*b;break;
		case '/': ans=a/b;break;
		case '%': ans=a%b;
	}
	cout <<ans;
	return 0;
}
