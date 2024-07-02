#include<iostream>
using namespace std;

int main()
{
	char arr[100];
	int size ;
	
	cout<<"Enter the size of array: "<<endl;
	cin>>size;
	cout<<"Enter array Elements: "<<endl;
	
	for(int i=0; i<=size ; i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Reverse Elements are: "<<endl;
	for(int i=size; i>=0 ; i--)
	{
		cout<<arr[i]<<" ";
	}
	
	
		return 0;
}
