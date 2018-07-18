#include <iostream>
using namespace std;
void printodd(int n)
{
	if(n%2==0)
		n--;
	cout<<n<<" ";
	return;
}
void printeven(int n)
{
	if(n%2!=0)
		n--;
	cout<<n<<" ";
	return;
}
void printl(int n)
{
	if(n==1)
    {
        cout<<n<<" ";
        return;
    }
    if(n==0)
        return;
	printodd(n);
	printl(n-2);
	printeven(n);
}
int main()
{
	int n;
	cin>>n;
	printl(n);
	return 0;
}
