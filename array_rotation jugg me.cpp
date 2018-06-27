#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
void arrayrotate(int [],int d,int n);
int main()
{
	int n;
	int a[n];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int d;
	cin>>d;
	arrayrotate(a,d,n);
	return 0;
}
void arrayrotate(int a[],int d,int n)
{
	int k=gcd(d,n);
	for(int i=0;i<k;i++)
	{
		int temp=a[i];
		int j=i;
		while(1)
		{
			int s=j+d;
			if(s>n)
				s=s-n;
			if(s==i)
				break;
			a[j]=a[s];
			j=s;
		}
		a[i]=temp;
    }
}
