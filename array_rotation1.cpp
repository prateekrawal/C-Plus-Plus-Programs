#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int d;
	cin>>d;
	for(int i=0;i<d;i++)
	{
	    int temp=a[0];
		int j;
		for(j=0;j<n;j++)
			a[j]=a[j+1];
		a[j-1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}

	return 0;
}
