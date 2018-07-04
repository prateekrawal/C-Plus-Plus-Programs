#include <iostream>
using namespace std;
class alpha
{
private:
	static int total;
	int id;
public:
	alpha()
	{
		++total;
		id=total;
	}
	~alpha()
	{
		--total;
		cout<<"Destroying Object no. "<<id<<endl;
	}
	static void showTotal()
	{
		cout<<"Total is "<<total<<endl;
	}
	void show()
	{
		cout<<"ID is "<<id<<endl;
	}
};
int alpha::total=0;
int main()
{
	alpha a;
	alpha::showTotal();
	alpha b,c;
	alpha::showTotal();
	a.show();
	b.show();
	c.show();
	cout<<"...........................This is end of program.......................\n";

	return 0;
}
