#include <iostream>
#include <cmath>
using namespace std;

void printPowerSet(int *a, int arr_size)
{
    /*set_size of power set of a set with set_size
      n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, arr_size);
    int counter, j;

    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {
      cout<<"{";
      for(j = 0; j < arr_size; j++)
       {
          /* Check if jth bit in the counter is set
             If set then pront jth element from set */
          if(counter & (1<<j))
            cout<< a[j]<<" ";
       }
       cout<<"}"<<endl;
    }
}

/*Driver program to test printPowerSet*/
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
      cin>>a[i];
    printPowerSet(a,n);
    return 0;
}
