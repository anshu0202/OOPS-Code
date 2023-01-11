#include<iostream>
#include<cstring>
using namespace std;
class Base {
	protected:
		float rating;
		string  title;
	public:
		Base(string s, float r){
			title=s;
			rating =r;
		}
	virtual	void display(){
		}	
};
class video:public Base{
	int videolength;
	public:
		video(string s, float r,int vl):Base(s,r){
			videolength=vl;
		}
		void display(){
			cout<<"This is an amazing video with title "<<title<<endl;
			cout<<"This video has rating "<<rating<<endl;
			cout<<"Length of this video is "<<videolength<<" minutes"<<endl;
		}
};
class text:public Base{
	int words;
	public:
		text(string s, float r,int wc):Base(s,r){
			words=wc;
		}
			void display(){
			cout<<"This is an amazing text with title "<<title<<endl;
			cout<<"This text has rating "<<rating<<endl;
			cout<<"Length of this text is "<<words<<" minutes"<<endl;
		}
};
int main(){
	string title;
	float rating;
	int words,videolength;
	title="this is video1";
	rating=8;
	videolength=38;
	video good(title,rating,videolength);
		title="this is text1";
	rating=9;
	words=567;
	text t1(title,rating,words);
	Base *ptr[2];
	ptr[0]=&good;
	ptr[1]=&t1;
	ptr[0]->display();
		cout<<"*****************************************************************\n";
	ptr[1]->display();
	return 0;	
}
