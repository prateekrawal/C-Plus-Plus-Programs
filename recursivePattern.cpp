#include <iostream>
using namespace std;
void printrow(int n)
{
	if(n<1)
		return;
	cout<<"*";
	printrow(n-1);
}
void printpatt(int n)
{
	if(n==0)
		return;
	printrow(n);
	cout<<endl;
	printpatt(n-1);
}
int main()
{
	int n;
	cin>>n;
	printpatt(n);
	return 0;
}
