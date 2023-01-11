#include<iostream>
#include<cstring>
using namespace std;
/*
rules for virtual function
1) they cannot be static
2)they are accessed by object pointer
3)virtual function can be friend of another class
4)a function in base class can might not be used
5)if a virtual function is define in base class there is no nessisity of redefinning it in the derived class
*/
class CWH{
	protected:
		float rating;
		string  title;
	public:
		CWH(string s, float r){
			title=s;
			rating =r;
		}
	virtual	void display(){
			cout<<"empty\n";
		}	
};
class CWH_video:public CWH{
	int videolength;
	public:
		CWH_video(string s, float r,int vl):CWH(s,r){
			videolength=vl;
		}
		void display(){
			cout<<"This is an amazing video with title "<<title<<endl;
			cout<<"This video has rating "<<rating<<endl;
			cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
		}
};
class CWH_text:public CWH{
	int words;
	public:
		CWH_text(string s, float r,int wc):CWH(s,r){
			words=wc;
		}
//			void display(){
//			cout<<"This is an amazing text with title "<<title<<endl;
//			cout<<"This text has rating "<<rating<<endl;
//			cout<<"Length of this text is "<<words<<" minutes"<<endl;
//		}
};
int main(){
	string title;
	float rating;
	int words,videolength;
	title="this is video1";
	rating=8;
	videolength=38;
	CWH_video good(title,rating,videolength);
//	good.display();
		title="this is text1";
	rating=9;
	words=567;
	CWH_text t1(title,rating,words);
//	t1.display();
	CWH *ptr[2];
	ptr[0]=&good;
	ptr[1]=&t1;
	ptr[0]->display();
		cout<<"*****************************************************************\n";
	ptr[1]->display();
	return 0;	
}
