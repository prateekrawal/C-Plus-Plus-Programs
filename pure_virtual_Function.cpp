//pure Virtual Function
#include<iostream>
using namespace std;
class base 
{
public:
	virtual void show()=0;
};
class der:public base
{
public:
	void show()
	{
		cout<<"In derived class 1\n";
	}
};
class der2 : public base
{
public:
	void show()
	{
		cout<<"In derived class 2\n";
	}
};
int main()
{
	//base b;
	der a;
	der2 c;
	base * arr[2];
	arr[0]=&a;
	arr[1]=&c;
	for(int i=0;i<2;i++)
		arr[i]->show();

	return 0;

}