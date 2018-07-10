#include <iostream>
using namespace std;
long tot(int n)
{
	int k=10;
	long ans=1;
	while(n!=0)
	{
		ans=ans*k;
		if(k==10)
			k--;
		n=n/10;
	}
	return ans;
}
long palin(int n)
{

}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long total=tot(n);
		long pallin=palin(n);
	}
}

