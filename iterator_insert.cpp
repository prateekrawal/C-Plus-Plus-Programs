#include <iostream>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
	list <int> li(6);
	int data=1;
	list<int>::iterator iter;
	for(iter=li.begin();iter!=li.end();iter++)
	{
		data*=2;
		*iter=data;
	}
	for(iter=li.begin();iter!=li.end();iter++)
	{
		cout<<*iter<<"  ";
	}
	return 0;
}