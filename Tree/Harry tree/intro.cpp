#include<iostream>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
int main(){
	  node *head=0,*newnode,*newnode2,*newnode3,*temp;
			cout<<"Enter data of node\n";
			newnode = new node;
			cin>>newnode->data;
			newnode->left=NULL;
			newnode->right=NULL;
			cout<<"Enter data of node\n";
			newnode2 = new node;
			cin>>newnode2->data;
			newnode2->left=NULL;
			newnode2->right=NULL;
			cout<<"Enter data of node\n";
			newnode3 = new node;
			cin>>newnode3->data;
			newnode3->left=NULL;
			newnode3->right=NULL;
			newnode->left=newnode2;
			newnode->right=newnode3;
		}

