#include <bits/stdc++.h> 
using namespace std; 
  
float squareRoot(int number) 
{ 
    int start = 0, end = number; 
    int mid; 
    float ans; 
    while (start <= end) { 
        mid = (start + end) / 2; 
        if (mid * mid == number) { 
            ans = mid; 
            break; 
        } 
        if (mid * mid < number) { 
            start = mid + 1; 
            ans = mid; 
        } 
        else { 
            end = mid - 1; 
        } 
    } 
    return ans; 
} 
  
int main() 
{ 
    cout << squareRoot(49) << endl; 
    cout << squareRoot(100) << endl; 
    return 0; 
} 