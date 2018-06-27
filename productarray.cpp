#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long ans=1;
	int a[n];
	for(int j=0;j<n;j++)
        cin>>a[j];

    for(int i=0;i<n;i++)
	{
		ans=(ans*a[i])%(1000000007);
	}
	cout<<ans;
	return 0;
}
