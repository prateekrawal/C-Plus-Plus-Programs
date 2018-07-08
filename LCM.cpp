#include<iostream>
using namespace std;
int gcd(int a,int b);
int main()
{
	int a,b;
	cout<<"Enter two numbers\n";
	cin>>a>>b;
	int lcm=(a*b)/gcd(a,b);
	cout<<"LCM is "<<lcm;
	return 0;
}
int gcd(int a, int b)
{
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
