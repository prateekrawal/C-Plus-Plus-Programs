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
	{
	    for(int j=0;j<n-i+1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
        }
        for(int i=0;i<n;i++)
			cout<<a[i]<<"   ";
			cout<<endl;
}
		cout<<endl;
}
void swap(int*a,int*b)
{
	int* temp=a;
	a=b;
	b=temp;
}
