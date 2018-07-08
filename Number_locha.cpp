#include <iostream>
using namespace std;
int power(int a, int b)
{
    int re=a;
	for(int i=1;i<b;i++)
		{
		   re=re*a;
		}
	return re;
}
int main()
{
	long long int n,m=0;
	cin>>n;

	for(int i=1;n!=0;i++)
	{
		int k=n%10;
		int pos=power(10,k);
		cout<<pos<<endl;
		m=m+i*pos;
		n=n/10;
	}
	cout<<m/10;
	return 0;
}
