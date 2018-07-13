#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	long long int k=0;
	long long int count=1;
	for(int i=n-1;i>=0;i--)
	{
		k=k+a[i]*count;
		count=count*10;
	}
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];
	long long int l=0;
	count=1;
	for(int i=m-1;i>=0;i--)
	{
		l=l+b[i]*count;
		count=count*10;
	}
	long long int s=k+l;
	int i=0;
	int arr[m+n];
	while(s!=0)
	{
		arr[i]=s%10;
		s=s/10;
		i++;
	}
	for(int j=i-1;j>=0;j--)
		cout<<arr[j]<<"   ";
	cout<<endl;
	return 0;
}
