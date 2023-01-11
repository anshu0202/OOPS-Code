#include<iostream>
using namespace std;
class student{
	private:
		int roll_no;
		char name[20];
		class address{
			private:
				int house_no;
				char street[20];
				char city[20];
			public:
			void set_address(int n,char *s,char *c){
				house_no=n;
				strcpy(street,s);
				strcpy(city,c);
			} 	 
		};
		address add;
		public:
			void set_roll(int r){
				roll_no=r;
			}
			void set_name(char *n){
				strcpy(name,n);
			}
};
