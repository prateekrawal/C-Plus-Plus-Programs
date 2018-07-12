#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n1,n2,a;
	int count=0;
	vector<int> v1,v2,v3;
	cout<<"Enter the size of array 1\n";
	cin>>n1;
	for(int i=0;i<n1;i++)
	{
		cin>>a;
		v1.push_back(a);
	}
	cout<<"Enter the size of array 2\n";
	cin>>n2;
	for(int i=0;i<n2;i++)
	{
		cin>>a;
		v2.push_back(a);
	}
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(v1[i]==v1[j])
			{
				v3.push_back(v1[i]);
				i++;
				j=0;
				count++;
			}
		}
	}
	for(int i=0;i<count;i++)
        cout<<v3[i]<<" ";
	return 0;
}
