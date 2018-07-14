#include <iostream>
using namespace std;
int n;
void pr(int* a,int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
void swap(int*a,int*b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void permute(int*a,int l,int r)
{
	int i;
	if(l==r)
		pr(a,n);
	else
	{
		for(i=l;i<=r;i++)
		{
			swap(a+l,a+i);
			permute(a,l+1,r);
			swap(a+l,a+i);
		}
	}
}
int main()
{
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	permute(a,0,n-1);
	return 0;
}
