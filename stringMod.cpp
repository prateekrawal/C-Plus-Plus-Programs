#include <iostream>
using namespace std;
#include <string>
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		if(i%2 == 0)
			s[i]=s[i] +1;
		else
			s[i]=s[i] -1;
	}
	cout<<s<<endl;

	return 0;
}
