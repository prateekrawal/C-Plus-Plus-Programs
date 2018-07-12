#include <iostream>
using namespace std;
#include<deque>
int main()
{
	deque<int>d1;
	d1.push_back(5);
	d1.push_back(6);
	d1.push_front(4);
	d1.push_front(3);
	d1.push_front(2);
	d1.push_front(1);
	d1.push_front(0);
	for(int i=0;i<d1.size() ; i++)
		cout<<d1[i]<<" ";
	return 0;
}
