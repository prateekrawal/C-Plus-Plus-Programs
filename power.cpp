#include <iostream>
using namespace std;
int pow(int a, int b);
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<pow(a,b)<<endl;
	return 0;
}

int pow(int a, int b)
{
	if(b==0)
		return 1;
	int temp=pow(a,b/2);
	if(temp%2==0)
		return temp*temp;
	else
		return a*temp*temp;
}