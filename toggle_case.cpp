#include<iostream>
using namespace std;
#include <string>
void togglecase(char*s);
int main()
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len;i++)
	{
		togglecase(&s[i]);
	}
	cout<<s<<endl;
	return 0;
}
void togglecase(char*s)
{
	if(*s<=96)
		*s=*s+32;
	else
		*s=*s-32;
}
