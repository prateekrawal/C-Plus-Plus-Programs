#include <iostream>
using namespace std;
#include<cstring>
int main()
{
	char a[100];
	cin.getline(a,100);
	char b[200];
	int n=strlen(a);
	for(int i=0,j=0;i<2*n-1;)
	{
		b[i]=a[j];
		if(a[j+1]!='\0')
		b[i+1]=int(a[j]-a[j+1]);
		j++;
		i=i+2;
	}

	for(int l=0;l<2*n;l++)
		cout<<b[l];
	cout<<endl;

	return 0;
}
