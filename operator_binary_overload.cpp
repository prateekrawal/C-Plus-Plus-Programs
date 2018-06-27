#include<iostream>
using namespace std;
class distance1
{
private:
	int f;
	float i;
public:
	distance1():f(0),i(0)
	{};
	distance1(int feet,float in) : f(feet),i(in)
	{};
	void show()
	{
		cout<<f<<"\'"<<i<<"\""<<endl;
	}
	distance1 operator +(distance1 d2)
	{
		int ft;
		float in;
		ft=f+d2.f;
		in=i+d2.i;
		if(in>12.0)
		{
			in-=12.0;
			ft++;
		}

		return distance1(ft,in);
		//return d3;

	}

};
int main()
{
	distance1 d1(1,2);
	distance1 d2(4,5.4);
	distance1 d3;
	d1.show();
	d2.show();
	d3.show();
	d3=d1+d2;
	d1.show();
	d2.show();
	d3.show();
	return 0;
}
