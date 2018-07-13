#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
	int n,a;
	int target;
	cin>>n;
    int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>a;
		v[i]=(a);
	}
	cin>>target;
	sort(v,v+n);
	int i=0,j=n-1;
	while(i<j)
	{
		int a=v[i];
		int rem=target-a;
		if(rem==v[j])
		{
			cout<<"Elements are "<<v[i]<<"  "<<v[j]<<endl;
			i++;
		}
		else if(rem>v[j])
		{
			i++;
		}
		else
		{
			j--;
		}

	}

	cout<<"Enter the target Sum\n";
	cin>>target;
	return 0;
}
