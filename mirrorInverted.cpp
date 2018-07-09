#include <iostream>
using namespace std;
void checkMirrorInvert(int*a ,int n);
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	checkMirrorInvert(a,n);
	return 0;
}
void checkMirrorInvert(int*a ,int n)
{
	int s[n];
	int flag=0;
	for(int i=0;i<n;i++)
			s[a[i]-1]=i+1;
	for(int j=0;j<n;j++)
	{
		if(a[j]!=s[j])
		{
			cout<<"False\n";
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"true\n";
}
