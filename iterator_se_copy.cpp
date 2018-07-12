#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	vector<int>v1(arr,arr+10);
	vector<int>v2(10);
	vector<int>::iterator i1,i2,i3;
	int beginrange,endrange;
	cout<<"Enter begin and end range\n";
	cin>>beginrange>>endrange;

	i1=v1.begin() + beginrange;
	i2=v1.begin() + endrange;
	i3=copy(i1,i2,v2.begin());
	i1=v2.begin();
	while(i1!=i3)
	{
		cout<<*i1<<"  ";
		i1++;
	}

	return 0;
}
