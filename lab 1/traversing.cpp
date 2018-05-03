#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int num;
	cout<<"Enter values:"<<endl;
	{
		for(int i=0; i<5;i++)
		cin>>arr[i];
	}
	cout<<"Enter a number to find:"<<endl;
	cin>>num;
	for(int j=0; j<5; j++)
	{
		if(num==arr[j])
		{
			cout<<num<<" "<<"is on location"<<" "<<j<<endl;
		}
	}
	return 0;
}
