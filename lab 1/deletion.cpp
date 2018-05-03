#include<iostream>
using namespace std;
int main()
  {
  	int i,A[5];
  	cout<<"Enter the values of array:"<<endl;
	{
	   	for(i=0; i<5; i++)
	   	cin>>A[i];
	}
	cout<<"Stored elements in array:"<<endl;
	
	for(i=0; i<5; i++)
	{
	   	cout<<A[i]<<" "<<endl;
	}
	int pos;
	cout<<"Enter position to delete:"<<endl;
	cin>>pos;
	
	--pos;
	
	for(i=pos; i<=4; i++)
	{
	    A[i]=A[i+1];
	}
cout<<"New Data in Array:"<<endl;
	
	for(i=0; i<4; i++)
	{
	    cout<<A[i]<<" "<<endl;
	}
	return 0;
}
