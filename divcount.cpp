#include<iostream>
using namespace std;
int main()
{
	int n;
	int count=0;
	int p,q;
	cin>>p>>q>>n;
	for(int i=p;i<=q;i++)
	{
		if(i%n==0)
			count++;
	}
	cout<<count;
	return 0;
}