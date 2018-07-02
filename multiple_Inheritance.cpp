#include <iostream>
using namespace std;
class parent
{
protected:
	int basedata=5;
};
class child1 :virtual public parent
{

};
class child2 :virtual public parent
{

};
class grandchild :public child1,public child2
{
public:
	int getdata()
	{
		return basedata;
	}
};
int main()
{
	grandchild a;
	cout<<a.getdata()<<endl;
	return 0;
}
