#include<iostream>
using namespace std;
class base
{
public:
	void show()
	{
	cout<<"Base class\n";
	}
};
class der : public base
{
public:
	void show()
	{
	cout<<"Derived class 1\n";
	}
};
class der1:public base
{
	void show(){
	cout<<"In derived class 2\n";}
};
int main()
{
	base b;
	der d;
	der1 e;
	base* a;
	a= &d;
	a->show();
	a=&e;
	a->show();
	return 0;
}