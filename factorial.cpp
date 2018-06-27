#include <iostream>
using namespace std;
int main()
{
	long l=1;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)	
	{
		l*=i;
	}
	cout<<l;
	return 0;
}