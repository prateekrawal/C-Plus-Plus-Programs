#include <iostream>
using namespace std;
const signed int maxi=4;
class stack
{
	private:
		int top;
		int st[maxi];
	public:
		stack()
		{
			top=-1;
		}
		class range
		{

		};
		void push(int a)
		{
		    cout<<"Push";
			if(top==maxi-1)
				throw range();
			else
			{
				st[++top]=a;
			}
		}
		void pop()
		{
			if(top==-1)
				throw range();
			cout<<st[top--]<<endl;
		}
};
int main()
{
	stack s1;
	try
	{
		s1.push(1);
		s1.push(2);
		s1.push(3);
		s1.push(4);
		//s1.push(5);
		//s1.push(6);
		s1.pop();
		s1.pop();
		s1.pop();
		s1.pop();
		s1.pop();
		s1.pop();
		s1.pop();

	}
	catch(stack::range)
	{
		cout<<"OOPS! Out of Bounds\n";
	}

	cout<<"Normal Exit\n";

		return 0;
}
