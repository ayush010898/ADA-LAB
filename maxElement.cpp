#include <iostream>
using namespace std;
int main()
{
	int num,i,max=0;
	cout<<"enter array size";
	cin>>num;
	int a[num];
	for(i=0;i<num;i++)
	{
		cout<<"enter array elements";
		cin>>a[i];
	}
	for(i=0;i<num;i++)
	{
		if(a[i]>>max)
		{
			max=a[i];
		}
	}
	cout<<"largest is"<<max;
	return 0;
}