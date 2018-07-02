#include <iostream>
using namespace std;
class A;
class B
{
private:
	int data;
public:
	B():data(3)
	{}
	friend int func(A,B);
};
class A
{
private:
	int data;
public:
	A():data(6)
	{}
	friend int func(A,B);
};
int func(A a, B b)
{
	return a.data+b.data;
}
int main()
{
	A aa;
	B bb;
	cout<<func(aa,bb);
	return 0;
}
