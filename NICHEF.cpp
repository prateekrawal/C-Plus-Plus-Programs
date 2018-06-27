#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a,b;
		cin>>n>>a>>b;
		int ab[n];
		float ca=0,cb=0;
		for(int i=0;i<n;i++)
		{
			cin>>ab[i];
			if(ab[i]==a)
				ca++;
			if(ab[i]==b)
				cb++;
		}
		//cout<<ca<<"   "<<cb<<"   "<<n;
		double s=(float(ca/n)*float(cb/n));
		cout<<s<<endl;
	}
	return 0;
}
