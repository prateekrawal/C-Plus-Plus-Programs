#include <iostream>
using namespace std;
int main()
{
	int digit;
	long long int num;
	cout<<"enter the digit\n";
	cin>>digit;
	cout<<"Enter the Number\n";
	cin>>num;
	int count =0;
	while(num!=0)
	{
		int k=num%10;
		if(k==digit)
			count++;
		num=num/10;
	}
	cout<<"No of times digit is in Num ber is "<<count<<endl;
	return 0;
}
