//rectangular pattern
#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++)//for row
    { 
        for(int j=1;j<=col;j++)//for column
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}




/* 
output:

5 4
* * * * 
* * * *
* * * *
* * * *
* * * * 


*/