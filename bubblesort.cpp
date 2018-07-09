#include <iostream>
using namespace std;
void bubblesort(int*a , int n);
void swap(int*a,int*b);
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	bubblesort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"   ";
	return 0;
}
void bubblesort(int*a , int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
}
void swap(int*a,int*b)
{
	int* temp=a;
	a=b;
	b=temp;
}
