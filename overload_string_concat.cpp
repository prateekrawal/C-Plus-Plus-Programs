#include <iostream>
using namespace std;
class String
{
private:
	enum { size=80};
	char st[size];
public:
	String():st("\0");
	{}
	String(char[] s) : st(s)
	{}
	String operator + (string s) const
	{
		String t;
		if()
	}
}
int main()
{
	return 0;
}