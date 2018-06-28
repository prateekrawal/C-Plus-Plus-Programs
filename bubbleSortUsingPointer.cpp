#include <iostream>
using namespace std;
 int main()
 {
 	void bsort(int *,int );
 	void swap(int *a,int*b);
 	int n;
 	cout<<"Enter the number in array\n";
 	cin>>n;
 	int arr[n];
 	for(int i=0;i<n;i++)
 		cin>>arr[i];
 	bsort(arr,n);
 	for(int j=0;j<n;j++)
 		cout<<arr[j]<<"  ";
 	return 0;
 }
 void bsort(int* arr,int n)
 {
 	for(int i=0;i<n-1;i++)
 		for(int j=i+1;j<n;j++)
 		{
 		     void swap(int* a,int* b);

 			if(*(arr+i)<*(arr+j))
 				swap(arr+i,arr+j);
 		}
 }
 void swap(int* a,int* b)
 {
 	int temp= *a;
 	*a=*b;
 	*b=temp;
 }
