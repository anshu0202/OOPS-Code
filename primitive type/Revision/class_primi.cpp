// class to primitive conversion
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
	d1.set(3,450);
	int x;
	x=d1;// conversion from class type to primitive type
	cout<<"Total distance in meter is: "<<x<<endl;
	return 0;
}

