#include<iostream>
#define R 20
#define C 20
using namespace std;
    int a[R][C],n1,n2;
    bool visited[R][C];

        void input(){
        cout<<"Rows\n";
        cin>>n1;
        cout<<"Columns:\n";
        cin>>n2;
        for (int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
            visited[i][j]=false;
        }
        }
        cout<<"Enter matrix\n";
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                cin>>a[i][j];
            }}
       }
       int valid(int a[][C],int row,int col,bool visited[][C]){
           return ((row>=0)&&(row<n1)&&(col>=0)&&(col<n2)&&(a[row][col]&& !visited[row][col]));
       }
       void DFS(int a[][C],int row,int col,bool visited[][C]){
           static int rowNbr[]={-1,-1,-1,0,0,1,1,1};
           static int colNbr[]={-1,0,1,-1,1,-1,0,1};
           visited[row][col]=true;
           for(int k=0;k<8;k++){
            if(valid(a,row+rowNbr[k],col+colNbr[k],visited)){
                DFS(a,row+rowNbr[k],col+colNbr[k],visited);
            }
           }
       }
       int countIslands(int a[][C]){
           int count=0;
           for(int i=0;i<n1;++i){
            for(int j=0;j<n2;++j){
                if(a[i][j] && !visited[i][j]){
                DFS(a,i,j,visited);
                ++count;
                }
            }
           }
           return count;

       }


int main(){
input();
int n=countIslands(a);
cout<<"Total islands are"<<n;
return 0;
}
