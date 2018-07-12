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
		data*=3;
		*iter=data;
	}
	iter=find(li.begin(),li.end(),8);
	if(iter!=li.end())
		cout<<"Found\n";
	else
		cout<<"Not found\n";
	return 0;
}
