#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum=0;
		long sumexp=(n*(n+1))/2;
		for(int i=0;i<n-1;i++)
		{
			int temp;
			cin>>temp;
			sumexp=sumexp-temp;
		}
		cout<<sumexp<<endl;
	}
	return 0;

}