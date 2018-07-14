#include <iostream>
using namespace std;
#include <string>
bool checkpallindrome(string s , int start,int last);
int main()
{
	string s;
	cin>>s;
	int count=0;
	int len=s.length();
	for(int k=1;k<len;k++)
		for(int i=0,j=i+k;j<len;i++,j++)
		{	if(checkpallindrome(s,i,j))
			count++;
		}
	cout<<"Count is "<<count;
	return 0;
}
bool checkpallindrome(string s,int start,int last)
{
	int len=last-start+1;
	//cout<<"CAll\n";
	for(int i=0;i<len/2;i++)
	{
		if(s[i]!=s[len-i-1])
		{
			//cout<<"No\n";
			return false;
		}
	}
	return true;
}
