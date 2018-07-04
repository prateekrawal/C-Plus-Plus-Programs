#include<iostream>
using namespace std;
class alpha
{
private:
	int a,b;
public:
	alpha():a(1),b(2)
	{}
	friend class beta;
};
class beta
{
public:
	void func1(alpha a)
	{
		cout<<a.a<<" data 2 is "<<a.b<<endl;
	}
};
int main()
{
	alpha a;
	beta b;
	b.func1(a);
	return 0;
}
