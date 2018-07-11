#include <iostream>
using namespace std;
#include<list>
int main()
{
	list<int> marks(5);
	marks.push_back(50);
	marks.push_back(60);
	marks.push_front(20);
	marks.push_front(40);
	;
	for(int i=0;i<marks.size();i++)
	{
		cout<<marks.front()<<"  ";
		marks.pop_front();
	}
	cout<<endl;
	return 0;
}
