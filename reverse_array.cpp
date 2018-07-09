#include <iostream>
using namespace std;
void reverse(int * a,int n)
{
	int temp;
	int j=n-1;
	for(int i=0;i<j;i++)
	{	
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;

	}

}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	reverse(a,n);
	for(int j=0;j<n;j++)
		cout<<a[j]<<"  ";
	return 0;
}