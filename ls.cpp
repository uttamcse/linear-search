#include<iostream>
using namespace std;

ls(int arr[],int size,int num)
{
	int temp=-1;
	for(int i=0;i<size;i++)
	{
		if(arr[i]==num)
		{
			cout<<"value found on position "<<i+1;
			temp=0;
			break;
		}
	}
	if(temp==-1)
	{
		cout<<"value not found ";
	}
}
int main()
{
	int size;
	cout<<"entr the size of array : ";
	cin>>size;
	
	int arr[size];
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	int num;
	cout<<"enter the num : ";
	cin>>num;
	ls(arr,size,num);
	return 0;
}
