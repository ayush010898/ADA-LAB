#include<iostream>
using namespace std;

int main()
{
	int n,k,i,temp,count=0;
	cout<<"enter number of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter kth element";
	cin>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;}
        }
       }
	for(i=n-1;i>=0;i--)
	{
		if(count==k)
		{
			break;
		}
		else
		{
			cout<<"the k largest elements are:"<<arr[i];
		}
		count++;
	}
	return 0;
}	