#include <iostream>
using namespace std;
 int main()
 {
 	const int days=7;
 	char* week[days]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
 	for(int i=0;i<days;i++)
 	{
 		cout<<week[i]<<"\n";
 	}
 	return 0;
 }