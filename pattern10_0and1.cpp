//0-1 pattern
/*4

1
0 1
1 0 1
0 1 0 1

as we see 1's are in places where i(row)+j(col)=even
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,sum;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            sum=i+j;
            if(sum%2==0){
                cout<<"1"<<" ";
            }
            else{
                cout<<"0"<<" ";
            }
        }
        cout<<endl;
    }
}



/*
output

5
1 
0 1
1 0 1
0 1 0 1
1 0 1 0 1


*/