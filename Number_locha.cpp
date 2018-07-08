#include <iostream>
using namespace std;
int power(int a, int b)
{
    int re=1;
	for(int i=0;i<b;i++)
		{
		   re=re*a;
		}
	return re;
}
int main()
{
	long long int n,m=0,l;
	cin>>n;
	l=n;

	for(int i=1;n!=0;i++)
	{
		int k=n%10;
		int pos=power(10,k-1);
		//cout<<pos<<endl;
		m=m+i*pos;
		n=n/10;
	}
	cout<<"Inverse of a Number is "<<m<<endl;
	if(m==l)
        cout<<"TRUE\n";
    else
        cout<<"False\n";
	return 0;
}
