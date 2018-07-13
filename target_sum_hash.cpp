#include <iostream>
using namespace std;
#include <set>
#include <algorithm>

int main()
{
	int n;
	cout<<"Enter the number of elements in array\n";
	cin>>n;
	int a[n];
	set<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int tar;
	cout<<"Enter the target\n";
	cin>>tar;
	for(int i=0;i<n;i++)
	{
		int rem=tar-a[i];
		if(rem>0 && s.find(rem)!= s.end())
		{
			cout<<"The pair of number is  "<<a[i]<<"  "<<*(s.find(rem))<<endl;
		}
		s.insert(a[i]);
	}

	return 0;
}
