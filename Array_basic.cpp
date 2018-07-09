#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int m;
	cin>>m;
	int flag=0;
	for(int j=0;j<n;j++)
	{
		if(a[j]==m)
		{
		    cout<<a[j];
			flag=1;
			break;
		}

	}
	if(flag==0)
	cout<<"-1";
	return 0;
}
