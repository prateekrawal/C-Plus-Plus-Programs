#include <iostream>
using namespace std;
int octal_to_decimal(int n);
long long int decimal_toBinary(int d);

int main()
{
	int n;
	cout<<"enter the number in Octal\n";
	cin>>n;
	int d=octal_to_decimal(n);
	long long int k=decimal_toBinary(d);
	cout<<"Number in BInary is \t"<<k<<endl;\


	return 0;
}
int octal_to_decimal(int n)
{
	int a=0;
	int iter=1;
	while(n!=0)
	{

		int r=n%10;
		a=a+r*iter;
		iter=iter*8;
		n=n/10;
	}
	return a;
}
long long int decimal_toBinary(int d)
{
	long long int bin=0;
    int iter=1;
	while(d!=0)
	{
		int rem=d%2;
		bin=bin+(rem*iter);
		iter=iter*10;
		d=d/2;
	}
	return bin;
}
