#include<iostream>
using namespace std;
int max_suma(int a[],int n);
int max(int a, int b)
{
	if(a>b)
	return a;
	else 
	return b;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<max_suma(a,n)<<endl;
	}

	return 0;
}
int max_suma(int a[],int n)
{
	int max_till_now=0,max_sum=0;
	max_till_now=max_sum=a[0];
	for(int i=1;i<n;i++)
		{
			max_till_now=max(a[i],max_till_now+a[i]);
			max_sum=max(max_till_now,max_sum);
		}
	return max_sum;
}