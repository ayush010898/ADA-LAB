#include <iostream>
using namespace std;

int main()
{
	int count, i, num, first, last, middle;
	long int arr[1000];
	cout<<"number of elements"; 
        cin>>count;

	for (i=0; i<count; i++)
	{
		arr[i]=rand()%100;
	}
	cout<<"The array is: "<<endl;
	for (i=0; i<count; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"Enter the number to search:"; 
        cin>>num;
	first = 0;
	last = count-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;

	   }
	   else if(arr[middle] == num)
	   {
		cout<<num<<" found";
                break; 
           } 
           else { 
                last = middle - 1; 
           } 
           middle = (first + last)/2; 
        } 
        if(first > last)
	{
	   cout<<num<<" not found";
	}
	return 0;
}
