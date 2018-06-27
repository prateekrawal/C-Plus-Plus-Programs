#include <iostream>
using namespace std;
class counter
{
private:
	int count;
public:
	counter():count(0)
	{};
	counter(int n):count(n)
	{};
	void showcount()
	{
		cout<<"The count is "<<count<<endl;
	}
	void operator ++()
	{
		++count;
	}

};
class dist
{
private:
	int ft;
	float in;
public:
	dist():ft(0),in(0)
	{};
	dist(int n, float f):ft(n),in(f)
	{};
	void showdata()
	{
		cout<<"The dist is "<<ft<<"\'"<<in<<"\""<<endl;
	}
	dist operator + (dist d1)
	{
		dist d2;
		d2.ft=ft+d1.ft;
		d2.in=in+d1.in;
		if(d2.in>12)
			{
				d2.in-=12;
				d2.ft++;
			}
		return d2;

	}

};
 int main()
 {
 	counter c1(6);
 	counter c2;
 	c1.showcount();
 	c2.showcount();
 	++c1;
 	c1.showcount();
 	++c2;
 	c2.showcount();
 	dist d1(1,2);
 	dist d2(4,3);
 	d1.showdata();
 	d2.showdata();
 	dist d3;
 	d3=d1+d2;
 	d3.showdata();
 	return 0;
 }
