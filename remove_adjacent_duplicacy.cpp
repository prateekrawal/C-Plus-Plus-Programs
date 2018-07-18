#include <iostream>
#include <string>
using namespace std;
void removedup(char* s)
{
	if(s[0] =='\0')
		return;
	if(s[0] ==s [1])
	{
		int i=0;
		while(s[i]!='\0')
			s[i]=s[++i];
		removedup(s);//recursive
	}
	else
		removedup(s+1);
}
int main()
{
	char s[100];
	cin.getline(s,100);
	removedup(s);
	cout<<s<<endl;
	return 0;
}
