#include <iostream>
using namespace std;
int i=0;
void printpas(int n)
{
	if(n<1)
		return;
	printrow(n,i)
}
int main()
{
	int n;
	cin>>n;
	printpas(n);
	return 0;
}