/*

c
|
1      *       *      
2    *   *   *   *   
3  *       *       *
r->1 2 3 4 5 6 7 8 9

there are fixed no.of rows i.e, 3
and col no. may vary.

>> we can see that when (i(row)+j(col))%4==0 then there is a star or when it is 2nd col and j%4==0 then also there is star.
>>it mean's when
 (i(row)+j(col))%4==0 or ((i==2) and (j%4==0)) there is star
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    for(int i=1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0 || (i==2 && j%4==0)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}



/*
output

9
  *   *  
 * * * *
*   *   *


*/