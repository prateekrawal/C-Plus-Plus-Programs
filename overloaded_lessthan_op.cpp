#include<iostream>
using namespace std;
class dist
{
private:
	int ft;
	int in;
public:
	dist() : ft(1),in(2)
	{}
	dist(int f,int i) : ft(f),in(i)
	{}
	bool operator < (dist d2) const;
	void show()
	{
		cout<<ft<<"\'"<<in<<"\""<<endl;
	}
};
bool dist::operator < (dist d2) const
{
	if(d2.ft>ft)
		return true;
	else if(d2.ft<ft)
		return false;
	else if(d2.in>=in)
		return true;
	else
		return false;
}
int main()
{
	dist d1;
	dist d2 (2,3);
	d1.show();
	d2.show();
	cout<<(d2<d1);


	return 0;
}
