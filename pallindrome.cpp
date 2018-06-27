#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char a[100];
	cin>>a;
	int n=strlen(a);
	for(int i=0;i<n/2;i++)
	{
		if(a[i]!=a[n-i])
		{
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}
