#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
struct node{
	int data;
	node* prev;
	node* next;
};

node* head = NULL;

node* getNewNode(int item){
	node* newNode = (node*)malloc(sizeof(node));
	(*newNode).data = item;
	(*newNode).prev = NULL;
	(*newNode).next = NULL;
	return newNode;
}

void insert(node* newNode){
	node* last_node = (node*)malloc(sizeof(node));
	last_node = head;
	head = newNode;
	newNode -> prev = NULL;
	newNode -> next = last_node;
	cout<<"\n\nData Entered Press Enter to add more:";
	getch();
	return;
}

void display(){
	node* newNode = (node*)malloc(sizeof(node));
	newNode = head;
	cout<<"\n\nlist is:\n\n";
	while(newNode != NULL){
		cout<<newNode -> data<<" ";
		newNode = newNode -> next;
	}

	getch();
	return;
}

int main(){
	int opt, num;
	node* newNode;
	up:
	system("cls");
	cout<<"\t\t\t\tMENU\n";
	cout<<"\t1. Insert Data\n";
	cout<<"\t2. Display Data\n";
	cout<<"\t3. select any number from above:";
	cin>>opt;
	if(opt == 1){
		cout<<"\n\nEnter Numbers to insert:";
		cin>>num;
		newNode = getNewNode(num);
		insert(newNode);
		goto up;
	}
	else if(opt == 2){
		display();
		goto up;
	}
	else if(opt == 3){
		exit(0);
	}
	else{
		cout<<"\n\nError!";
		cout<<"\n\nPress Enter:";
		getch();
		goto up;
	}
	return 0;
}
