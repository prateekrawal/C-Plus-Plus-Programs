#include<iostream>
#include <string>
using namespace std;
class person
{
	protected:
		string name;
	public:
		void show()
		{
			cout<<name<<"  ";
		}
		void input()
		{
		cout<<"Enter the string\n";
		cin>>name;
		}
		string get()
		{
			return name;
		}
};
int main()
{
	void bubsort(person**,int);
	person* name[100];
	int n=0;
	char a='y';
	while(a!='n')
	{
		name[n]=new person;
		name[n]->input();
		n++;
		cout<<"do you wish to continue (y/n)"<<endl;
		cin>>a;
	}
	cout<<"Unordered list\n";
	for(int i=0;i<n;i++)
	{
		name[i]->show();
	}
	bubsort(name,n);
	cout<<"Ordered list\n";
	for(int i=0;i<n;i++)
	{
		name[i]->show();
	}
	return 0;
}
void bubsort(person** name,int n)
{
	void order(person**,person**);
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			order(name+i , name+j);
		}
}
void order(person** a,person**b)
{
	if((*a)->get()>(*b)->get())
	{	person* temp= *a;
		*a = *b;
		*b = temp;
	}
}
