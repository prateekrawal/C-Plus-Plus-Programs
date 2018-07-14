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
	int r=n,c=n;

	int i=0,j=0;
	while(i<r && j<c)
	{
		for(int s=i;s<r;++s)
			cout<<a[s][j]<<" ";
		j++;
		for(int s=j;s<c;++s)
			cout<<a[r-1][s]<<" ";
		r--;
		if(i<r)
		{
			for(int s=r-1;s>=i;--s)
				cout<<a[s][c-j]<<" ";
			c--;
		}
		if(j<c)
		{
			for(int s=c-1;s>=j;--s)
				cout<<a[i][c-j]<<" ";
			i++;
		}
	}
	return 0;
}
