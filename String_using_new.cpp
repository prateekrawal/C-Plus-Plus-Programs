#include<iostream>
#include<string.h>
using namespace std;
class String
{
private:
	char* str;
public:
	String()
	{
		*str = '\0';
	}
	String(char*s)
	{
		int len=strlen(s);
		str=new char[len+1];
		strcpy(str,s);
	}
	~String()
	{
		cout<<"deleting string\n";
		delete[] str;
	}
	void display()
	{
		cout<<str<<endl;
	}
};
int main()
{
	String String1="Welcome to the world of awesomeness\n";
	cout<<"s1= ";
	String1.display();
	return 0;
}
