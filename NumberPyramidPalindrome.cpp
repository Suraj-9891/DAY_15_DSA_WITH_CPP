/*
Ques:
Print the Following Pattern

*/
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a Row Number : "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        for(int q=i-1; q>=1; q--){
            cout<<q;
        }
        cout<<endl;
    }

    return 0;
}