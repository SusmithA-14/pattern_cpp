#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            cout<<"  ";
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        k=2;
        for(;j<=n+i-1;j++){
            cout<<k++<<" ";
        }
        cout<<endl;
    }

}



/*
output

5
        1 
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5


*/