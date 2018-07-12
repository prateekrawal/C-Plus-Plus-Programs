#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
	int a[]={1,2,3,4,5};
	list<int> l;
	for(int i=0;i<5;i++)
		l.push_back(a[i]);
	list<int>::iterator iter;
	for(iter=l.begin();iter!=l.end();iter++)
	{
		cout<<*iter<<" ";
	}
	cout<<endl;

	return 0;
}
