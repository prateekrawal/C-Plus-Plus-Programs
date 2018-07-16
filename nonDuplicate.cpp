#include <iostream>
#include<cstring>
using namespace std;
void remdupl(char*a,int n)
{
	int i=0;
	int index=0;
	while(i<n)
	{
	    int j;
		for(j=0;j<i;j++)
		{
			if(a[i]==a[j])
				break;
		}
		if(j==i)
			a[index++]=a[i];
		i++;
	}
	for(int i=0;i<index;i++)
		cout<<a[i];
}
int main()
{
	char a[100];
	cin.getline(a,100);
	int n=strlen(a);
	remdupl(a,n);

	return 0;
}
