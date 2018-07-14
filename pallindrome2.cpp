
#include <iostream>
using namespace std;
#include <string>
int main()
{
	string str;
	cin>>str;
	int len=str.length();
	for(int i=0;i<len/2;i++)
	{
		if(str[i]!=str[len-i-1])
		{
			cout<<"No\n";
			return 0;
		}
	}
	cout<<"Yes\n";
	return 0;
}
