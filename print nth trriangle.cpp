#include <iostream>
using namespace std;
int printtria(int n)
{
	if(n<1)
		return 0;
	cout<<n<<"+";
	return n+printtria(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<"="<<printtria(n);
	return 0;
}
