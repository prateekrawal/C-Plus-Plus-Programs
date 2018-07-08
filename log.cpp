#include <iostream>
using namespace std;
int log(int a,int b)
{
	return (a>b-1)?1+log(a/b , b):0;
}

int main()
{
	int a,b;
	cin>>a>>b;
	cout<<log(a,b);
	return 0;
}