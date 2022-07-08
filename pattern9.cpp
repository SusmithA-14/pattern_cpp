//inverted pattern with no's.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    /* one code code
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    */
   for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
   }

}



/*
output

1 2 3 4 5 
1 2 3 4
1 2 3
1 2
1

*/