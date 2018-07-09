#include <iostream>
using namespace std;
void inverse(int* a, int );
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	inverse(a,n);
	for(int j=0;j<n;j++)
		cout<<a[j]<<"  ";
	return 0;
}
void inverse(int* a, int n)
{
	int temp,k;
	int s[n];
	for(int i=0;i<n;i++)
	{
		{
			s[a[i]-1]=i+1;
		}
	}
	for(int j=0;j<n;j++)
		a[j]=s[j];
}
