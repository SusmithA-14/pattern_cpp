#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){//upside
        for(int j=1;j<=i;j++){//left side '*'
            cout<<"*";
        }
        int space=2*n-2*i;//for space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){//right side '*'
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=n;i>=1;i--){//downside
        for(int j=1;j<=i;j++){//left side '*'
            cout<<"*";
        }
        int space=2*n-2*i;//for space
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){//right side '*'
            cout<<"*";
        }
        cout<<endl;
    }
}



/*
output

5
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *

*/