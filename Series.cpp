//Program that takes n1 and n2 and print member of series 3n+2 which are not multiples of n2
//series.cpp
#include <iostream>
using namespace std;
int main()
{
	int n1,n2;
	cin>>n1>>n2;
	for(int i=0;i<n1;i++)
	{
		int k=3*i + 2;
		if(k%n2!=0)
			cout<<k<<endl;
	}
	return 0;
}
