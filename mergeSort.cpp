#include <iostream>
using namespace std;
void merge(int*a,int start,int mid,int last)
{
	int p=mid-start+1;
	int q=last-mid;
	int a1[p],a2[q];
	for(int i=0;i<p;i++)
		a1[i]=a[start+i];
	for(int i=0;i<q;i++)
	{
		a2[i]=a[i+mid+1];
	}
	int d1=0,d2=0;
	int s=start;
	while(d1<p && d2<q)
	{
		if(a1[d1]<=a2[d2])
		{
			a[s]=a1[d1];
			d1++;
		}
		else if(a1[d1]>a2[d2])
		{
			a[s]=a2[d2];
			d2++;
		}
		s++;
	}
	while(d1<p)
	{
		a[s]=a1[d1];
		d1++;
		s++;

	}
	while(d2<q)
	{
		a[s]=a2[d2];
		d2++;
		s++;
	}
}
void mergesort(int*a,int start,int last)
{
	if(start<last)
	{
	    cout<<"Merge sort"<<start<<"  "<<last<<endl;
		int mid=(start+last)/2;
		mergesort(a,start,mid);
		mergesort(a,mid+1,last);
		merge(a,start,mid,last);
	}

}
int main()
{
	int a[]={2,4,5,3,1,9,8};
	mergesort(a,0,6);
	for(int i=0;i<7;i++)
		cout<<a[i]<<"  ";
	cout<<endl;
	return 0;
}
