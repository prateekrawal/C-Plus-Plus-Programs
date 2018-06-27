#include<iostream>
using namespace std;
void swap(int *,int si,int sj,int d);
void printarray(int a[],int n)
{
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
}
void recreverse(int a[],int d,int n);
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int d;
	cin>>d;
	recreverse(a,d,n);
	printarray(a,n);
	return 0;
}
void recreverse(int a[],int d,int n)
{
	if(d==0||d==n)
		return;
	if(d<n-d)
	{
		swap(a,0,n-d,d);
		recreverse(a,d,n-d);
	}
	else if(d==n-d)
	{
		swap(a,0,n-d,d);
		return;
	}
	else if(d>n-d)
	{
		swap(a,0,d,n-d);
		recreverse(a+n-d,2*d-n,d);
	}
}
void swap(int *a,int si,int sj,int d)
{
	int temp;
	for(int i=0;i<d;i++)
	{
		temp=a[si+i];
		a[si]=a[sj];
		a[sj]=temp;
		si++;
		sj++;
	}
}
