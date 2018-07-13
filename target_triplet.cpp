#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
void target(int*v,int a,int n,int targ)
{
	int i=0,j=n-1;
	while(i<j && v[i]!=a)
	{
		int b=v[i];
		int rem=targ-b;
		if(rem==v[j]&& v[j]!=a)
		{
			cout<<"Elements are "<<a<<" "<<v[i]<<"  "<<v[j]<<endl;
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

}
int main()
{
	int n,a;
	int targ;
	cin>>n;
    int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v,v+n);
	cout<<"Enter the target Sum\n";
	cin>>targ;
	for(int i=0;i<n;i++)
	{
		target(v,v[i],n,(targ-v[i]));
	}
	return 0;
}
