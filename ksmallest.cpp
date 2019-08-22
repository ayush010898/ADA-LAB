#include<iostream>
using namespace std;

int ksmallest(int arr[],int k,int n){
	int temp;
 for(int i=0;i<n;i++){
   for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;}
        }
       }
	return arr[k-1];
}

int main()
{
	int n,k;
	cout<<"enter number of elements";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"enter kth element";
	cin>>k;
	cout<<"the kth smallest element is" << ksmallest(arr,k,n);
}