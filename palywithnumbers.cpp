#include<iostream>
using namespace std;
int main()
{
	int n,q,l,r;
	cin>>n;
	cin>>q;
	int a[n];
	int b[n];
	int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
		b[i]=sum;
	}
	for(int j=0;j<q;j++)
	{
		cin>>l>>r;
		cout<<(b[r-1]-b[l-1])/(r-l+1)<<endl;
	}
	return 0;

}
