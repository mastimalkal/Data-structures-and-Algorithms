#include<iostream>
using namespace std;
int main()
{
	int arr[10], i,j, k;
	
	cout<<"Enter the Values:"<<endl;
	{
		for(i=0; i<5; i++)
		cin>>arr[i];
	}
	int ins,pos;
	cout<<"Enter the value to insert:"<<endl;
	cin>>ins;
	cout<<"Enter position where value has to be insert:"<<endl;
	cin>>pos;
	for(j=4; j>=pos; j--)
	{
		arr[j+1] = arr[j];
	}
	arr[pos] = ins;
	for(k=0; k<6; k++)
	{
		cout<<arr[k]<<" "<<endl;
	}
	return 0;
}
