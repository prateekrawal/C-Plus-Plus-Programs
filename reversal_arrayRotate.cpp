#include<iostream>
using namespace std;
void reverse(int a[],int start,int end);
void printarray(int a[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<a[i]<<"  ";
	}
}
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
	reverse(a,0,d-1);
	reverse(a,d,n-1);
	reverse(a,0,n-1);
	printarray(a,n);

	return 0;
}
void reverse(int a[],int start,int end)
{
	int temp;
	while(start<end)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
}
