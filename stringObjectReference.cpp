
#include <iostream>
using namespace std;
#include <cstring>
class StrCnt
{
private:
	int count;
	char* str;
	friend class String;
	StrCnt(char* s)
	{
		int len=strlen(s);
		str=new char[len+1];
		strcpy(str,s);
		count=1;
	}
	~StrCnt()
	{
		delete [] str;
	}
};
class String
{
private:
	StrCnt* ptr;
public:
	String()
	{
		ptr=new StrCnt("NULL");
	}
	String(char* s)
	{
		ptr=new StrCnt(s);
	}
	String (String& s)//Copy constructor
	{
		ptr=s.ptr;
		(ptr->count)++;
	}
	~String()
	{
		if(ptr->count == 1)
			delete ptr;
		else
			(ptr->count)--;
	}
	void display()
	{
		cout<<ptr->str<<endl;
		cout<<"Address is "<<ptr<<endl;
	}
	String& operator =(String& S) //assign the string
	{
		if(ptr->count == 1)
			delete ptr;//IMPORTANT THING
		else
			(ptr->count)--;
		ptr=S.ptr;
		(ptr->count)++;
		return *this;//This enables chained assignment operator i.e a=b=c;
	}
};
int main()
{
	char abc[]="hey thsi is Mike Ross\n";
	String s1(abc);
	cout<<"String 1 is \n";s1.display();
	String s2;
	s2=s1;
	cout<<"String s2 is \n"; s2.display();
	String s3(s2);
	String s4,s5;
    s4=s5=s1;
	s4.display();
	s5.display();
	cout<<"String s3 is \n"; s3.display();
	return 0;
}
