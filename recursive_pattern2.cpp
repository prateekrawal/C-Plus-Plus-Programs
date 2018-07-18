#include <iostream>
using namespace std;
void printrow(int n)
{
	if(n<1)
		return;
	cout<<"*"<<" ";
	printrow(n-1);
}
int i=0;
void printp(int n)
{
    if(n<1)
        return;
	i++;
    printrow(i);
	cout<<endl;
	printp(n-1);
}
int main()
{
	int n;
	cin>>n;
	printp(n);
	return 0;
}
