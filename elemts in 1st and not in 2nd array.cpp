//ElementsIn 1st not in 2nd
#include <iostream>
using namespace std;
#include <unordered_set>
void func(int*a , int *b , int n,int m);

int main()
{
	int n,m;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cin>>m;
	int b[m];
	for(int i=0;i<m;i++)
		cin>>b[i];
	func(a,b,n,m);
	return 0;
}

void func(int*a , int *b , int n,int m)
{
	unordered_set <int> s;
	for(int i=0;i<m;i++)
		s.insert(b[i]);
	for(int i=0;i<n;i++)
	{
		if(s.find(a[i]) == s.end())
			cout<<a[i]<<"    ";
	}
	cout<<endl;
}