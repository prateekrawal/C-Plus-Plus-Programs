#include <iostream>
using namespace std;
int dec(int *,int n);
int inc(int* , int a,int n );
int main()
{
	int n;
	cin>>n;
	int s[n];
	for(int i=0;i<n;i++)
		cin>>s[i];
	int mid=dec(s,n);
	if(inc(s,mid,n)==n)
		cout<<"True\n";
	else
		cout<<"FAlse\n";
	return 0;
}
int dec(int * a,int n)
{
    int i;
	for( i=0;i<n;i++)
	{
		if(a[i+1]>a[i])
			return i;
	}
	return i;
}
int inc(int *a ,int mid,int n)
{
    int i;
    if(mid==n ||mid== n-1 || mid==1 || mid==0)
        return 0;
	for(i=mid+1;i<n;i++)
	{
		if(a[i-1]>a[i])
			return i;
	}
	return i;
}

