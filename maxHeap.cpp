#include<bits/stdc++.h>
using namespace std;
bool MaxHeap(int a[],int n){
    bool flag;

    for(int i=1;i<=floor(n/2);i++){
        if((2*(i))+1<=n){
        if(a[i]>= max(a[2*i],a[(2*i)+1])){
            flag=true;
        }
        else{
            flag=false;
        break;
        }
        }
        else{
            if(a[i]>=a[2*(i)]){
                flag=true;
            }
            else{
                flag=false;
                break;
            }
        }
    }
    return flag;
}
int main(){
    int a[20],n;
        cout<<"Enter the size of array: ";
        cin>>n;
        cout<<n;
        cout<<"Enter elements of the array: ";
        for(int i=1;i<=n;i++)
            cin>>a[i];
        if(MaxHeap(a,n)){
            cout<<"True";
        }
        else
            cout<<"False";
}