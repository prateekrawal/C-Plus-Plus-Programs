#include <iostream>
using namespace std;
long long int source_to_decimal(long long int,int);
long long int decimal_to_dest(long long int,int);
int main()
{
	int sb,db;
	long long int source,dest;
	cout<<"enter the source base number \n";
	cin>>sb;
	cout<<"Enter the destination base number\n";
	cin>>db;
	cout<<"Enter the Source number\n";
	cin>>source;
	long long int d=source_to_decimal(source,sb);
	dest=decimal_to_dest(d,db);
	cout<<"The number in destination base type is\n"<<dest;
	return 0;
}
long long int source_to_decimal(long long int source,int sb)
{
	long long int d=0;
	int i=1;
	while(source!=0)
	{
		int r=source%10;
		d=d+r*i;
		i=i*sb;
		source=source/10;
	}
	return d;

}
long long int decimal_to_dest(long long int d,int db)
{
	int i=1;
	long long int dest=0;
	while(d!=0)
	{
		int r=d%db;
		dest=dest+ r*i;
		i=i*10;
		d=d/db;
	}
	return dest;
}
