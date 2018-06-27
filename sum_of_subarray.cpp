#include<iostream>
using namespace std;
struct pair1
{
	int a,b;
};
pair1 subar(int a[], int n,int sum);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,sum;
		cin>>n>>sum;
		int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		cout<<subar(a,n,sum).a+1<<" "<<subar(a,n,sum).b+1<<endl;
	}
	return 0;
}
pair1 subar(int a[], int n,int sum)
{
	int sum_now=a[0];
	pair1 ans;
	int start=0;
	for(int i=1;i<n;i++)
	{
		while(sum_now>sum && start<i-1)
		{
            sum_now-=a[start];
            start++;
        }
		if(sum_now==sum)
		{
			ans.a=start;
			ans.b=i-1;
			return ans;
			break;
		}
		if(sum_now<sum)
		{
			sum_now+=a[i];
		}

	}
}
