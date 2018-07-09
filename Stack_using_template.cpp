#include <iostream>
using namespace std;
const int MAX=80;
template <class type>
class stack
{
private:
	int top;
	type st[MAX];
public:
	stack();
	void push(type var);
	type pop();
};
template <class type>
stack<type>::stack()
{
	top=-1;
}
template <class type>
void stack<type>::push(type var)
{
	st[++top]=var;
}
template <class type>
type stack<type>::pop()
{
	return st[top--];
}
int main()
{
	stack<float> s1;
	s1.push(2.3);
	s1.push(3.4);
	s1.push(4.5);
	cout<<"1"<<"   "<<s1.pop()<<endl;
	cout<<"2"<<"   "<<s1.pop()<<endl;
	cout<<"3"<<"   "<<s1.pop()<<endl;

	stack<long> s2;
	s2.push(409L);
	s2.push(223);
	s2.push(40L);
	cout<<"1"<<"   "<<s2.pop()<<endl;
	cout<<"2"<<"   "<<s2.pop()<<endl;
	cout<<"3"<<"   "<<s2.pop()<<endl;
	return 0;
}
