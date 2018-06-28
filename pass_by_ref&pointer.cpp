#include<iostream>
using namespace std;
int main()
{
	void square(int& a);
	void square1(int* p);
	int a;
	cout<<"Enter the value of the varialble\n";
	cin>>a;
	square(a);
	cout<<"This is pass by reference  "<<a<<endl;
    square1(&a);
	cout<<"This is pass by pointer   "<<a<<endl;

	return 0;
}
void square(int& a)
{
	a= a*a;

}
void square1(int* p)
{
	*p *= *p;
}
