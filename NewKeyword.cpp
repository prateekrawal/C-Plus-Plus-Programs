#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char* str="Welcome to the future\n";
	int len=strlen(str);
	char* ptr;
	ptr=new char[len+1];
	strcpy(ptr,str);
	cout<<str<<endl;
	cout<<ptr<<endl;
	delete[] ptr;
	return 0;
}
