#include <iostream>
#include <string>
using namespace std;
class person
{
protected:
	string name;
public:
	void getname()
	{
		cout<<"Enter the name \n";
		cin>>name;
	}
	void putname()
	{
		cout<<name<<endl;
	}
	virtual void getdata()=0;
	virtual bool isOutstanding()=0;
};
class student:public person
{
private:
	float gpa;
public:
	void getdata()
	{
		person::getname();
		cout<<"Enter the GPA out of 5.0\n";
		cin>>gpa;
	}
	bool isOutstanding()
	{
		if(gpa> 4.0)
            return true;
        else
            return false;
	}
};
class teacher:public person
{
private:
	int nop;
public:
	void getdata()
	{
		person::getname();
		cout<<"Enter the number of Publications\n";
		cin>>nop;
	}
	bool isOutstanding()
	{
		if(nop>50)
            return true;
        else return false;
	}

};

int main()
{
	person* arr[100];
	int n=0;
	char c,l;
	do
	{
		cout<<"Enter data for s/t";
		cin>>c;
		if(c=='s')
		{
			arr[n] = new student;
		}
		if(c=='t')
			arr[n]=new teacher;

		arr[n++]->getdata();
		cout<<"Enter more data y/n";
		cin>>l;
	}while(l=='y');
	for(int i=0;i<n;i++)
	{
		arr[i]->putname();
		if(arr[i]->isOutstanding())
			cout<<"This person is Outstanding\n";
	}
	return 0;
}
