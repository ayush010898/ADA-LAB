#include<bits/stdc++.h>
using namespace std;
int Value[10][10],n;

int knapsack(int w[],int value[], int W);

int main()
{
	cout<<"Enter the no of elements:";
	cin>>n;
	int w[n], value[n], W;
	cout<<"Enter the values:";
	for(int i=1;i<=n;i++)
		cin>>value[i];
	
	cout<<"Enter the weights:";
	for(int i=1;i<=n;i++)
		cin>>w[i];
	cout<<"Enter the limit:";
	cin>>W;
	int sol=knapsack(w,value,W);

	cout<<"sol:"<<sol<<endl;
	return 0;
}


int knapsack(int w[],int value[], int W)
{
	for(int i=0;i<=n;i++)
		Value[i][0]=0;
		
	for(int i=1;i<=W;i++)
		Value[0][i]=0;
		
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=W;j++)
		{
			if(j-w[i]>=0)
			{
				Value[i][j]=max(Value[i-1][j],value[i] + Value[i-1][j-w[i]]);
			}
			else{
				Value[i][j]=Value[i-1][j];
			}
		}
	}
	return Value[n][W];
}
