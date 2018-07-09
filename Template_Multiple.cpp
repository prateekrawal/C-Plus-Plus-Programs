#include <iostream>
using namespace std;
template <class atype>
int find(atype* arr,atype value,int size)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==value)
			return i;
	}
	return -1;
}
int main()
{
	char a[]={'1','2','3','4'};
	char b='4';
	int c[]={2,4,5,6,9};
	int d=0;
	long e[]={ 60L,33L,56L,90L};
	long f=33L;

	cout<<"Find char   "<<find(a,b,4)<<endl;
	cout<<"Find Int   "<<find(c,d,4)<<endl;
	cout<<"Find Long   "<<find(e,f,4)<<endl;
	return 0;
}
