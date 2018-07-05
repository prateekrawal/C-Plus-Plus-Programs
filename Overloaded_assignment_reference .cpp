#include <iostream>
using namespace std;
class alpha
{
private:
	int data;
public:
	alpha()
	{}
	alpha(int d)
	{
		data =d;
	}
	void display()
	{
		cout<<"Data is "<<data <<endl;
	}
	alpha& operator = (alpha& a)
	{
		data=a.data;
		cout<<"Assignment operator invoked \n";
		return *this;
	}
};
int main()
{
	alpha a1(36);
	alpha a2,a3;
	a3=a2=a1;
	cout<<"A2 ";a2.display();
	cout<<"A3 ";a3.display();
	return 0;
}
