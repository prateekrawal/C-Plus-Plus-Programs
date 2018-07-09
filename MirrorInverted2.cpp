#include <iostream>
using namespace std;
int* checkMirrorInvert(int*a ,int n);
int main()
{
	int n;
	cin>>n;
	int a[n,b[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int k=0;k<n;k++)
		cin>>b[k];
	int s[n];
	s=checkMirrorInvert(a,n);
	int flag=0;
	for(int j=0;j<n;j++)
	{
		if(s[j]!= b[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"Inverse Found\n";
	else
		cout<<"Not inverse\n";
	return 0;
}
int* checkMirrorInvert(int*a ,int n)
{
	int s[n];
	int flag=0;
	for(int i=0;i<n;i++)
			s[a[i]-1]=i+1;
	return s;
}
