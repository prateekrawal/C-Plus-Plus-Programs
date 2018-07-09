#include <iostream>
using namespace std;
template <class T>
T abs(T arg)
{
	return (arg<0)?-arg:arg;
}
int main()
{
	int a=9;
	int b=-3;
	float c=4.03;
	float d=-9.76;
	long e=8L;
	long f=-6L;
	cout<<a<<"  IN ABSOLUTE  "<<abs(a)<<endl;
	cout<<b<<"  IN ABSOLUTE  "<<abs(b)<<endl;
	cout<<c<<"  IN ABSOLUTE  "<<abs(c)<<endl;
	cout<<d<<"  IN ABSOLUTE  "<<abs(d)<<endl;
	cout<<e<<"  IN ABSOLUTE  "<<abs(e)<<endl;
	cout<<f<<"  IN ABSOLUTE  "<<abs(f)<<endl;
	return 0;
}
