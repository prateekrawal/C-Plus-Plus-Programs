#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n][n];
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
		int flag=1;
	for(int i=0;i<n;i++)
	{

		if(flag)
		{
			int j=0;
			while(j<n)
			{
				cout<<a[j][i]<<" ";
				j++;
			}
			flag=!flag;
		}
		else
		{
			int j=n-1;
			while(j>=0)
			{
				cout<<a[j][i]<<" ";
				j--;
			}
			flag=!flag;
		}
	}
	return 0;
}
