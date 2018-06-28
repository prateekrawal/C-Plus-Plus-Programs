#include<iostream>
using namespace std;
int main()
{
	void strcpy(char*,char* const);
	char str1[50];
	char str[]= "Hey this is Parteek\n";
	cout<<"string 1 is  " <<str;
	strcpy(str1,str);
	cout<<"string 2 is  " <<str1;

	return 0;
}
void strcpy(char*dest,char*src)
{
	while( *src)
	{
		*dest++ = *src++;
	}
	*dest='\0';
}
