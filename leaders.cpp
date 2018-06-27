#include<iostream>
using namespace std;
int main()
{
	int t;
	 cin>>t;
	 while(t--)
	 {
	 	int n;
	 	cin>>n;
	 	int a[n];
	 	for(int i=0;i<n;i++)
	 		cin>>a[i];
	 	int max=-10000000;
	 	int count=0;
	 	for(int i=n-1;i>0;i--)
	 	{
	 		if(a[i]>max)
	 		{
	 			max=a[i];
	 			cout<<a[i]<<" ";
	 			count++;
	 		}
	 	}
	 	cout<<endl;
	 }
}
