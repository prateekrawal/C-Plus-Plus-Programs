#include <iostream>
using namespace std;
class alpha
{
private:
	int data;
public:
	alpha():data(0)
	{}
	alpha(int a)
	{
		data=a;
	}
	alpha(alpha& a)
	{
		data=a.data;
		cout<<"Copy constructer invoked\n";
	}
	void display()
	{
		cout<<"Data is "<<data<<endl;
	}
	void operator = (alpha &a)
	{
		data =a.data;
		cout<<"Overloaded Assignment Operator\n";
	}
};
int main()
{
	alpha a1(34);
	alpha a2;
	a2=a1;
	cout<<"a2  ";a2.display();
	alpha a3(a2);
	alpha a4 =a2;
	cout<<"A3   ";a3.display();


	return 0;
}
