#include <iostream>
using namespace std;
template <class type>
struct node
{
	type data;
	node* next;
};
template <class type>
class linkedlist
{
private:
	node <type> * first;
public:
	linkedlist()
	{
	    first=NULL;
	}

	void additem(type var);
	void show();
};
template <class type>
void linkedlist<type>::additem(type var)
{
	node <type>* a= new node <type>;
	a->data=var;
	a->next=first;
	first=a;
}
template <class type>
void linkedlist <type>:: show()
{
	node <type>* current = first;
	while(current!=NULL)
	{
		cout<<current->data<<endl;
		current=current->next;
	}
}
int main()
{
	linkedlist<double> ld; //ld is object of class linklist<double>
	ld.additem(151.5); //add three doubles to list ld
	ld.additem(262.6);
	ld.additem(373.7);
	ld.show(); //show entire list ld
	linkedlist<char> lch; //lch is object of class linklist<char>
	lch.additem('a'); //add three chars to list lch
	lch.additem('b');
	lch.additem('c');
	lch.show(); //show entire list lch
	cout << endl;
	return 0;
}
