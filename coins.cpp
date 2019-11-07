#include<bits/stdc++.h> 
using namespace std; 
  

int minCoins(int coins[], int n, int V) 
{ 
    int table[V+1]; 
    table[0] = 0; //V is 0
  
    for (int i=1; i<=V; i++) 
        table[i] = INT_MAX; 

    for (int i=1; i<=V; i++) 
    { 
        // Go through all coins smaller than i 
        for (int j=0; j<n; j++) 
          if (coins[j] <= i) 
          { 
              int sub_res = table[i-coins[j]]; 
              if (sub_res != INT_MAX && sub_res + 1 < table[i]) 
                  table[i] = sub_res + 1; 
          } 
    } 
    return table[V]; 
} 
  
int main() 
{ 
	int n,V;
	cout << "enter number of coins available\n";
	cin >> n;
    int coins[n];
	cout << "enter the coin values\n";
	for(int i = 0; i < n; i++)
		cin >> coins[i];
	cout <<"enter the change amount\n";
	cin >> V;
    cout << "Minimum coins required is "
         << minCoins(coins, n, V)<<"\n"; 
    return 0; 
} 