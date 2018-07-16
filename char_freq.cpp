#include <bits/stdc++.h>
using namespace std;
void printfreq(char* a,int n)
{
	int freq[26]={0};
	for(int i=0;i<n;i++)
		freq[a[i]-'a']++;
	for(int i=0;i<n;i++)
	{
		   if (freq[a[i] - 'a'] != 0)
		    {

            // print the charcter along with its
            // frequency
            cout << a[i] << freq[a[i] - 'a'] << " ";

            // update frequency of str[i] to 0 so
            // that the same character is not printed
            // again
            freq[a[i] - 'a'] = 0;
        }
	}
}
int main()
{
	char a[100];
	cin.getline(a,100);
	int n=strlen(a);
	printfreq(a,n);
	return 0;
}
