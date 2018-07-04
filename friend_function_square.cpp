#include <iostream>
using namespace std;
class dist
{
private:
	int feet;
	float inch;
public:
	dist():feet(0),inch(0.0)
	{}
	dist(float a)
	{
		feet=static_cast<int>(a);
		inch=12*(a-feet);
	}
	dist(int a,float b):feet(a),inch(b)
	{}
	void show()
	{
		cout<<"Distance is "<<feet<<"\'"<<inch<<"\""<<endl;
	}
	friend float square(dist);
};
float square(dist d)
{
	float a;
	a=d.feet+d.inch/12;
	return a*a;
}
int main()
{
	dist d1(4,5.2);
	d1.show();
	float v;
	v=square(d1);
	cout<<"square is"<<v;
	return 0;
}
