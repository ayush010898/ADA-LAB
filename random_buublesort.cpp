#include <iostream>
using namespace std;

int main()
{
	clock_t start = clock();
	int count, i, num, first, last, middle;
	int temp;
	cout<<"number of elements"; 
        cin>>count;
	long int arr[count];
	for (i=0; i<count; i++)
	{
		arr[i]=rand()%100000;
	}
	cout<<"The array is: "<<endl;
	for (i=0; i<count; i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<count;i++){
   for(int j=0;j<count-i-1;j++){
        if(arr[j]>arr[j+1]){
             temp=arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;}
        }
       }
	   cout<<"the sorted array is :"<<endl;
	   for (i=0;i<count;i++)
	   {
		   cout<<arr[i]<<endl;
		}
		clock_t end = clock();
		double time_taken = double(end - start) / double(CLOCKS_PER_SEC); 
    cout << "Time taken by program is : " << fixed  
         << time_taken; 
    cout << " sec " << endl;
	return 0;
}