    #include<iostream>
	#include<stdio.h>
	#include <unistd.h>
	#include<cstdlib>
	#define SIZE 5
	using namespace std;
	int Data[SIZE];
	int front=-1;
	int rear=-1;
	void Enter(int m) {
	if(rear>4) {
	cerr<<"Queue is full..!!\n";
	front=rear=-1;
	}else {
	Data[++rear]=m;
	cout<<"\nData is sucessfully Entered..!!\n";
	}
	}
	
	void Delete() {
	if(front==rear) {
	cerr<<"Queue is Empty..!!\n";
	}else {
	cout<<"Deleted "<<Data[++front]<<endl;
	}
	}
	
	void display()
	{
	if(rear==front)
	{
	cout <<" Queue empty\n";
	return;
	}
	for(int i=front+1;i<=rear;i++)
	cout <<Data[i]<<"\n";
	}
	
	void list() {
	cout<<"Press 1 to Enter Data"<<endl;
	cout<<"Press 2 to Display Data"<<endl;
	cout<<"Press 3 to Remove Data"<<endl;
	cout<<"Press 4 to Exit"<<endl;
	}
	
	int choice;
	string Ask="y";
	int input;
	int main() 
	{
	do {
	system("cls");
	list();
	cout<<"Enter any number to select:";
	cin>>choice;
	switch (choice){
	case 1:
	do {
	system("cls");
	cout<<"\t\tQueue Data Entry\n\n";
	cout<<"Enter a number:"<<endl;
	cin>>input;
	Enter(input);
	cout<<"Want to continue?"<<endl;
	cout<<" y/n";
	cin>>Ask;
	}while(Ask!="n");
	break;
	
	case 2:
	do {
	system("cls");
	cout<<"\t\tQueue Current Data\n\n";
	display();
	cout<<"Want to continue? "<<endl;
	cout<<"y/n";
	cin>>Ask;
	}while(Ask!="n");
	break;
	
	case 3:
	do {
	system("cls");
	cout<<"\t\tData Deleted from Queue\n\n";
	Delete();
	cout<<"Want to continue?"<<endl;
	cout<<"y/n";
	cin>>Ask;
	}while(Ask!="n");
	break;
	}
	}while(choice!=4);
	return 0;
	}
