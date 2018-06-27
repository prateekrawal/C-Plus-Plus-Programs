#include<iostream>
#include <string.h>
using namespace std;
class String
{
private:
	enum { sz=80};
	char str[sz];
public:
	String()
	{ str[0]='\0';}
	String(char s[])
	{
		strcpy(str,s);
	}
	void display() const
	{
		cout<<"String is "<<str<<endl;
	}
	operator char*()
	{
		return str;
	}
};
 int main()
 {
 	String s1;
 	char xs[]="Hey this is Parteek\n";
 	s1=xs;
 	s1.display();
 	String s2="Bye bye See You Again\n";
 	cout<<static_cast<char*>(s2);
 	cout<<endl;
 	return 0;
 }
