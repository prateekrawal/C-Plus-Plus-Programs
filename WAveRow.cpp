#include <iostream>
using namespace std;
int main()
{
	int n,m;
	cin>>n>>m;
	int a[n][m];
	for(int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			cin>>a[i][j];
	int flag=1;
	for(int i=0;i<n;i++)
	{
		int j;
		if(flag)
		{
			for(j=0;j<m;j++)
				cout<<a[i][j]<<" ";
			//cout<<endl;
		}
		else
		{
			for(j=m-1;j>=0;j--)
				cout<<a[i][j]<<" ";
		//	cout<<endl;
		}
		flag=!flag;
	}
}
