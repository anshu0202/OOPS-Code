#include <iostream>  
using namespace std;  
class student {  
   private:
       int roll;     
       string name; 
       int standard; 
	public:   
	    void getdata(int i, string n, int s)   
        {    
            roll = i;    
            name = n;    
            standard = s;  
        }    
       void display()    
        {    
            cout<<"Name : "<<name<<"\nClass : "<<standard<<"\nRoll_No : "<<roll<<endl;
        }    
};  
int main() {  
      student s1,s2,s3;
      s1.getdata(30,"Rishu",5);
      s2.getdata(24,"Mohan",4);
      s3.getdata(13,"Amit",6);
      s1.display();
      s2.display();
      s3.display();
    return 0;  
} 
