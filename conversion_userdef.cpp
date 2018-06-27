#include<bits/stdc++.h>
using namespace std;
class distance1
{
private:
	int feet;
	float in;
	const int mtf;
public:
	distance1():feet(0),in(0.0),mtf(3.280833F)
	{}
	distance1(int f,float inc):feet(f),in(inc),mtf(3.280833F)
	{}
	distance1(float metre):mtf(3.280833F)
	{
		float f=metre*mtf;
		feet=static_cast<int>(f);
		in=(f-feet)*mtf;
	}
	void showdis() const
	{
		cout<<feet<<" ' "<<in<<"\""<<endl;
	}
	void getdis()
	{
		cout<<"Enter the feet\n";
		cin>>feet;
		cout<<"Enter the inches\n";
		cin>>in;
	}
	operator float() const
	{
		float fracfeet=in/12;
		fracfeet+=static_cast<float>(feet);
		return fracfeet/mtf;
	}
};
int main()
{
	float mtrs;
    distance1 dist1 = 2.35; //uses 1-arg constructor to
//convert meters to Distance    cout << “\n dist1 = “;
    dist1.showdis();
    mtrs = static_cast<float>(dist1); //uses conversion operator
    //for Distance to meters
    cout <<"\n dist1 =  "<< mtrs << " meters \n";
    distance1 dist2(5, 10.25); //uses 2-arg constructor
    mtrs = dist2; //also uses conversion op
    cout << "\n dist2 = " << mtrs << " meters \n";
    // dist2 = mtrs;
	return 0;
}
