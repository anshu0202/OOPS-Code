/*
Maps are used to replicate associated arrays.
Maps contain sortred key-value pair , in which each key is unique and cannot be changed ,
and it can be inserted or deleted but cannot be altered.
Values associated with a key can be altered.
-->Map always arrange its keys in sorted array
-->In case the keys are of string type, they are sorted in dictionary order.
Arrays is of two types 
1)Numeric arrays -> eg. int a[5],char b[2] student [8].
In numeric arrays index is a number
2)Associated arrays also called map -> eg. 
in this type of array index is a name instead of number



-->******************************************<--
How to create Map?
there are two ways to create a map
*/
// ways to create map
#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int , string>  customer;// first key is given then its value here customer is the object of the map
    customer[100]= "Anshu";
    customer[123]= "Laxmikant";
    customer[150]= "Mayank";
    customer[123]= "Laxmikant2";
    customer[150]= "Mayank251";
    customer[160]= "Sundram";
    customer[180]= "Zaid";
    customer[180]="kalu";
    // Other way to create map
    map<int, string> c{ {100,"anshu"},{120,"mayank"},{150,"Rahul"},{150,"kinshu"} };

    //Useful functios of map
    //cout<<customer[100];
    // by creating iterator we can print all valus using a loop
    map<int, string>::iterator p=customer.begin();// p is the name of the iterator
    while(p!=customer.end()){
        cout<<p->second<<endl;// second is use to print value to print key first is use
        p++;
    }
    // customer.insert(pair<int , string>(200,"himanshu"));
    // map<int, string>::iterator p1=customer.begin();// p is the name of the iterator
    // while(p1!=customer.end()){
    //     cout<<p1->second<<endl;// second is use to print value to print key first is use
    //     p1++;
    // }
    return 0;
}