#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
	set<string,less<string> >vegetables;
	set<string,less<string> > :: iterator iter;
	vegetables.insert("Tomato");
	vegetables.insert("Potato");
	vegetables.insert("Beans");
	vegetables.insert("Ladyfinger");
	vegetables.insert("cabbage");
	vegetables.insert("Carrot");
	vegetables.insert("Raddish");
	vegetables.insert("Oregano");
	iter=vegetables.begin();
	while(iter!=vegetables.end())
	{
		cout<<*iter++<<endl;
	}
	string low,up;
	cout<<"Enter Lower and Upper Range\n";
	cin>>low>>up;
	iter=vegetables.lower_bound(low);
	while(iter!=vegetables.upper_bound(up))
	{
		cout<<*iter++<<endl;
	}
	return 0;
}
