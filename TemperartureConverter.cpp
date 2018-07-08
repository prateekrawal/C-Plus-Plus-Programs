#include <iostream>
using namespace std;
int main()
{
	float c,f;
	const float a=5.0/9.0;
	cout<<"Enter temp in fahrenheit\n";
	cin>>f;
	c=f-32;
	c=c*a;
	cout<<"Temp in Celcius is "<<c<<endl;

	return 0;
}
