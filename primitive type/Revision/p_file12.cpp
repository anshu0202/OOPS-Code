#include<iostream>
using namespace std;
class distance1{
	private:
	int km,meter;
	public:
		void set(int x, int y)
		{
			km=x;
			meter=y;
		}
		operator int(){
			return (km*1000)+meter;
		}
};
int main()
{
	distance1 d1;
	int a,b;
	cout<<"Enter distance in Kilometer\n";
	cin>>a;
	cout<<"Enter distance in meter\n";
	cin>>b;
	d1.set(a,b);
	int x;
	x=d1;// conversion from class type to primitive type
	cout<<"Total distance in meter is: "<<x<<endl;
	return 0;
}

