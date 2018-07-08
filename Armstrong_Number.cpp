#include <bits/stdc++.h>
using namespace std;
int power(int a,int b)
{
	if(b==0)
		return 1;
	else if(b%2==0)
		return power(a,b/2)*power(a,b/2);
	else
		return (a*power(a,b/2)*power(a,b/2));
}
int order(int n)
{
	int c=0;
	while(n!=0)
	{
		n=n/10;
		c++;
	}
	return c;
}
void isarmstrong(int n)
{
	int l=n;
	int o=order(n);
	int sum=0;
	for(int i=0;i<o;i++)
	{
		int k=n%10;
		sum=sum+power(k,o);
		n=n/10;
	}
	if(sum==l)
		cout<<"True\n";
	else
		cout<<"False\n";
}
int main()
{
	int n;
	cout<<"Enter the nummber\n";
	cin>>n;
	isarmstrong(n);
	return 0;
}
