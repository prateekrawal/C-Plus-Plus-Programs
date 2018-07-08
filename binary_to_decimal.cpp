//Binary to decimal
#include <iostream>
using namespace std;
int binToDec(long long int k);
int main()
{
	long long int n;
	cout<<"Enter the number in Binary"<<endl;
	cin>>n;
	int k=binToDec(n);
	cout<<k<<endl;
	return 0;
}
int binToDec(long long int k)
{
	int a,no,power;
	no=0;
	power=1;
	while(k!=0)
	{
		a=k%10;
		if(a==1 || a==0)
		{
			no=no+a*power;
			power*=2;
		}
		else
		{
			cout<<"Number not a Binary\n";
			return 0;
		}
		k=k/10;
	}
	return no;

}
