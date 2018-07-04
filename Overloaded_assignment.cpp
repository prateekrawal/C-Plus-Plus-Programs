#include <iostream>
using namespace std;
class alpha
{
	private:
		int data;
	public:
		alpha():data(0)
		{}
		alpha(int a):data(a)
		{}
		void show()
		{
			cout<<"Data is "<<data<<endl;
		}
		alpha operator =(alpha& a)
		{
			data=a.data;
			cout<<"Invoked overloaded operator\n";
			return alpha(data);
		}
};
int main()
{
	alpha a(34);
	alpha b;
	b=a;
	a.show();
	b.show();
	alpha c=a;
	c.show();
	return 0;
}
