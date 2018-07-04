#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int count=0;
		for(int i=0;i<n;i++)
		{
			int c;
			cin>>c;
			count+=c;
		}
		if(count%2==0)
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}