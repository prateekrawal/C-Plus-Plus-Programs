#include <iostream>
using namespace std;
class dist
{
private:
	int feet;
	float inch;
public:
	dist(): feet(0),inch(0.0)
	{}
	dist(float f)
	{
		feet=static_cast<int>(f);
		inch=12*(f-feet);
	}
	dist(int a,float b) : feet(a),inch(b)
	{}
	void show()
	{
		cout<<"Distance is "<<feet<<"\'"<<inch<<"\""<<endl;
	}
	friend dist operator + (dist d1,dist d2);//regular is dist operator + (dist d1)
};
dist operator + (dist d1, dist d2)
{
	int f=d1.feet+d2.feet;
	float i=d1.inch+d2.inch;
	if(i>12.0)
	{
		i-=12;
		f++;
	}
	return dist(f,i);
}
int main()
{
	dist d1=2.11;
	dist d2= 3.24;
	dist d3;
	cout<<"Distance d1 is \n";d1.show();
	cout<<"Distance d2 is \n";d2.show();
	d3= d2+10.0;
	cout<<"Distance d3 is \n";d3.show();
	d3=10.0+d1;
	cout<<"Distance d3 is \n";d3.show();
	return 0;
}
