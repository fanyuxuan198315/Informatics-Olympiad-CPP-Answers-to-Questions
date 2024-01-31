#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	char pic;
	cin>>pic;
	printf("  %c\n",pic);
	printf(" %c%c%c\n",pic,pic,pic);
	printf("%c%c%c%c%c\n",pic,pic,pic,pic,pic);
	printf(" %c%c%c\n",pic,pic,pic);
	printf("  %c",pic);
	return 0;
}
