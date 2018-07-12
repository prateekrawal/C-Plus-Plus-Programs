#include <iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
	string name[]={"Beta","gamma","alpha","zeta","pie"};
	set <string , less<string> > set1(name,name+5);//initialize the set
	set <string , less<string> > :: iterator iter;
	set1.insert("theta");
	set1.insert("kappa");
	set1.insert("iota");
	set1.insert("epsilon");
	set1.erase("Beta");
	cout<<"Size is "<<set1.size()<<endl;
	iter=set1.begin();
	while(iter!=set1.end())
	{
		cout<<*iter<<"    ";
		iter++;
	}
	string a;
	cout<<"Enter a string to search\n";
	cin>>a;
	iter=set1.find(a);
	if(iter== set1.end())\
		cout<<"Not Found\n";
	else
		cout<<"Found\n"<<*iter<<endl;
	return 0;
}