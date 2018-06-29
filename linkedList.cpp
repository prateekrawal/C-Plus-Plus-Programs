#include <iostream>
using namespace std;
struct link
{
	int data;
	link* ptr;
};
class linkedlist
{
private:
	link* first;
public:
	linkedlist()
	{
		first=NULL;
	}
	void addItem(int d);
	void show();
};
void linkedlist::addItem(int d)
{
	link* next = new link;
	next->data=d;
	next->ptr=first;
	first=next;
}
void linkedlist::show()
{
	link* current=first;
	while(current!=NULL)
	{
		cout<<current->data<<"  -  ";
		current=current->ptr;
	}
}
int main()
{
	linkedlist l1;
	l1.addItem(4);
	l1.addItem(5);
	l1.addItem(2);
	l1.addItem(3);
	l1.show();
	return 0;
}
