#include <iostream>
using namespace std;
int octal(int n);
int main()
{
	int n;
	cout<<"Enter the number to be converted to Octal\n";
	cin>>n;
	int a=octal(n);
	cout<<"The number in octal is "<<a<<endl;
	return 0;
}
int octal(int n)
{
	int oct=0;
	int k;
	int interation=1;
	while(n!=0)
	{
		k=n%8;
		oct=oct+k*interation;
		interation*=10;
		n=n/8;
	}
	return oct;
}
