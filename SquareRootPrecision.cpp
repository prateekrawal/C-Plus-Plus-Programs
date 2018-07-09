#include <iostream>
using namespace std;
float squareroot(int n,int precision);
int main()
{
	int n,p;
	cout<<"Enter the Number and precision\n";
	cin>>n;
	cin>>p;
	cout<<"Square Root is "<<squareroot(n,p)<<endl;
	return 0;
}

float squareroot(int n,int precision)
{
	int start=0,last=n;
	int mid;
	float ans;
	while(start<last)
	{
		mid=(start+last)/2;
		if(mid*mid==n)
		{
			ans=mid;
			break;
		}
		else if(mid*mid<n)
		{
			start=mid+1;
			ans=mid;
		}
		else
		{
			last=mid-1;
		}
	}
	float inc=0.1;
	for(int i=0;i<precision;i++)
	{
		while(ans*ans<=n)
		{
			ans+=inc;
		}
		ans=ans-inc;
		inc=inc/10;

	}
	return ans;
}
