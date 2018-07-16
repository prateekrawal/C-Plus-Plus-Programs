//id string is aaabbcd then output =
//a3b2cd
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	char str[100];
	cin.getline(str,100);
	int n=strlen(str);
	int j=0;
	char count='1';
	for(int i=1;i<n;i++)
	{
		if(n<2)
		{
			cout<<str<<endl;
			return 0;
		}
		if(str[i]==str[j])
		{
			count++;
		}
		else
		{
			if(count=='1')
			{
				j++;
				str[j]=str[i];
			}
			else
			{
				j++;
				char c=count;
				str[j]=c;

				j++;
				str[j]=str[i];
			}
			count='1';
		}
	}
	str[++j]='\0';
	cout<<str<<endl;
	return 0;
}
