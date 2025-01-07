/*
Ques:
Print the Given Pattern

*******
*** ***
**   **
*     * 

-->> Star Bridge
*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=2*n-1; i++){
        cout<<"*";
    }
    cout<<endl;
    int m = n-1; // New lines
    int nsp = 1;
    for(int i=1; i<=m; i++){
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";
        }
        // Spaces
        for(int k=1; k<=nsp; k++){
            cout<<" ";

        }
        nsp+=2;
        // Star
        for(int j=1; j<=m+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}