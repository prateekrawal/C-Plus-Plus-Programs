#include <iostream>
using namespace std;
void selectionsort(int*a,int n);
void swap(int*a,int*b);
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	selectionsort(a,n);
	for(int i=0;i<n;i++)
		cout<<a[i]<<"  ";
	return 0;
}

void selectionsort(int*a,int n)
{
	for(int i=0;i<n;i++)
	{
		int min=i;
		for(int j=i;j<n;j++)
		{
			if(a[j]<a[min])
				min=j;
		}
		swap(a[i],a[min]);
	}
}
void swap(int*a ,int *b)
{
	int* temp;
	temp=a;
	a=b;
	b=temp;
}
