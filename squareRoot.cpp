//squareRootBy 2 methods
#include <iostream>
using namespace std;
int squareroot(int n);
int squarerootBinary(int n);
int main()
{
	int n;
	cout<<"Enter the number\n";
	cin>>n;
	cout<<squareroot(n)<<endl;
	cout<<squarerootBinary(n)<<endl;
	return 0;
}
int squareroot(int n)
{
	if(n==1||n==0)
		return n;
	int a=1,temp=1;
	while(n>temp)
	{
	    a=a+1;
		temp=a*a;

	}
	return a-1;
}
int squarerootBinary(int n)
{
	if(n==0|| n==1)
		return n;
	int start=1;
	int last=n;
	int mid;
	int ans;
	while(start<=last)
	{
		mid=(start+last)/2;
		if(mid*mid == n)
			return mid;
		else if(mid*mid <n)
		{
			start=mid+1;
			ans=mid;
		}
		else
			last=mid-1;
	}
	return ans;
}
