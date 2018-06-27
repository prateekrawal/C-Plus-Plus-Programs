#include <iostream>
#include<string>
using namespace std;
class dist
{
protected:
	int feet;
	int inch;
public:
	dist():feet(0),inch(0)
	{}
	dist(int a,int b):feet(a),inch(b)
	{}
	void show()
	{
		cout<<feet<<"\'"<<inch<<"\""<<endl;
	}
	void get()
	{
		cout<<"Enter the feet and Inches\n";
		cin>>feet>>inch;
	}
};
class distSign : public dist
{
private:
	bool sign;
public:
	distSign():dist()
	{
		sign=1;
	}
	distSign(int a,int b,bool c):dist(a,b)
	{
		sign=c;
	}
	void get()
	{
		dist::get();
		cout<<"Enter the sign (0 for negative and 1 for positive\n";
		cin>>sign;
	}
	void show()
	{
		cout<<((sign==0)?"+":"-");
		dist::show();
	}


};
int main()
{
	dist a;
	a.get();
	dist b(1,2);
	distSign c(3,4,0);

	a.show();
	b.show();
	c.show();


	return 0;
}
